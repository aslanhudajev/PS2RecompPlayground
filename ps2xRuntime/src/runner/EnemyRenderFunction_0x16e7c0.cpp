#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyRenderFunction
// Address: 0x16e7c0 - 0x16e818
void EnemyRenderFunction_0x16e7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyRenderFunction_0x16e7c0");
#endif

    ctx->pc = 0x16e7c0u;

label_16e7c0:
    // 0x16e7c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16e7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_16e7c4:
    // 0x16e7c4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x16e7c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_16e7c8:
    // 0x16e7c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16e7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_16e7cc:
    // 0x16e7cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16e7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16e7d0:
    // 0x16e7d0: 0x8c304ce0  lw          $s0, 0x4CE0($at)
    ctx->pc = 0x16e7d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19680)));
label_16e7d4:
    // 0x16e7d4: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_16e7d8:
    if (ctx->pc == 0x16E7D8u) {
        ctx->pc = 0x16E7DCu;
        goto label_16e7dc;
    }
    ctx->pc = 0x16E7D4u;
    {
        const bool branch_taken_0x16e7d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e7d4) {
            ctx->pc = 0x16E808u;
            goto label_16e808;
        }
    }
    ctx->pc = 0x16E7DCu;
label_16e7dc:
    // 0x16e7dc: 0x0  nop
    ctx->pc = 0x16e7dcu;
    // NOP
label_16e7e0:
    // 0x16e7e0: 0x8e0300f8  lw          $v1, 0xF8($s0)
    ctx->pc = 0x16e7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
label_16e7e4:
    // 0x16e7e4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_16e7e8:
    if (ctx->pc == 0x16E7E8u) {
        ctx->pc = 0x16E7E8u;
            // 0x16e7e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16E7ECu;
        goto label_16e7ec;
    }
    ctx->pc = 0x16E7E4u;
    {
        const bool branch_taken_0x16e7e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E7E4u;
            // 0x16e7e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e7e4) {
            ctx->pc = 0x16E7F8u;
            goto label_16e7f8;
        }
    }
    ctx->pc = 0x16E7ECu;
label_16e7ec:
    // 0x16e7ec: 0x60f809  jalr        $v1
label_16e7f0:
    if (ctx->pc == 0x16E7F0u) {
        ctx->pc = 0x16E7F4u;
        goto label_16e7f4;
    }
    ctx->pc = 0x16E7ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16E7F4u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E7C0u: goto label_16e7c0;
            case 0x16E7C4u: goto label_16e7c4;
            case 0x16E7C8u: goto label_16e7c8;
            case 0x16E7CCu: goto label_16e7cc;
            case 0x16E7D0u: goto label_16e7d0;
            case 0x16E7D4u: goto label_16e7d4;
            case 0x16E7D8u: goto label_16e7d8;
            case 0x16E7DCu: goto label_16e7dc;
            case 0x16E7E0u: goto label_16e7e0;
            case 0x16E7E4u: goto label_16e7e4;
            case 0x16E7E8u: goto label_16e7e8;
            case 0x16E7ECu: goto label_16e7ec;
            case 0x16E7F0u: goto label_16e7f0;
            case 0x16E7F4u: goto label_16e7f4;
            case 0x16E7F8u: goto label_16e7f8;
            case 0x16E7FCu: goto label_16e7fc;
            case 0x16E800u: goto label_16e800;
            case 0x16E804u: goto label_16e804;
            case 0x16E808u: goto label_16e808;
            case 0x16E80Cu: goto label_16e80c;
            case 0x16E810u: goto label_16e810;
            case 0x16E814u: goto label_16e814;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16E7F4u; }
            if (ctx->pc != 0x16E7F4u) { return; }
        }
    }
    ctx->pc = 0x16E7F4u;
label_16e7f4:
    // 0x16e7f4: 0x0  nop
    ctx->pc = 0x16e7f4u;
    // NOP
label_16e7f8:
    // 0x16e7f8: 0x8e100108  lw          $s0, 0x108($s0)
    ctx->pc = 0x16e7f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_16e7fc:
    // 0x16e7fc: 0x1600fff8  bnez        $s0, . + 4 + (-0x8 << 2)
label_16e800:
    if (ctx->pc == 0x16E800u) {
        ctx->pc = 0x16E804u;
        goto label_16e804;
    }
    ctx->pc = 0x16E7FCu;
    {
        const bool branch_taken_0x16e7fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x16e7fc) {
            ctx->pc = 0x16E7E0u;
            goto label_16e7e0;
        }
    }
    ctx->pc = 0x16E804u;
label_16e804:
    // 0x16e804: 0x0  nop
    ctx->pc = 0x16e804u;
    // NOP
label_16e808:
    // 0x16e808: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16e808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16e80c:
    // 0x16e80c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16e80cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16e810:
    // 0x16e810: 0x3e00008  jr          $ra
label_16e814:
    if (ctx->pc == 0x16E814u) {
        ctx->pc = 0x16E814u;
            // 0x16e814: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x16E818u;
        goto label_fallthrough_0x16e810;
    }
    ctx->pc = 0x16E810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E810u;
            // 0x16e814: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E7C0u: goto label_16e7c0;
            case 0x16E7C4u: goto label_16e7c4;
            case 0x16E7C8u: goto label_16e7c8;
            case 0x16E7CCu: goto label_16e7cc;
            case 0x16E7D0u: goto label_16e7d0;
            case 0x16E7D4u: goto label_16e7d4;
            case 0x16E7D8u: goto label_16e7d8;
            case 0x16E7DCu: goto label_16e7dc;
            case 0x16E7E0u: goto label_16e7e0;
            case 0x16E7E4u: goto label_16e7e4;
            case 0x16E7E8u: goto label_16e7e8;
            case 0x16E7ECu: goto label_16e7ec;
            case 0x16E7F0u: goto label_16e7f0;
            case 0x16E7F4u: goto label_16e7f4;
            case 0x16E7F8u: goto label_16e7f8;
            case 0x16E7FCu: goto label_16e7fc;
            case 0x16E800u: goto label_16e800;
            case 0x16E804u: goto label_16e804;
            case 0x16E808u: goto label_16e808;
            case 0x16E80Cu: goto label_16e80c;
            case 0x16E810u: goto label_16e810;
            case 0x16E814u: goto label_16e814;
            default: break;
        }
        return;
    }
label_fallthrough_0x16e810:
    ctx->pc = 0x16E818u;
}
