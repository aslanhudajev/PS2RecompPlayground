#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage6BossHit1
// Address: 0x1c43f0 - 0x1c44a0
void Stage6BossHit1_0x1c43f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage6BossHit1_0x1c43f0");
#endif

    ctx->pc = 0x1c43f0u;

    // 0x1c43f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c43f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c43f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c43f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c43f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c43f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c43fc: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1c43fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c4400: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1c4400u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1c4404: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x1c4404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1c4408: 0x18800021  blez        $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1C4408u;
    {
        const bool branch_taken_0x1c4408 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1C440Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4408u;
            // 0x1c440c: 0x8cb00008  lw          $s0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4408) {
            ctx->pc = 0x1C4490u;
            goto label_1c4490;
        }
    }
    ctx->pc = 0x1C4410u;
    // 0x1c4410: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x1c4410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1c4414: 0x1483001e  bne         $a0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1C4414u;
    {
        const bool branch_taken_0x1c4414 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c4414) {
            ctx->pc = 0x1C4490u;
            goto label_1c4490;
        }
    }
    ctx->pc = 0x1C441Cu;
    // 0x1c441c: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1c441cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1c4420: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1c4420u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1c4424: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x1c4424u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x1c4428: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x1c4428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1c442c: 0x1c600018  bgtz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C442Cu;
    {
        const bool branch_taken_0x1c442c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1c442c) {
            ctx->pc = 0x1C4490u;
            goto label_1c4490;
        }
    }
    ctx->pc = 0x1C4434u;
    // 0x1c4434: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x1c4434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1c4438: 0x24031388  addiu       $v1, $zero, 0x1388
    ctx->pc = 0x1c4438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
    // 0x1c443c: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x1c443cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x1c4440: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x1c4440u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1c4444: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c4444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c4448: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x1c4448u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x1c444c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1c444cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c4450: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1c4450u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c4454: 0x8e07003c  lw          $a3, 0x3C($s0)
    ctx->pc = 0x1c4454u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1c4458: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x1C4458u;
    SET_GPR_U32(ctx, 31, 0x1C4460u);
    ctx->pc = 0x1C445Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4458u;
            // 0x1c445c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4460u; }
        if (ctx->pc != 0x1C4460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4460u; }
        if (ctx->pc != 0x1C4460u) { return; }
    }
    ctx->pc = 0x1C4460u;
    // 0x1c4460: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1c4460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c4464: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x1c4464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1c4468: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1c4468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c446c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1c446cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1c4470: 0xc05d080  jal         func_174200
    ctx->pc = 0x1C4470u;
    SET_GPR_U32(ctx, 31, 0x1C4478u);
    ctx->pc = 0x1C4474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4470u;
            // 0x1c4474: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4478u; }
        if (ctx->pc != 0x1C4478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4478u; }
        if (ctx->pc != 0x1C4478u) { return; }
    }
    ctx->pc = 0x1C4478u;
    // 0x1c4478: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1c4478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c447c: 0x24040039  addiu       $a0, $zero, 0x39
    ctx->pc = 0x1c447cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x1c4480: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1c4480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4484: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1c4484u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1c4488: 0xc05d080  jal         func_174200
    ctx->pc = 0x1C4488u;
    SET_GPR_U32(ctx, 31, 0x1C4490u);
    ctx->pc = 0x1C448Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4488u;
            // 0x1c448c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4490u; }
        if (ctx->pc != 0x1C4490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4490u; }
        if (ctx->pc != 0x1C4490u) { return; }
    }
    ctx->pc = 0x1C4490u;
label_1c4490:
    // 0x1c4490: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c4490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4494: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c4494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4498: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C449Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4498u;
            // 0x1c449c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C4490u: goto label_1c4490;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C44A0u;
}
