#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _dispatchMpegCallback
// Address: 0x11f780 - 0x11f7d0
void _dispatchMpegCallback_0x11f780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11f780u;

label_11f780:
    // 0x11f780: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11f780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_11f784:
    // 0x11f784: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11f784u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11f788:
    // 0x11f788: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_11f78c:
    if (ctx->pc == 0x11F78Cu) {
        ctx->pc = 0x11F78Cu;
            // 0x11f78c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x11F790u;
        goto label_11f790;
    }
    ctx->pc = 0x11F788u;
    {
        const bool branch_taken_0x11f788 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F788u;
            // 0x11f78c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f788) {
            ctx->pc = 0x11F7C0u;
            goto label_11f7c0;
        }
    }
    ctx->pc = 0x11F790u;
label_11f790:
    // 0x11f790: 0x8c860040  lw          $a2, 0x40($a0)
    ctx->pc = 0x11f790u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_11f794:
    // 0x11f794: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
label_11f798:
    if (ctx->pc == 0x11F798u) {
        ctx->pc = 0x11F798u;
            // 0x11f798: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x11F79Cu;
        goto label_11f79c;
    }
    ctx->pc = 0x11F794u;
    {
        const bool branch_taken_0x11f794 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F794u;
            // 0x11f798: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f794) {
            ctx->pc = 0x11F7C4u;
            goto label_11f7c4;
        }
    }
    ctx->pc = 0x11F79Cu;
label_11f79c:
    // 0x11f79c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x11f79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_11f7a0:
    // 0x11f7a0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x11f7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_11f7a4:
    // 0x11f7a4: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x11f7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_11f7a8:
    // 0x11f7a8: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x11f7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_11f7ac:
    // 0x11f7ac: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_11f7b0:
    if (ctx->pc == 0x11F7B0u) {
        ctx->pc = 0x11F7B0u;
            // 0x11f7b0: 0xc21021  addu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = 0x11F7B4u;
        goto label_11f7b4;
    }
    ctx->pc = 0x11F7ACu;
    {
        const bool branch_taken_0x11f7ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F7B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F7ACu;
            // 0x11f7b0: 0xc21021  addu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f7ac) {
            ctx->pc = 0x11F7C4u;
            goto label_11f7c4;
        }
    }
    ctx->pc = 0x11F7B4u;
label_11f7b4:
    // 0x11f7b4: 0x60f809  jalr        $v1
label_11f7b8:
    if (ctx->pc == 0x11F7B8u) {
        ctx->pc = 0x11F7B8u;
            // 0x11f7b8: 0x8c460010  lw          $a2, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->pc = 0x11F7BCu;
        goto label_11f7bc;
    }
    ctx->pc = 0x11F7B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11F7BCu);
        ctx->pc = 0x11F7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F7B4u;
            // 0x11f7b8: 0x8c460010  lw          $a2, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11F780u: goto label_11f780;
            case 0x11F784u: goto label_11f784;
            case 0x11F788u: goto label_11f788;
            case 0x11F78Cu: goto label_11f78c;
            case 0x11F790u: goto label_11f790;
            case 0x11F794u: goto label_11f794;
            case 0x11F798u: goto label_11f798;
            case 0x11F79Cu: goto label_11f79c;
            case 0x11F7A0u: goto label_11f7a0;
            case 0x11F7A4u: goto label_11f7a4;
            case 0x11F7A8u: goto label_11f7a8;
            case 0x11F7ACu: goto label_11f7ac;
            case 0x11F7B0u: goto label_11f7b0;
            case 0x11F7B4u: goto label_11f7b4;
            case 0x11F7B8u: goto label_11f7b8;
            case 0x11F7BCu: goto label_11f7bc;
            case 0x11F7C0u: goto label_11f7c0;
            case 0x11F7C4u: goto label_11f7c4;
            case 0x11F7C8u: goto label_11f7c8;
            case 0x11F7CCu: goto label_11f7cc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11F7BCu; }
            if (ctx->pc != 0x11F7BCu) { return; }
        }
    }
    ctx->pc = 0x11F7BCu;
label_11f7bc:
    // 0x11f7bc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x11f7bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11f7c0:
    // 0x11f7c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11f7c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11f7c4:
    // 0x11f7c4: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x11f7c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_11f7c8:
    // 0x11f7c8: 0x3e00008  jr          $ra
label_11f7cc:
    if (ctx->pc == 0x11F7CCu) {
        ctx->pc = 0x11F7CCu;
            // 0x11f7cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x11F7D0u;
        goto label_fallthrough_0x11f7c8;
    }
    ctx->pc = 0x11F7C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F7C8u;
            // 0x11f7cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11F780u: goto label_11f780;
            case 0x11F784u: goto label_11f784;
            case 0x11F788u: goto label_11f788;
            case 0x11F78Cu: goto label_11f78c;
            case 0x11F790u: goto label_11f790;
            case 0x11F794u: goto label_11f794;
            case 0x11F798u: goto label_11f798;
            case 0x11F79Cu: goto label_11f79c;
            case 0x11F7A0u: goto label_11f7a0;
            case 0x11F7A4u: goto label_11f7a4;
            case 0x11F7A8u: goto label_11f7a8;
            case 0x11F7ACu: goto label_11f7ac;
            case 0x11F7B0u: goto label_11f7b0;
            case 0x11F7B4u: goto label_11f7b4;
            case 0x11F7B8u: goto label_11f7b8;
            case 0x11F7BCu: goto label_11f7bc;
            case 0x11F7C0u: goto label_11f7c0;
            case 0x11F7C4u: goto label_11f7c4;
            case 0x11F7C8u: goto label_11f7c8;
            case 0x11F7CCu: goto label_11f7cc;
            default: break;
        }
        return;
    }
label_fallthrough_0x11f7c8:
    ctx->pc = 0x11F7D0u;
}
