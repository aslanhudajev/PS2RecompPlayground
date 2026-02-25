#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage4BossHit
// Address: 0x1bb9a0 - 0x1bba3c
void Stage4BossHit_0x1bb9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage4BossHit_0x1bb9a0");
#endif

    ctx->pc = 0x1bb9a0u;

    // 0x1bb9a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bb9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bb9a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bb9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bb9a8: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x1bb9a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1bb9ac: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1bb9acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1bb9b0: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x1bb9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1bb9b4: 0x18800004  blez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB9B4u;
    {
        const bool branch_taken_0x1bb9b4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1BB9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB9B4u;
            // 0x1bb9b8: 0x8ca70008  lw          $a3, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb9b4) {
            ctx->pc = 0x1BB9C8u;
            goto label_1bb9c8;
        }
    }
    ctx->pc = 0x1BB9BCu;
    // 0x1bb9bc: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x1bb9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x1bb9c0: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BB9C0u;
    {
        const bool branch_taken_0x1bb9c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bb9c0) {
            ctx->pc = 0x1BB9D8u;
            goto label_1bb9d8;
        }
    }
    ctx->pc = 0x1BB9C8u;
label_1bb9c8:
    // 0x1bb9c8: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x1bb9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1bb9cc: 0x28630009  slti        $v1, $v1, 0x9
    ctx->pc = 0x1bb9ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1bb9d0: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1BB9D0u;
    {
        const bool branch_taken_0x1bb9d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb9d0) {
            ctx->pc = 0x1BBA30u;
            goto label_1bba30;
        }
    }
    ctx->pc = 0x1BB9D8u;
label_1bb9d8:
    // 0x1bb9d8: 0x8ce30030  lw          $v1, 0x30($a3)
    ctx->pc = 0x1bb9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1bb9dc: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BB9DCu;
    {
        const bool branch_taken_0x1bb9dc = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1bb9dc) {
            ctx->pc = 0x1BB9F8u;
            goto label_1bb9f8;
        }
    }
    ctx->pc = 0x1BB9E4u;
    // 0x1bb9e4: 0x8ce40034  lw          $a0, 0x34($a3)
    ctx->pc = 0x1bb9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x1bb9e8: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x1bb9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1bb9ec: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1bb9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bb9f0: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x1bb9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x1bb9f4: 0x0  nop
    ctx->pc = 0x1bb9f4u;
    // NOP
label_1bb9f8:
    // 0x1bb9f8: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x1bb9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1bb9fc: 0x1c60000c  bgtz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1BB9FCu;
    {
        const bool branch_taken_0x1bb9fc = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1bb9fc) {
            ctx->pc = 0x1BBA30u;
            goto label_1bba30;
        }
    }
    ctx->pc = 0x1BBA04u;
    // 0x1bba04: 0x8ce5003c  lw          $a1, 0x3C($a3)
    ctx->pc = 0x1bba04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x1bba08: 0x24031388  addiu       $v1, $zero, 0x1388
    ctx->pc = 0x1bba08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
    // 0x1bba0c: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x1bba0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x1bba10: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x1bba10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1bba14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bba14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bba18: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x1bba18u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x1bba1c: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x1bba1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1bba20: 0x8ce6000c  lw          $a2, 0xC($a3)
    ctx->pc = 0x1bba20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1bba24: 0x8ce7003c  lw          $a3, 0x3C($a3)
    ctx->pc = 0x1bba24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x1bba28: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x1BBA28u;
    SET_GPR_U32(ctx, 31, 0x1BBA30u);
    ctx->pc = 0x1BBA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBA28u;
            // 0x1bba2c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBA30u; }
        if (ctx->pc != 0x1BBA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBA30u; }
        if (ctx->pc != 0x1BBA30u) { return; }
    }
    ctx->pc = 0x1BBA30u;
label_1bba30:
    // 0x1bba30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bba30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bba34: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBA34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBA38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBA34u;
            // 0x1bba38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BB9C8u: goto label_1bb9c8;
            case 0x1BB9D8u: goto label_1bb9d8;
            case 0x1BB9F8u: goto label_1bb9f8;
            case 0x1BBA30u: goto label_1bba30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BBA3Cu;
}
