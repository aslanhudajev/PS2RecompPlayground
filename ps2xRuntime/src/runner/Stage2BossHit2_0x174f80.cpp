#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage2BossHit2
// Address: 0x174f80 - 0x175028
void Stage2BossHit2_0x174f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage2BossHit2_0x174f80");
#endif

    ctx->pc = 0x174f80u;

    // 0x174f80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x174f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x174f84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x174f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x174f88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x174f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x174f8c: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x174f8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x174f90: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x174f90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x174f94: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x174f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x174f98: 0x1880001f  blez        $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x174F98u;
    {
        const bool branch_taken_0x174f98 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x174F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174F98u;
            // 0x174f9c: 0x8cb00008  lw          $s0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174f98) {
            ctx->pc = 0x175018u;
            goto label_175018;
        }
    }
    ctx->pc = 0x174FA0u;
    // 0x174fa0: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x174fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x174fa4: 0x1483001c  bne         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x174FA4u;
    {
        const bool branch_taken_0x174fa4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x174fa4) {
            ctx->pc = 0x175018u;
            goto label_175018;
        }
    }
    ctx->pc = 0x174FACu;
    // 0x174fac: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x174facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x174fb0: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x174fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x174fb4: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x174fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x174fb8: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x174fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x174fbc: 0x1c600016  bgtz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x174FBCu;
    {
        const bool branch_taken_0x174fbc = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x174fbc) {
            ctx->pc = 0x175018u;
            goto label_175018;
        }
    }
    ctx->pc = 0x174FC4u;
    // 0x174fc4: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x174fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x174fc8: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x174fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x174fcc: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x174fccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x174fd0: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x174fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x174fd4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x174fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x174fd8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x174fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x174fdc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x174fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x174fe0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x174fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x174fe4: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x174fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x174fe8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x174fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x174fec: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x174fecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x174ff0: 0x8e07003c  lw          $a3, 0x3C($s0)
    ctx->pc = 0x174ff0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x174ff4: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x174FF4u;
    SET_GPR_U32(ctx, 31, 0x174FFCu);
    ctx->pc = 0x174FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174FF4u;
            // 0x174ff8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174FFCu; }
        if (ctx->pc != 0x174FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174FFCu; }
        if (ctx->pc != 0x174FFCu) { return; }
    }
    ctx->pc = 0x174FFCu;
    // 0x174ffc: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x174ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x175000: 0x24040039  addiu       $a0, $zero, 0x39
    ctx->pc = 0x175000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x175004: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x175004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175008: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x175008u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x17500c: 0xc05d080  jal         func_174200
    ctx->pc = 0x17500Cu;
    SET_GPR_U32(ctx, 31, 0x175014u);
    ctx->pc = 0x175010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17500Cu;
            // 0x175010: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175014u; }
        if (ctx->pc != 0x175014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175014u; }
        if (ctx->pc != 0x175014u) { return; }
    }
    ctx->pc = 0x175014u;
    // 0x175014: 0x0  nop
    ctx->pc = 0x175014u;
    // NOP
label_175018:
    // 0x175018: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x175018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17501c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17501cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175020: 0x3e00008  jr          $ra
    ctx->pc = 0x175020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175020u;
            // 0x175024: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175018u: goto label_175018;
            default: break;
        }
        return;
    }
    ctx->pc = 0x175028u;
}
