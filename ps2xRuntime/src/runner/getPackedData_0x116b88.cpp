#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: getPackedData
// Address: 0x116b88 - 0x116bd8
void getPackedData_0x116b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("getPackedData_0x116b88");
#endif

    ctx->pc = 0x116b88u;

    // 0x116b88: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x116b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x116b8c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x116b8cu;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)255u)));
    // 0x116b90: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x116b90u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x116b94: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x116b94u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)32767u)));
    // 0x116b98: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x116b98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x116b9c: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x116b9cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x116ba0: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x116BA0u;
    {
        const bool branch_taken_0x116ba0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x116BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116BA0u;
            // 0x116ba4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116ba0) {
            ctx->pc = 0x116BCCu;
            goto label_116bcc;
        }
    }
    ctx->pc = 0x116BA8u;
    // 0x116ba8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x116ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x116bac: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x116bacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_116bb0:
    // 0x116bb0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x116bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x116bb4: 0x90430008  lbu         $v1, 0x8($v0)
    ctx->pc = 0x116bb4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x116bb8: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x116BB8u;
    {
        const bool branch_taken_0x116bb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x116BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116BB8u;
            // 0x116bbc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116bb8) {
            ctx->pc = 0x116BD0u;
            goto label_116bd0;
        }
    }
    ctx->pc = 0x116BC0u;
    // 0x116bc0: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x116bc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x116bc4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x116BC4u;
    {
        const bool branch_taken_0x116bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x116BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x116BC4u;
            // 0x116bc8: 0x61100  sll         $v0, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116bc4) {
            ctx->pc = 0x116BB0u;
            goto label_116bb0;
        }
    }
    ctx->pc = 0x116BCCu;
label_116bcc:
    // 0x116bcc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x116bccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_116bd0:
    // 0x116bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x116BD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x116BB0u: goto label_116bb0;
            case 0x116BCCu: goto label_116bcc;
            case 0x116BD0u: goto label_116bd0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x116BD8u;
}
