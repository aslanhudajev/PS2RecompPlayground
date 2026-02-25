#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _search_svdata
// Address: 0x131ae8 - 0x131b34
void _search_svdata_0x131ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_search_svdata_0x131ae8");
#endif

    ctx->pc = 0x131ae8u;

    // 0x131ae8: 0x8ca50028  lw          $a1, 0x28($a1)
    ctx->pc = 0x131ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x131aec: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x131AECu;
    {
        const bool branch_taken_0x131aec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x131aec) {
            ctx->pc = 0x131B2Cu;
            goto label_131b2c;
        }
    }
    ctx->pc = 0x131AF4u;
    // 0x131af4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x131af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_131af8:
    // 0x131af8: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x131AF8u;
    {
        const bool branch_taken_0x131af8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131af8) {
            ctx->pc = 0x131AFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x131AF8u;
            // 0x131afc: 0x8ca50014  lw          $a1, 0x14($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x131B24u;
            goto label_131b24;
        }
    }
    ctx->pc = 0x131B00u;
    // 0x131b00: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x131b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x131b04: 0x0  nop
    ctx->pc = 0x131b04u;
    // NOP
label_131b08:
    // 0x131b08: 0x54440003  bnel        $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x131B08u;
    {
        const bool branch_taken_0x131b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x131b08) {
            ctx->pc = 0x131B0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x131B08u;
            // 0x131b0c: 0x8c630038  lw          $v1, 0x38($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x131B18u;
            goto label_131b18;
        }
    }
    ctx->pc = 0x131B10u;
    // 0x131b10: 0x3e00008  jr          $ra
    ctx->pc = 0x131B10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131B10u;
            // 0x131b14: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x131AF8u: goto label_131af8;
            case 0x131B08u: goto label_131b08;
            case 0x131B18u: goto label_131b18;
            case 0x131B24u: goto label_131b24;
            case 0x131B2Cu: goto label_131b2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x131B18u;
label_131b18:
    // 0x131b18: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x131B18u;
    {
        const bool branch_taken_0x131b18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x131b18) {
            ctx->pc = 0x131B1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x131B18u;
            // 0x131b1c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x131B08u;
            goto label_131b08;
        }
    }
    ctx->pc = 0x131B20u;
    // 0x131b20: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x131b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_131b24:
    // 0x131b24: 0x54a0fff4  bnel        $a1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x131B24u;
    {
        const bool branch_taken_0x131b24 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x131b24) {
            ctx->pc = 0x131B28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x131B24u;
            // 0x131b28: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x131AF8u;
            goto label_131af8;
        }
    }
    ctx->pc = 0x131B2Cu;
label_131b2c:
    // 0x131b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x131B2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131B2Cu;
            // 0x131b30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x131AF8u: goto label_131af8;
            case 0x131B08u: goto label_131b08;
            case 0x131B18u: goto label_131b18;
            case 0x131B24u: goto label_131b24;
            case 0x131B2Cu: goto label_131b2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x131B34u;
}
