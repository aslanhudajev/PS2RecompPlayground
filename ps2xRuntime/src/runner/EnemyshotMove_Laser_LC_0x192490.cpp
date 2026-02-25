#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyshotMove_Laser_LC
// Address: 0x192490 - 0x1924e4
void EnemyshotMove_Laser_LC_0x192490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyshotMove_Laser_LC_0x192490");
#endif

    ctx->pc = 0x192490u;

    // 0x192490: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x192490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x192494: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x192494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x192498: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x192498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19249c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x19249cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1924a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1924a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1924a4: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1924a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1924a8: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x1924a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1924ac: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1924acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1924b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1924b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1924b4: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1924b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1924b8: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1924b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1924bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1924bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1924c0: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x1924c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x1924c4: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1924c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1924c8: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1924C8u;
    {
        const bool branch_taken_0x1924c8 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1924c8) {
            ctx->pc = 0x1924D8u;
            goto label_1924d8;
        }
    }
    ctx->pc = 0x1924D0u;
    // 0x1924d0: 0xc0656e8  jal         func_195BA0
    ctx->pc = 0x1924D0u;
    SET_GPR_U32(ctx, 31, 0x1924D8u);
    ctx->pc = 0x195BA0u;
    if (runtime->hasFunction(0x195BA0u)) {
        auto targetFn = runtime->lookupFunction(0x195BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1924D8u; }
        if (ctx->pc != 0x1924D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotFree_0x195ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1924D8u; }
        if (ctx->pc != 0x1924D8u) { return; }
    }
    ctx->pc = 0x1924D8u;
label_1924d8:
    // 0x1924d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1924d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1924dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1924DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1924E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1924DCu;
            // 0x1924e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1924D8u: goto label_1924d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1924E4u;
}
