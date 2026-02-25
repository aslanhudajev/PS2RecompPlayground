#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyShotCreate_Laser_LCADD
// Address: 0x1944e0 - 0x194564
void EnemyShotCreate_Laser_LCADD_0x1944e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyShotCreate_Laser_LCADD_0x1944e0");
#endif

    ctx->pc = 0x1944e0u;

    // 0x1944e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1944e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1944e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1944e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1944e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1944e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1944ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1944ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1944f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1944f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1944f4: 0xc0656fc  jal         func_195BF0
    ctx->pc = 0x1944F4u;
    SET_GPR_U32(ctx, 31, 0x1944FCu);
    ctx->pc = 0x1944F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1944F4u;
            // 0x1944f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195BF0u;
    if (runtime->hasFunction(0x195BF0u)) {
        auto targetFn = runtime->lookupFunction(0x195BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1944FCu; }
        if (ctx->pc != 0x1944FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotAlloc_0x195bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1944FCu; }
        if (ctx->pc != 0x1944FCu) { return; }
    }
    ctx->pc = 0x1944FCu;
    // 0x1944fc: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x1944fcu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x194500: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x194500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x194504: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x194504u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194508: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x194508u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x19450c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19450cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x194510: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x194510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x194514: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x194514u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x194518: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x194518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19451c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x19451cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x194520: 0x2463a590  addiu       $v1, $v1, -0x5A70
    ctx->pc = 0x194520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944144));
    // 0x194524: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x194524u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x194528: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x194528u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x19452c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x19452cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x194530: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x194530u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x194534: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x194534u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x194538: 0xac440018  sw          $a0, 0x18($v0)
    ctx->pc = 0x194538u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 4));
    // 0x19453c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x19453cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x194540: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x194540u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x194544: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x194544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x194548: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x194548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19454c: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x19454cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x194550: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x194550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194554: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x194554u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194558: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x194558u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19455c: 0x3e00008  jr          $ra
    ctx->pc = 0x19455Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19455Cu;
            // 0x194560: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x194564u;
}
