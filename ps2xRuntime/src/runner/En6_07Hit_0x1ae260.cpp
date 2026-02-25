#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En6_07Hit
// Address: 0x1ae260 - 0x1ae2d4
void En6_07Hit_0x1ae260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En6_07Hit_0x1ae260");
#endif

    ctx->pc = 0x1ae260u;

    // 0x1ae260: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ae260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ae264: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ae264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ae268: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x1ae268u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ae26c: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1ae26cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1ae270: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x1ae270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1ae274: 0x18800014  blez        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1AE274u;
    {
        const bool branch_taken_0x1ae274 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1AE278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE274u;
            // 0x1ae278: 0x8ca70008  lw          $a3, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae274) {
            ctx->pc = 0x1AE2C8u;
            goto label_1ae2c8;
        }
    }
    ctx->pc = 0x1AE27Cu;
    // 0x1ae27c: 0x8ce30034  lw          $v1, 0x34($a3)
    ctx->pc = 0x1ae27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x1ae280: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1ae280u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ae284: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x1ae284u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x1ae288: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x1ae288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1ae28c: 0x1c60000e  bgtz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1AE28Cu;
    {
        const bool branch_taken_0x1ae28c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1ae28c) {
            ctx->pc = 0x1AE2C8u;
            goto label_1ae2c8;
        }
    }
    ctx->pc = 0x1AE294u;
    // 0x1ae294: 0x8ce5003c  lw          $a1, 0x3C($a3)
    ctx->pc = 0x1ae294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x1ae298: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x1ae298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x1ae29c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1ae29cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1ae2a0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1ae2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ae2a4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1ae2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1ae2a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ae2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ae2ac: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x1ae2acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x1ae2b0: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x1ae2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1ae2b4: 0x8ce6000c  lw          $a2, 0xC($a3)
    ctx->pc = 0x1ae2b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1ae2b8: 0x8ce7003c  lw          $a3, 0x3C($a3)
    ctx->pc = 0x1ae2b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x1ae2bc: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x1AE2BCu;
    SET_GPR_U32(ctx, 31, 0x1AE2C4u);
    ctx->pc = 0x1AE2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE2BCu;
            // 0x1ae2c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE2C4u; }
        if (ctx->pc != 0x1AE2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE2C4u; }
        if (ctx->pc != 0x1AE2C4u) { return; }
    }
    ctx->pc = 0x1AE2C4u;
    // 0x1ae2c4: 0x0  nop
    ctx->pc = 0x1ae2c4u;
    // NOP
label_1ae2c8:
    // 0x1ae2c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ae2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae2cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE2CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE2D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE2CCu;
            // 0x1ae2d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AE2C8u: goto label_1ae2c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AE2D4u;
}
