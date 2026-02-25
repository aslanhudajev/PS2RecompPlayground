#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage2BossHit1
// Address: 0x175030 - 0x1750c8
void Stage2BossHit1_0x175030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage2BossHit1_0x175030");
#endif

    ctx->pc = 0x175030u;

    // 0x175030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x175034: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x175034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x175038: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x175038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17503c: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x17503cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x175040: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x175040u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x175044: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x175044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x175048: 0x1880001b  blez        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x175048u;
    {
        const bool branch_taken_0x175048 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x17504Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175048u;
            // 0x17504c: 0x8cb00008  lw          $s0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175048) {
            ctx->pc = 0x1750B8u;
            goto label_1750b8;
        }
    }
    ctx->pc = 0x175050u;
    // 0x175050: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x175050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x175054: 0x14830018  bne         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x175054u;
    {
        const bool branch_taken_0x175054 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x175054) {
            ctx->pc = 0x1750B8u;
            goto label_1750b8;
        }
    }
    ctx->pc = 0x17505Cu;
    // 0x17505c: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x17505cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x175060: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x175060u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x175064: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x175064u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x175068: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x175068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x17506c: 0x1c600012  bgtz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x17506Cu;
    {
        const bool branch_taken_0x17506c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x17506c) {
            ctx->pc = 0x1750B8u;
            goto label_1750b8;
        }
    }
    ctx->pc = 0x175074u;
    // 0x175074: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x175074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x175078: 0x24030bb8  addiu       $v1, $zero, 0xBB8
    ctx->pc = 0x175078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    // 0x17507c: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x17507cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x175080: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x175080u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x175084: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x175084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x175088: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x175088u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x17508c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x17508cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x175090: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x175090u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x175094: 0x8e07003c  lw          $a3, 0x3C($s0)
    ctx->pc = 0x175094u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x175098: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x175098u;
    SET_GPR_U32(ctx, 31, 0x1750A0u);
    ctx->pc = 0x17509Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175098u;
            // 0x17509c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1750A0u; }
        if (ctx->pc != 0x1750A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1750A0u; }
        if (ctx->pc != 0x1750A0u) { return; }
    }
    ctx->pc = 0x1750A0u;
    // 0x1750a0: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1750a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1750a4: 0x24040039  addiu       $a0, $zero, 0x39
    ctx->pc = 0x1750a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x1750a8: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1750a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1750ac: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1750acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1750b0: 0xc05d080  jal         func_174200
    ctx->pc = 0x1750B0u;
    SET_GPR_U32(ctx, 31, 0x1750B8u);
    ctx->pc = 0x1750B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1750B0u;
            // 0x1750b4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1750B8u; }
        if (ctx->pc != 0x1750B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1750B8u; }
        if (ctx->pc != 0x1750B8u) { return; }
    }
    ctx->pc = 0x1750B8u;
label_1750b8:
    // 0x1750b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1750b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1750bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1750bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1750c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1750C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1750C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1750C0u;
            // 0x1750c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1750B8u: goto label_1750b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1750C8u;
}
