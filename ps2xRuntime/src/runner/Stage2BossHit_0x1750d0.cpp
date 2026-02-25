#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage2BossHit
// Address: 0x1750d0 - 0x17516c
void Stage2BossHit_0x1750d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage2BossHit_0x1750d0");
#endif

    ctx->pc = 0x1750d0u;

    // 0x1750d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1750d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1750d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1750d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1750d8: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x1750d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1750dc: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1750dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1750e0: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x1750e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1750e4: 0x18800004  blez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1750E4u;
    {
        const bool branch_taken_0x1750e4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1750E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1750E4u;
            // 0x1750e8: 0x8ca70008  lw          $a3, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1750e4) {
            ctx->pc = 0x1750F8u;
            goto label_1750f8;
        }
    }
    ctx->pc = 0x1750ECu;
    // 0x1750ec: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x1750ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x1750f0: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1750F0u;
    {
        const bool branch_taken_0x1750f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1750f0) {
            ctx->pc = 0x175108u;
            goto label_175108;
        }
    }
    ctx->pc = 0x1750F8u;
label_1750f8:
    // 0x1750f8: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x1750f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1750fc: 0x28630009  slti        $v1, $v1, 0x9
    ctx->pc = 0x1750fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x175100: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x175100u;
    {
        const bool branch_taken_0x175100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x175100) {
            ctx->pc = 0x175160u;
            goto label_175160;
        }
    }
    ctx->pc = 0x175108u;
label_175108:
    // 0x175108: 0x8ce30030  lw          $v1, 0x30($a3)
    ctx->pc = 0x175108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x17510c: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17510Cu;
    {
        const bool branch_taken_0x17510c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x17510c) {
            ctx->pc = 0x175128u;
            goto label_175128;
        }
    }
    ctx->pc = 0x175114u;
    // 0x175114: 0x8ce40034  lw          $a0, 0x34($a3)
    ctx->pc = 0x175114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x175118: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x175118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x17511c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x17511cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x175120: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x175120u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x175124: 0x0  nop
    ctx->pc = 0x175124u;
    // NOP
label_175128:
    // 0x175128: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x175128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x17512c: 0x1c60000c  bgtz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x17512Cu;
    {
        const bool branch_taken_0x17512c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x17512c) {
            ctx->pc = 0x175160u;
            goto label_175160;
        }
    }
    ctx->pc = 0x175134u;
    // 0x175134: 0x8ce5003c  lw          $a1, 0x3C($a3)
    ctx->pc = 0x175134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x175138: 0x24031388  addiu       $v1, $zero, 0x1388
    ctx->pc = 0x175138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
    // 0x17513c: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x17513cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x175140: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x175140u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x175144: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175148: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x175148u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x17514c: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x17514cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x175150: 0x8ce6000c  lw          $a2, 0xC($a3)
    ctx->pc = 0x175150u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x175154: 0x8ce7003c  lw          $a3, 0x3C($a3)
    ctx->pc = 0x175154u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x175158: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x175158u;
    SET_GPR_U32(ctx, 31, 0x175160u);
    ctx->pc = 0x17515Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175158u;
            // 0x17515c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175160u; }
        if (ctx->pc != 0x175160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175160u; }
        if (ctx->pc != 0x175160u) { return; }
    }
    ctx->pc = 0x175160u;
label_175160:
    // 0x175160: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175164: 0x3e00008  jr          $ra
    ctx->pc = 0x175164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175164u;
            // 0x175168: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1750F8u: goto label_1750f8;
            case 0x175108u: goto label_175108;
            case 0x175128u: goto label_175128;
            case 0x175160u: goto label_175160;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17516Cu;
}
