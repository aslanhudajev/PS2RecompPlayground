#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyShotCreate_Zanzoudan_boss
// Address: 0x194db0 - 0x194e34
void EnemyShotCreate_Zanzoudan_boss_0x194db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyShotCreate_Zanzoudan_boss_0x194db0");
#endif

    ctx->pc = 0x194db0u;

    // 0x194db0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x194db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x194db4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x194db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x194db8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x194db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x194dbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x194dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x194dc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x194dc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194dc4: 0xc0656fc  jal         func_195BF0
    ctx->pc = 0x194DC4u;
    SET_GPR_U32(ctx, 31, 0x194DCCu);
    ctx->pc = 0x194DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194DC4u;
            // 0x194dc8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195BF0u;
    if (runtime->hasFunction(0x195BF0u)) {
        auto targetFn = runtime->lookupFunction(0x195BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194DCCu; }
        if (ctx->pc != 0x194DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotAlloc_0x195bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194DCCu; }
        if (ctx->pc != 0x194DCCu) { return; }
    }
    ctx->pc = 0x194DCCu;
    // 0x194dcc: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x194dccu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x194dd0: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x194dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x194dd4: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x194dd4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194dd8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x194dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x194ddc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x194ddcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x194de0: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x194de0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x194de4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x194de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194de8: 0x2463a590  addiu       $v1, $v1, -0x5A70
    ctx->pc = 0x194de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944144));
    // 0x194dec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x194decu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x194df0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x194df0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x194df4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x194df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x194df8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x194df8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x194dfc: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x194dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x194e00: 0xac450018  sw          $a1, 0x18($v0)
    ctx->pc = 0x194e00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 5));
    // 0x194e04: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x194e04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x194e08: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x194e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x194e0c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x194e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x194e10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x194e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x194e14: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x194e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x194e18: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x194e18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x194e1c: 0xac450040  sw          $a1, 0x40($v0)
    ctx->pc = 0x194e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 5));
    // 0x194e20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x194e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194e24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x194e24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194e28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x194e28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x194E2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194E2Cu;
            // 0x194e30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x194E34u;
}
