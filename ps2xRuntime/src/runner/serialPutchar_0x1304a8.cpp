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
// Address: 0x1304a8 - 0x1304dc
void serialPutchar_0x1304a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("serialPutchar_0x1304a8");
#endif

    ctx->pc = 0x1304a8u;

    // 0x1304a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1304a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1304ac: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1304acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1304b0: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1304B0u;
    {
        const bool branch_taken_0x1304b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1304B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1304B0u;
            // 0x1304b4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1304b0) {
            ctx->pc = 0x1304D0u;
            goto label_1304d0;
        }
    }
    ctx->pc = 0x1304B8u;
    // 0x1304b8: 0xc04c0f0  jal         func_1303C0
    ctx->pc = 0x1304B8u;
    SET_GPR_U32(ctx, 31, 0x1304C0u);
    ctx->pc = 0x1304BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1304B8u;
            // 0x1304bc: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303C0u;
    if (runtime->hasFunction(0x1303C0u)) {
        auto targetFn = runtime->lookupFunction(0x1303C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1304C0u; }
        if (ctx->pc != 0x1304C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kputchar_0x1303c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1304C0u; }
        if (ctx->pc != 0x1304C0u) { return; }
    }
    ctx->pc = 0x1304C0u;
    // 0x1304c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1304c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1304c4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1304c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1304c8: 0x804c0f0  j           func_1303C0
    ctx->pc = 0x1304C8u;
    ctx->pc = 0x1304CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1304C8u;
            // 0x1304cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303C0u;
    if (runtime->hasFunction(0x1303C0u)) {
        auto targetFn = runtime->lookupFunction(0x1303C0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        kputchar_0x1303c0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1304D0u;
label_1304d0:
    // 0x1304d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1304d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1304d4: 0x804c0f0  j           func_1303C0
    ctx->pc = 0x1304D4u;
    ctx->pc = 0x1304D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1304D4u;
            // 0x1304d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303C0u;
    if (runtime->hasFunction(0x1303C0u)) {
        auto targetFn = runtime->lookupFunction(0x1303C0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        kputchar_0x1303c0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1304DCu;
}
