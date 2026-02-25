#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _dispatchMpegCallback
// Address: 0x12b800 - 0x12b850
void _dispatchMpegCallback_0x12b800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_dispatchMpegCallback_0x12b800");
#endif

    ctx->pc = 0x12b800u;

label_12b800:
    // 0x12b800: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12b800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_12b804:
    // 0x12b804: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12b804u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12b808:
    // 0x12b808: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_12b80c:
    if (ctx->pc == 0x12B80Cu) {
        ctx->pc = 0x12B80Cu;
            // 0x12b80c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x12B810u;
        goto label_12b810;
    }
    ctx->pc = 0x12B808u;
    {
        const bool branch_taken_0x12b808 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B808u;
            // 0x12b80c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b808) {
            ctx->pc = 0x12B840u;
            goto label_12b840;
        }
    }
    ctx->pc = 0x12B810u;
label_12b810:
    // 0x12b810: 0x8c860040  lw          $a2, 0x40($a0)
    ctx->pc = 0x12b810u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_12b814:
    // 0x12b814: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
label_12b818:
    if (ctx->pc == 0x12B818u) {
        ctx->pc = 0x12B818u;
            // 0x12b818: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x12B81Cu;
        goto label_12b81c;
    }
    ctx->pc = 0x12B814u;
    {
        const bool branch_taken_0x12b814 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B814u;
            // 0x12b818: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b814) {
            ctx->pc = 0x12B844u;
            goto label_12b844;
        }
    }
    ctx->pc = 0x12B81Cu;
label_12b81c:
    // 0x12b81c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x12b81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_12b820:
    // 0x12b820: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x12b820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_12b824:
    // 0x12b824: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x12b824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_12b828:
    // 0x12b828: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x12b828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_12b82c:
    // 0x12b82c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_12b830:
    if (ctx->pc == 0x12B830u) {
        ctx->pc = 0x12B830u;
            // 0x12b830: 0xc21021  addu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = 0x12B834u;
        goto label_12b834;
    }
    ctx->pc = 0x12B82Cu;
    {
        const bool branch_taken_0x12b82c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B82Cu;
            // 0x12b830: 0xc21021  addu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b82c) {
            ctx->pc = 0x12B844u;
            goto label_12b844;
        }
    }
    ctx->pc = 0x12B834u;
label_12b834:
    // 0x12b834: 0x60f809  jalr        $v1
label_12b838:
    if (ctx->pc == 0x12B838u) {
        ctx->pc = 0x12B838u;
            // 0x12b838: 0x8c460010  lw          $a2, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->pc = 0x12B83Cu;
        goto label_12b83c;
    }
    ctx->pc = 0x12B834u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12B83Cu);
        ctx->pc = 0x12B838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B834u;
            // 0x12b838: 0x8c460010  lw          $a2, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12B800u: goto label_12b800;
            case 0x12B804u: goto label_12b804;
            case 0x12B808u: goto label_12b808;
            case 0x12B80Cu: goto label_12b80c;
            case 0x12B810u: goto label_12b810;
            case 0x12B814u: goto label_12b814;
            case 0x12B818u: goto label_12b818;
            case 0x12B81Cu: goto label_12b81c;
            case 0x12B820u: goto label_12b820;
            case 0x12B824u: goto label_12b824;
            case 0x12B828u: goto label_12b828;
            case 0x12B82Cu: goto label_12b82c;
            case 0x12B830u: goto label_12b830;
            case 0x12B834u: goto label_12b834;
            case 0x12B838u: goto label_12b838;
            case 0x12B83Cu: goto label_12b83c;
            case 0x12B840u: goto label_12b840;
            case 0x12B844u: goto label_12b844;
            case 0x12B848u: goto label_12b848;
            case 0x12B84Cu: goto label_12b84c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12B83Cu; }
            if (ctx->pc != 0x12B83Cu) { return; }
        }
    }
    ctx->pc = 0x12B83Cu;
label_12b83c:
    // 0x12b83c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x12b83cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12b840:
    // 0x12b840: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12b840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12b844:
    // 0x12b844: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x12b844u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_12b848:
    // 0x12b848: 0x3e00008  jr          $ra
label_12b84c:
    if (ctx->pc == 0x12B84Cu) {
        ctx->pc = 0x12B84Cu;
            // 0x12b84c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x12B850u;
        goto label_fallthrough_0x12b848;
    }
    ctx->pc = 0x12B848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B848u;
            // 0x12b84c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12B800u: goto label_12b800;
            case 0x12B804u: goto label_12b804;
            case 0x12B808u: goto label_12b808;
            case 0x12B80Cu: goto label_12b80c;
            case 0x12B810u: goto label_12b810;
            case 0x12B814u: goto label_12b814;
            case 0x12B818u: goto label_12b818;
            case 0x12B81Cu: goto label_12b81c;
            case 0x12B820u: goto label_12b820;
            case 0x12B824u: goto label_12b824;
            case 0x12B828u: goto label_12b828;
            case 0x12B82Cu: goto label_12b82c;
            case 0x12B830u: goto label_12b830;
            case 0x12B834u: goto label_12b834;
            case 0x12B838u: goto label_12b838;
            case 0x12B83Cu: goto label_12b83c;
            case 0x12B840u: goto label_12b840;
            case 0x12B844u: goto label_12b844;
            case 0x12B848u: goto label_12b848;
            case 0x12B84Cu: goto label_12b84c;
            default: break;
        }
        return;
    }
label_fallthrough_0x12b848:
    ctx->pc = 0x12B850u;
}
