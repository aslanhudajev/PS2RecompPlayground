#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: kCopy
// Address: 0x10ec88 - 0x10ecc0
void kCopy_0x10ec88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10ec88u;

    // 0x10ec88: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x10ec88u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x10ec8c: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x10EC8Cu;
    {
        const bool branch_taken_0x10ec8c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EC8Cu;
            // 0x10ec90: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ec8c) {
            ctx->pc = 0x10ECB8u;
            goto label_10ecb8;
        }
    }
    ctx->pc = 0x10EC94u;
    // 0x10ec94: 0x0  nop
    ctx->pc = 0x10ec94u;
    // NOP
label_10ec98:
    // 0x10ec98: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x10ec98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10ec9c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x10ec9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x10eca0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x10eca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x10eca4: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x10eca4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x10eca8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x10eca8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x10ecac: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x10ecacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x10ecb0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x10ECB0u;
    {
        const bool branch_taken_0x10ecb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ecb0) {
            ctx->pc = 0x10EC98u;
            goto label_10ec98;
        }
    }
    ctx->pc = 0x10ECB8u;
label_10ecb8:
    // 0x10ecb8: 0x3e00008  jr          $ra
    ctx->pc = 0x10ECB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10ECBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10ECB8u;
            // 0x10ecbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10EC98u: goto label_10ec98;
            case 0x10ECB8u: goto label_10ecb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10ECC0u;
}
