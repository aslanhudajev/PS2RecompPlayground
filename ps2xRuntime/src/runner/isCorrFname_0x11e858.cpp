#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: isCorrFname
// Address: 0x11e858 - 0x11e8ac
void isCorrFname_0x11e858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("isCorrFname_0x11e858");
#endif

    ctx->pc = 0x11e858u;

    // 0x11e858: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x11e858u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11e85c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x11E85Cu;
    {
        const bool branch_taken_0x11e85c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E85Cu;
            // 0x11e860: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e85c) {
            ctx->pc = 0x11E8A4u;
            goto label_11e8a4;
        }
    }
    ctx->pc = 0x11E864u;
    // 0x11e864: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x11e864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x11e868: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x11e868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x11e86c: 0x0  nop
    ctx->pc = 0x11e86cu;
    // NOP
label_11e870:
    // 0x11e870: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x11e870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x11e874: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x11e874u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x11e878: 0x10460005  beq         $v0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E878u;
    {
        const bool branch_taken_0x11e878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x11E87Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E878u;
            // 0x11e87c: 0x28430020  slti        $v1, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e878) {
            ctx->pc = 0x11E890u;
            goto label_11e890;
        }
    }
    ctx->pc = 0x11E880u;
    // 0x11e880: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E880u;
    {
        const bool branch_taken_0x11e880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x11e880) {
            ctx->pc = 0x11E890u;
            goto label_11e890;
        }
    }
    ctx->pc = 0x11E888u;
    // 0x11e888: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E888u;
    {
        const bool branch_taken_0x11e888 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e888) {
            ctx->pc = 0x11E88Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11E888u;
            // 0x11e88c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11E898u;
            goto label_11e898;
        }
    }
    ctx->pc = 0x11E890u;
label_11e890:
    // 0x11e890: 0x3e00008  jr          $ra
    ctx->pc = 0x11E890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E890u;
            // 0x11e894: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11E870u: goto label_11e870;
            case 0x11E890u: goto label_11e890;
            case 0x11E898u: goto label_11e898;
            case 0x11E8A4u: goto label_11e8a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11E898u;
label_11e898:
    // 0x11e898: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x11e898u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11e89c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x11E89Cu;
    {
        const bool branch_taken_0x11e89c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E8A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E89Cu;
            // 0x11e8a0: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e89c) {
            ctx->pc = 0x11E870u;
            goto label_11e870;
        }
    }
    ctx->pc = 0x11E8A4u;
label_11e8a4:
    // 0x11e8a4: 0x3e00008  jr          $ra
    ctx->pc = 0x11E8A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E8A4u;
            // 0x11e8a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11E870u: goto label_11e870;
            case 0x11E890u: goto label_11e890;
            case 0x11E898u: goto label_11e898;
            case 0x11E8A4u: goto label_11e8a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11E8ACu;
}
