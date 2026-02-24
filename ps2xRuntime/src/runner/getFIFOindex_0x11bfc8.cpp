#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: getFIFOindex
// Address: 0x11bfc8 - 0x11c008
void getFIFOindex_0x11bfc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("getFIFOindex_0x11bfc8");
#endif

    ctx->pc = 0x11bfc8u;

    // 0x11bfc8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x11bfc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bfcc: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x11bfccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x11bfd0: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x11bfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x11bfd4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11bfd4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x11bfd8: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x11bfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x11bfdc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x11bfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x11bfe0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x11bfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11bfe4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x11bfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x11bfe8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x11bfe8u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x11bfec: 0x54a30003  bnel        $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BFECu;
    {
        const bool branch_taken_0x11bfec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x11bfec) {
            ctx->pc = 0x11BFF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11BFECu;
            // 0x11bff0: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11BFFCu;
            goto label_11bffc;
        }
    }
    ctx->pc = 0x11BFF4u;
    // 0x11bff4: 0x3e00008  jr          $ra
    ctx->pc = 0x11BFF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BFF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BFF4u;
            // 0x11bff8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11BFFCu: goto label_11bffc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11BFFCu;
label_11bffc:
    // 0x11bffc: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x11bffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11c000: 0x3e00008  jr          $ra
    ctx->pc = 0x11C000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C000u;
            // 0x11c004: 0x212c2  srl         $v0, $v0, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11BFFCu: goto label_11bffc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11C008u;
}
