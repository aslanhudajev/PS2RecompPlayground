#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _type2id
// Address: 0x11e480 - 0x11e508
void _type2id_0x11e480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11e480u;

    // 0x11e480: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x11e480u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e484: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11e484u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11e488: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x11e488u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e48c: 0x2c82000a  sltiu       $v0, $a0, 0xA
    ctx->pc = 0x11e48cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x11e490: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x11E490u;
    {
        const bool branch_taken_0x11e490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E490u;
            // 0x11e494: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e490) {
            ctx->pc = 0x11E4FCu;
            goto label_11e4fc;
        }
    }
    ctx->pc = 0x11E498u;
    // 0x11e498: 0x3c080017  lui         $t0, 0x17
    ctx->pc = 0x11e498u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)23 << 16));
    // 0x11e49c: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x11e49cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x11e4a0: 0x250216f0  addiu       $v0, $t0, 0x16F0
    ctx->pc = 0x11e4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 5872));
    // 0x11e4a4: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x11e4a4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
    // 0x11e4a8: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x11e4a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x11e4ac: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x11e4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x11e4b0: 0xdc430008  ld          $v1, 0x8($v0)
    ctx->pc = 0x11e4b0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x11e4b4: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11E4B4u;
    {
        const bool branch_taken_0x11e4b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x11E4B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E4B4u;
            // 0x11e4b8: 0x83102b  sltu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e4b4) {
            ctx->pc = 0x11E4DCu;
            goto label_11e4dc;
        }
    }
    ctx->pc = 0x11E4BCu;
    // 0x11e4bc: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x11E4BCu;
    {
        const bool branch_taken_0x11e4bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e4bc) {
            ctx->pc = 0x11E4C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11E4BCu;
            // 0x11e4c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11E4E8u;
            goto label_11e4e8;
        }
    }
    ctx->pc = 0x11E4C4u;
    // 0x11e4c4: 0x3402ff00  ori         $v0, $zero, 0xFF00
    ctx->pc = 0x11e4c4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65280u)));
    // 0x11e4c8: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x11e4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x11e4cc: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E4CCu;
    {
        const bool branch_taken_0x11e4cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11E4D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E4CCu;
            // 0x11e4d0: 0x250216f0  addiu       $v0, $t0, 0x16F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 5872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e4cc) {
            ctx->pc = 0x11E4E4u;
            goto label_11e4e4;
        }
    }
    ctx->pc = 0x11E4D4u;
    // 0x11e4d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11E4D4u;
    {
        const bool branch_taken_0x11e4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E4D4u;
            // 0x11e4d8: 0xa72014  dsllv       $a0, $a3, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (GPR_U32(ctx, 5) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e4d4) {
            ctx->pc = 0x11E4F0u;
            goto label_11e4f0;
        }
    }
    ctx->pc = 0x11E4DCu;
label_11e4dc:
    // 0x11e4dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11E4DCu;
    {
        const bool branch_taken_0x11e4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E4DCu;
            // 0x11e4e0: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e4dc) {
            ctx->pc = 0x11E4E8u;
            goto label_11e4e8;
        }
    }
    ctx->pc = 0x11E4E4u;
label_11e4e4:
    // 0x11e4e4: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x11e4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_11e4e8:
    // 0x11e4e8: 0x250216f0  addiu       $v0, $t0, 0x16F0
    ctx->pc = 0x11e4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 5872));
    // 0x11e4ec: 0xa72014  dsllv       $a0, $a3, $a1
    ctx->pc = 0x11e4ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (GPR_U32(ctx, 5) & 0x3F));
label_11e4f0:
    // 0x11e4f0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x11e4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x11e4f4: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x11e4f4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11e4f8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11e4f8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_11e4fc:
    // 0x11e4fc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x11e4fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e500: 0x3e00008  jr          $ra
    ctx->pc = 0x11E500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E500u;
            // 0x11e504: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11E4DCu: goto label_11e4dc;
            case 0x11E4E4u: goto label_11e4e4;
            case 0x11E4E8u: goto label_11e4e8;
            case 0x11E4F0u: goto label_11e4f0;
            case 0x11E4FCu: goto label_11e4fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11E508u;
}
