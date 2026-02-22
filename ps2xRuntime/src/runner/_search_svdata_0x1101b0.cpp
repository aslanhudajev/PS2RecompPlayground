#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _search_svdata
// Address: 0x1101b0 - 0x1101fc
void _search_svdata_0x1101b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1101b0u;

    // 0x1101b0: 0x8ca50028  lw          $a1, 0x28($a1)
    ctx->pc = 0x1101b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x1101b4: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x1101B4u;
    {
        const bool branch_taken_0x1101b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1101b4) {
            ctx->pc = 0x1101F4u;
            goto label_1101f4;
        }
    }
    ctx->pc = 0x1101BCu;
    // 0x1101bc: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1101bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1101c0:
    // 0x1101c0: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1101C0u;
    {
        const bool branch_taken_0x1101c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1101c0) {
            ctx->pc = 0x1101C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1101C0u;
            // 0x1101c4: 0x8ca50014  lw          $a1, 0x14($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1101ECu;
            goto label_1101ec;
        }
    }
    ctx->pc = 0x1101C8u;
    // 0x1101c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1101c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1101cc: 0x0  nop
    ctx->pc = 0x1101ccu;
    // NOP
label_1101d0:
    // 0x1101d0: 0x54440003  bnel        $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1101D0u;
    {
        const bool branch_taken_0x1101d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1101d0) {
            ctx->pc = 0x1101D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1101D0u;
            // 0x1101d4: 0x8c630038  lw          $v1, 0x38($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1101E0u;
            goto label_1101e0;
        }
    }
    ctx->pc = 0x1101D8u;
    // 0x1101d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1101D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1101DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1101D8u;
            // 0x1101dc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1101C0u: goto label_1101c0;
            case 0x1101D0u: goto label_1101d0;
            case 0x1101E0u: goto label_1101e0;
            case 0x1101ECu: goto label_1101ec;
            case 0x1101F4u: goto label_1101f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1101E0u;
label_1101e0:
    // 0x1101e0: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1101E0u;
    {
        const bool branch_taken_0x1101e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1101e0) {
            ctx->pc = 0x1101E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1101E0u;
            // 0x1101e4: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1101D0u;
            goto label_1101d0;
        }
    }
    ctx->pc = 0x1101E8u;
    // 0x1101e8: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x1101e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_1101ec:
    // 0x1101ec: 0x54a0fff4  bnel        $a1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x1101ECu;
    {
        const bool branch_taken_0x1101ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1101ec) {
            ctx->pc = 0x1101F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1101ECu;
            // 0x1101f0: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1101C0u;
            goto label_1101c0;
        }
    }
    ctx->pc = 0x1101F4u;
label_1101f4:
    // 0x1101f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1101F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1101F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1101F4u;
            // 0x1101f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1101C0u: goto label_1101c0;
            case 0x1101D0u: goto label_1101d0;
            case 0x1101E0u: goto label_1101e0;
            case 0x1101ECu: goto label_1101ec;
            case 0x1101F4u: goto label_1101f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1101FCu;
}
