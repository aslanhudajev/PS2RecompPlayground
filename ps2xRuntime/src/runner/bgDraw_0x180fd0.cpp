#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: bgDraw
// Address: 0x180fd0 - 0x181034
void bgDraw_0x180fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("bgDraw_0x180fd0");
#endif

    ctx->pc = 0x180fd0u;

    // 0x180fd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x180fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x180fd4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x180fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x180fd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x180fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x180fdc: 0x24423c50  addiu       $v0, $v0, 0x3C50
    ctx->pc = 0x180fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15440));
    // 0x180fe0: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x180fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x180fe4: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x180fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x180fe8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x180fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x180fec: 0x2442a118  addiu       $v0, $v0, -0x5EE8
    ctx->pc = 0x180fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943000));
    // 0x180ff0: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x180ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x180ff4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x180ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x180ff8: 0x24423c30  addiu       $v0, $v0, 0x3C30
    ctx->pc = 0x180ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15408));
    // 0x180ffc: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x180FFCu;
    SET_GPR_U32(ctx, 31, 0x181004u);
    ctx->pc = 0x181000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180FFCu;
            // 0x181000: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181004u; }
        if (ctx->pc != 0x181004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181004u; }
        if (ctx->pc != 0x181004u) { return; }
    }
    ctx->pc = 0x181004u;
    // 0x181004: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x181004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x181008: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x181008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18100c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x18100cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x181010: 0xc05f818  jal         func_17E060
    ctx->pc = 0x181010u;
    SET_GPR_U32(ctx, 31, 0x181018u);
    ctx->pc = 0x181014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181010u;
            // 0x181014: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E060u;
    if (runtime->hasFunction(0x17E060u)) {
        auto targetFn = runtime->lookupFunction(0x17E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181018u; }
        if (ctx->pc != 0x181018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x17e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181018u; }
        if (ctx->pc != 0x181018u) { return; }
    }
    ctx->pc = 0x181018u;
    // 0x181018: 0xc05f814  jal         func_17E050
    ctx->pc = 0x181018u;
    SET_GPR_U32(ctx, 31, 0x181020u);
    ctx->pc = 0x17E050u;
    if (runtime->hasFunction(0x17E050u)) {
        auto targetFn = runtime->lookupFunction(0x17E050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181020u; }
        if (ctx->pc != 0x181020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x17e050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181020u; }
        if (ctx->pc != 0x181020u) { return; }
    }
    ctx->pc = 0x181020u;
    // 0x181020: 0xc05c2a4  jal         func_170A90
    ctx->pc = 0x181020u;
    SET_GPR_U32(ctx, 31, 0x181028u);
    ctx->pc = 0x170A90u;
    if (runtime->hasFunction(0x170A90u)) {
        auto targetFn = runtime->lookupFunction(0x170A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181028u; }
        if (ctx->pc != 0x181028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFMTU_0x170a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181028u; }
        if (ctx->pc != 0x181028u) { return; }
    }
    ctx->pc = 0x181028u;
    // 0x181028: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x181028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18102c: 0x3e00008  jr          $ra
    ctx->pc = 0x18102Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18102Cu;
            // 0x181030: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x181034u;
}
