#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyShotCreate_Ryushi_Add
// Address: 0x194e40 - 0x194ed4
void EnemyShotCreate_Ryushi_Add_0x194e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyShotCreate_Ryushi_Add_0x194e40");
#endif

    ctx->pc = 0x194e40u;

    // 0x194e40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x194e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x194e44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x194e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x194e48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x194e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x194e4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x194e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x194e50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x194e50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194e54: 0xc0656fc  jal         func_195BF0
    ctx->pc = 0x194E54u;
    SET_GPR_U32(ctx, 31, 0x194E5Cu);
    ctx->pc = 0x194E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194E54u;
            // 0x194e58: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195BF0u;
    if (runtime->hasFunction(0x195BF0u)) {
        auto targetFn = runtime->lookupFunction(0x195BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194E5Cu; }
        if (ctx->pc != 0x194E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotAlloc_0x195bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194E5Cu; }
        if (ctx->pc != 0x194E5Cu) { return; }
    }
    ctx->pc = 0x194E5Cu;
    // 0x194e5c: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x194e5cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x194e60: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x194e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x194e64: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x194e64u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194e68: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x194e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x194e6c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x194e6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x194e70: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x194e70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x194e74: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x194e74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x194e78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x194e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194e7c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x194e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x194e80: 0x2463a590  addiu       $v1, $v1, -0x5A70
    ctx->pc = 0x194e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944144));
    // 0x194e84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x194e84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x194e88: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x194e88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x194e8c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x194e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x194e90: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x194e90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x194e94: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x194e94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x194e98: 0xac450018  sw          $a1, 0x18($v0)
    ctx->pc = 0x194e98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 5));
    // 0x194e9c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x194e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x194ea0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x194ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x194ea4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x194ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x194ea8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x194ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x194eac: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x194eacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x194eb0: 0xac510034  sw          $s1, 0x34($v0)
    ctx->pc = 0x194eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 17));
    // 0x194eb4: 0xac500038  sw          $s0, 0x38($v0)
    ctx->pc = 0x194eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 16));
    // 0x194eb8: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x194eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x194ebc: 0xac450040  sw          $a1, 0x40($v0)
    ctx->pc = 0x194ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 5));
    // 0x194ec0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x194ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194ec4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x194ec4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194ec8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x194ec8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x194ECCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194ECCu;
            // 0x194ed0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x194ED4u;
}
