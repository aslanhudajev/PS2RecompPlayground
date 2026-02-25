#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyShotCreate_Nobiru
// Address: 0x1948d0 - 0x194950
void EnemyShotCreate_Nobiru_0x1948d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyShotCreate_Nobiru_0x1948d0");
#endif

    ctx->pc = 0x1948d0u;

    // 0x1948d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1948d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1948d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1948d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1948d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1948d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1948dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1948dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1948e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1948e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1948e4: 0xc0656fc  jal         func_195BF0
    ctx->pc = 0x1948E4u;
    SET_GPR_U32(ctx, 31, 0x1948ECu);
    ctx->pc = 0x1948E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1948E4u;
            // 0x1948e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195BF0u;
    if (runtime->hasFunction(0x195BF0u)) {
        auto targetFn = runtime->lookupFunction(0x195BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1948ECu; }
        if (ctx->pc != 0x1948ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotAlloc_0x195bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1948ECu; }
        if (ctx->pc != 0x1948ECu) { return; }
    }
    ctx->pc = 0x1948ECu;
    // 0x1948ec: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x1948ecu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1948f0: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1948f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1948f4: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1948f4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1948f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1948f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1948fc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1948fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x194900: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x194900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x194904: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x194904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194908: 0x2463a590  addiu       $v1, $v1, -0x5A70
    ctx->pc = 0x194908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944144));
    // 0x19490c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19490cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x194910: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x194910u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x194914: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x194914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x194918: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x194918u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x19491c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x19491cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x194920: 0xac440018  sw          $a0, 0x18($v0)
    ctx->pc = 0x194920u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 4));
    // 0x194924: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x194924u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x194928: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x194928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19492c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x19492cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x194930: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x194930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x194934: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x194934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x194938: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x194938u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x19493c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19493cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194940: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x194940u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194944: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x194944u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194948: 0x3e00008  jr          $ra
    ctx->pc = 0x194948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19494Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194948u;
            // 0x19494c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x194950u;
}
