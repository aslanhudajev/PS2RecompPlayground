#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyshotMove_Dead
// Address: 0x193d10 - 0x193d6c
void EnemyshotMove_Dead_0x193d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyshotMove_Dead_0x193d10");
#endif

    ctx->pc = 0x193d10u;

    // 0x193d10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x193d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x193d14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x193d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x193d18: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x193d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193d1c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x193d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193d20: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x193d20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x193d24: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x193d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x193d28: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x193d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193d2c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x193d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193d30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x193d30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x193d34: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x193d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x193d38: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x193d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x193d3c: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x193d3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x193d40: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x193D40u;
    {
        const bool branch_taken_0x193d40 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x193d40) {
            ctx->pc = 0x193D58u;
            goto label_193d58;
        }
    }
    ctx->pc = 0x193D48u;
    // 0x193d48: 0xc0656e8  jal         func_195BA0
    ctx->pc = 0x193D48u;
    SET_GPR_U32(ctx, 31, 0x193D50u);
    ctx->pc = 0x195BA0u;
    if (runtime->hasFunction(0x195BA0u)) {
        auto targetFn = runtime->lookupFunction(0x195BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193D50u; }
        if (ctx->pc != 0x193D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotFree_0x195ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193D50u; }
        if (ctx->pc != 0x193D50u) { return; }
    }
    ctx->pc = 0x193D50u;
    // 0x193d50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x193D50u;
    {
        const bool branch_taken_0x193d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193d50) {
            ctx->pc = 0x193D60u;
            goto label_193d60;
        }
    }
    ctx->pc = 0x193D58u;
label_193d58:
    // 0x193d58: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x193d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x193d5c: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x193d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_193d60:
    // 0x193d60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x193d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193d64: 0x3e00008  jr          $ra
    ctx->pc = 0x193D64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193D64u;
            // 0x193d68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193D58u: goto label_193d58;
            case 0x193D60u: goto label_193d60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x193D6Cu;
}
