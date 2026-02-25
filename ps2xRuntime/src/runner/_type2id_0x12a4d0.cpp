#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _type2id
// Address: 0x12a4d0 - 0x12a558
void _type2id_0x12a4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_type2id_0x12a4d0");
#endif

    ctx->pc = 0x12a4d0u;

    // 0x12a4d0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x12a4d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a4d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12a4d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12a4d8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x12a4d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a4dc: 0x2c82000a  sltiu       $v0, $a0, 0xA
    ctx->pc = 0x12a4dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x12a4e0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x12A4E0u;
    {
        const bool branch_taken_0x12a4e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A4E0u;
            // 0x12a4e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a4e0) {
            ctx->pc = 0x12A54Cu;
            goto label_12a54c;
        }
    }
    ctx->pc = 0x12A4E8u;
    // 0x12a4e8: 0x3c080021  lui         $t0, 0x21
    ctx->pc = 0x12a4e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)33 << 16));
    // 0x12a4ec: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x12a4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x12a4f0: 0x250201e8  addiu       $v0, $t0, 0x1E8
    ctx->pc = 0x12a4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 488));
    // 0x12a4f4: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x12a4f4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
    // 0x12a4f8: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x12a4f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x12a4fc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x12a4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x12a500: 0xdc430008  ld          $v1, 0x8($v0)
    ctx->pc = 0x12a500u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x12a504: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12A504u;
    {
        const bool branch_taken_0x12a504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x12A508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A504u;
            // 0x12a508: 0x83102b  sltu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a504) {
            ctx->pc = 0x12A52Cu;
            goto label_12a52c;
        }
    }
    ctx->pc = 0x12A50Cu;
    // 0x12a50c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x12A50Cu;
    {
        const bool branch_taken_0x12a50c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a50c) {
            ctx->pc = 0x12A510u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12A50Cu;
            // 0x12a510: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12A538u;
            goto label_12a538;
        }
    }
    ctx->pc = 0x12A514u;
    // 0x12a514: 0x3402ff00  ori         $v0, $zero, 0xFF00
    ctx->pc = 0x12a514u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65280u)));
    // 0x12a518: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x12a518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x12a51c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12A51Cu;
    {
        const bool branch_taken_0x12a51c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12A520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A51Cu;
            // 0x12a520: 0x250201e8  addiu       $v0, $t0, 0x1E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a51c) {
            ctx->pc = 0x12A534u;
            goto label_12a534;
        }
    }
    ctx->pc = 0x12A524u;
    // 0x12a524: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12A524u;
    {
        const bool branch_taken_0x12a524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A524u;
            // 0x12a528: 0xa72014  dsllv       $a0, $a3, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (GPR_U32(ctx, 5) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a524) {
            ctx->pc = 0x12A540u;
            goto label_12a540;
        }
    }
    ctx->pc = 0x12A52Cu;
label_12a52c:
    // 0x12a52c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12A52Cu;
    {
        const bool branch_taken_0x12a52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A52Cu;
            // 0x12a530: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a52c) {
            ctx->pc = 0x12A538u;
            goto label_12a538;
        }
    }
    ctx->pc = 0x12A534u;
label_12a534:
    // 0x12a534: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x12a534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_12a538:
    // 0x12a538: 0x250201e8  addiu       $v0, $t0, 0x1E8
    ctx->pc = 0x12a538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 488));
    // 0x12a53c: 0xa72014  dsllv       $a0, $a3, $a1
    ctx->pc = 0x12a53cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (GPR_U32(ctx, 5) & 0x3F));
label_12a540:
    // 0x12a540: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x12a540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x12a544: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x12a544u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12a548: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x12a548u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_12a54c:
    // 0x12a54c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x12a54cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a550: 0x3e00008  jr          $ra
    ctx->pc = 0x12A550u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A550u;
            // 0x12a554: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12A52Cu: goto label_12a52c;
            case 0x12A534u: goto label_12a534;
            case 0x12A538u: goto label_12a538;
            case 0x12A540u: goto label_12a540;
            case 0x12A54Cu: goto label_12a54c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12A558u;
}
