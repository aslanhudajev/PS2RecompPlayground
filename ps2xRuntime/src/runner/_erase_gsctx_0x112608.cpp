#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _erase_gsctx
// Address: 0x112608 - 0x1126d8
void _erase_gsctx_0x112608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_erase_gsctx_0x112608");
#endif

    ctx->pc = 0x112608u;

    // 0x112608: 0x3c080021  lui         $t0, 0x21
    ctx->pc = 0x112608u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)33 << 16));
    // 0x11260c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11260cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112610: 0x8d02fb48  lw          $v0, -0x4B8($t0)
    ctx->pc = 0x112610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294966088)));
    // 0x112614: 0x1840002e  blez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x112614u;
    {
        const bool branch_taken_0x112614 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x112618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112614u;
            // 0x112618: 0x100582d  daddu       $t3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112614) {
            ctx->pc = 0x1126D0u;
            goto label_1126d0;
        }
    }
    ctx->pc = 0x11261Cu;
    // 0x11261c: 0x3c0a0021  lui         $t2, 0x21
    ctx->pc = 0x11261cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)33 << 16));
    // 0x112620: 0x8d42fb4c  lw          $v0, -0x4B4($t2)
    ctx->pc = 0x112620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294966092)));
    // 0x112624: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x112624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x112628: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x112628u;
    {
        const bool branch_taken_0x112628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11262Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112628u;
            // 0x11262c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112628) {
            ctx->pc = 0x1126D0u;
            goto label_1126d0;
        }
    }
    ctx->pc = 0x112630u;
    // 0x112630: 0x8d46fb4c  lw          $a2, -0x4B4($t2)
    ctx->pc = 0x112630u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294966092)));
    // 0x112634: 0x0  nop
    ctx->pc = 0x112634u;
    // NOP
label_112638:
    // 0x112638: 0x1262821  addu        $a1, $t1, $a2
    ctx->pc = 0x112638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x11263c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x11263cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x112640: 0x54440019  bnel        $v0, $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x112640u;
    {
        const bool branch_taken_0x112640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x112640) {
            ctx->pc = 0x112644u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x112640u;
            // 0x112644: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1126A8u;
            goto label_1126a8;
        }
    }
    ctx->pc = 0x112648u;
    // 0x112648: 0x8d03fb48  lw          $v1, -0x4B8($t0)
    ctx->pc = 0x112648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294966088)));
    // 0x11264c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x11264cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x112650: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x112650u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x112654: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x112654u;
    {
        const bool branch_taken_0x112654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112654u;
            // 0x112658: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112654) {
            ctx->pc = 0x112690u;
            goto label_112690;
        }
    }
    ctx->pc = 0x11265Cu;
    // 0x11265c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x11265cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112660: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x112660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x112664: 0x482821  addu        $a1, $v0, $t0
    ctx->pc = 0x112664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x112668: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x112668u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11266c: 0x0  nop
    ctx->pc = 0x11266cu;
    // NOP
label_112670:
    // 0x112670: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x112670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x112674: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x112674u;
    {
        const bool branch_taken_0x112674 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x112678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112674u;
            // 0x112678: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112674) {
            ctx->pc = 0x112698u;
            goto label_112698;
        }
    }
    ctx->pc = 0x11267Cu;
    // 0x11267c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x11267cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x112680: 0x2446fffc  addiu       $a2, $v0, -0x4
    ctx->pc = 0x112680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x112684: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x112684u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x112688: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x112688u;
    {
        const bool branch_taken_0x112688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11268Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112688u;
            // 0x11268c: 0x24a5fffc  addiu       $a1, $a1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112688) {
            ctx->pc = 0x112670u;
            goto label_112670;
        }
    }
    ctx->pc = 0x112690u;
label_112690:
    // 0x112690: 0x3e00008  jr          $ra
    ctx->pc = 0x112690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112690u;
            // 0x112694: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x112638u: goto label_112638;
            case 0x112670u: goto label_112670;
            case 0x112690u: goto label_112690;
            case 0x112698u: goto label_112698;
            case 0x1126A8u: goto label_1126a8;
            case 0x1126D0u: goto label_1126d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x112698u;
label_112698:
    // 0x112698: 0x1281021  addu        $v0, $t1, $t0
    ctx->pc = 0x112698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x11269c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x11269cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1126a0: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1126A0u;
    {
        const bool branch_taken_0x1126a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1126A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1126A0u;
            // 0x1126a4: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1126a0) {
            ctx->pc = 0x112690u;
            goto label_112690;
        }
    }
    ctx->pc = 0x1126A8u;
label_1126a8:
    // 0x1126a8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1126a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1126ac: 0x8d02fb48  lw          $v0, -0x4B8($t0)
    ctx->pc = 0x1126acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294966088)));
    // 0x1126b0: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x1126b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1126b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1126B4u;
    {
        const bool branch_taken_0x1126b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1126B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1126B4u;
            // 0x1126b8: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1126b4) {
            ctx->pc = 0x1126D0u;
            goto label_1126d0;
        }
    }
    ctx->pc = 0x1126BCu;
    // 0x1126bc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1126bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1126c0: 0x1261821  addu        $v1, $t1, $a2
    ctx->pc = 0x1126c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x1126c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1126c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1126c8: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1126C8u;
    {
        const bool branch_taken_0x1126c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1126CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1126C8u;
            // 0x1126cc: 0x8d46fb4c  lw          $a2, -0x4B4($t2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294966092)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1126c8) {
            ctx->pc = 0x112638u;
            goto label_112638;
        }
    }
    ctx->pc = 0x1126D0u;
label_1126d0:
    // 0x1126d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1126D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1126D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1126D0u;
            // 0x1126d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x112638u: goto label_112638;
            case 0x112670u: goto label_112670;
            case 0x112690u: goto label_112690;
            case 0x112698u: goto label_112698;
            case 0x1126A8u: goto label_1126a8;
            case 0x1126D0u: goto label_1126d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1126D8u;
}
