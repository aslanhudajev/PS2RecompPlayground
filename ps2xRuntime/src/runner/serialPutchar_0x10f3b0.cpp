#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: serialPutchar
// Address: 0x10f3b0 - 0x10f3e4
void serialPutchar_0x10f3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("serialPutchar_0x10f3b0");
#endif

    ctx->pc = 0x10f3b0u;

    // 0x10f3b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10f3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10f3b4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x10f3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x10f3b8: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10F3B8u;
    {
        const bool branch_taken_0x10f3b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x10F3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10F3B8u;
            // 0x10f3bc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f3b8) {
            ctx->pc = 0x10F3D8u;
            goto label_10f3d8;
        }
    }
    ctx->pc = 0x10F3C0u;
    // 0x10f3c0: 0xc043cb2  jal         func_10F2C8
    ctx->pc = 0x10F3C0u;
    SET_GPR_U32(ctx, 31, 0x10F3C8u);
    ctx->pc = 0x10F3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F3C0u;
            // 0x10f3c4: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F2C8u;
    if (runtime->hasFunction(0x10F2C8u)) {
        auto targetFn = runtime->lookupFunction(0x10F2C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F3C8u; }
        if (ctx->pc != 0x10F3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kputchar_0x10f2c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F3C8u; }
        if (ctx->pc != 0x10F3C8u) { return; }
    }
    ctx->pc = 0x10F3C8u;
    // 0x10f3c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10f3c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f3cc: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x10f3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x10f3d0: 0x8043cb2  j           func_10F2C8
    ctx->pc = 0x10F3D0u;
    ctx->pc = 0x10F3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F3D0u;
            // 0x10f3d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F2C8u;
    if (runtime->hasFunction(0x10F2C8u)) {
        auto targetFn = runtime->lookupFunction(0x10F2C8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        kputchar_0x10f2c8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10F3D8u;
label_10f3d8:
    // 0x10f3d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10f3d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f3dc: 0x8043cb2  j           func_10F2C8
    ctx->pc = 0x10F3DCu;
    ctx->pc = 0x10F3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F3DCu;
            // 0x10f3e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F2C8u;
    if (runtime->hasFunction(0x10F2C8u)) {
        auto targetFn = runtime->lookupFunction(0x10F2C8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        kputchar_0x10f2c8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10F3E4u;
}
