#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MemCardUnInit
// Address: 0x186af0 - 0x186b38
void MemCardUnInit_0x186af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MemCardUnInit_0x186af0");
#endif

    ctx->pc = 0x186af0u;

    // 0x186af0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x186af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x186af4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x186af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x186af8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x186af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x186afc: 0xc0474ec  jal         func_11D3B0
    ctx->pc = 0x186AFCu;
    SET_GPR_U32(ctx, 31, 0x186B04u);
    ctx->pc = 0x186B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186AFCu;
            // 0x186b00: 0x8c24bcf8  lw          $a0, -0x4308($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D3B0u;
    if (runtime->hasFunction(0x11D3B0u)) {
        auto targetFn = runtime->lookupFunction(0x11D3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186B04u; }
        if (ctx->pc != 0x186B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2DeleteSocket_0x11d3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186B04u; }
        if (ctx->pc != 0x186B04u) { return; }
    }
    ctx->pc = 0x186B04u;
    // 0x186b04: 0xc047492  jal         func_11D248
    ctx->pc = 0x186B04u;
    SET_GPR_U32(ctx, 31, 0x186B0Cu);
    ctx->pc = 0x11D248u;
    if (runtime->hasFunction(0x11D248u)) {
        auto targetFn = runtime->lookupFunction(0x11D248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186B0Cu; }
        if (ctx->pc != 0x186B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2End_0x11d248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186B0Cu; }
        if (ctx->pc != 0x186B0Cu) { return; }
    }
    ctx->pc = 0x186B0Cu;
    // 0x186b0c: 0xc061b7c  jal         func_186DF0
    ctx->pc = 0x186B0Cu;
    SET_GPR_U32(ctx, 31, 0x186B14u);
    ctx->pc = 0x186DF0u;
    if (runtime->hasFunction(0x186DF0u)) {
        auto targetFn = runtime->lookupFunction(0x186DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186B14u; }
        if (ctx->pc != 0x186B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgUnLoadFull_0x186df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186B14u; }
        if (ctx->pc != 0x186B14u) { return; }
    }
    ctx->pc = 0x186B14u;
    // 0x186b14: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x186b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x186b18: 0xc04ea3c  jal         func_13A8F0
    ctx->pc = 0x186B18u;
    SET_GPR_U32(ctx, 31, 0x186B20u);
    ctx->pc = 0x186B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186B18u;
            // 0x186b1c: 0x8c24b638  lw          $a0, -0x49C8($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948408)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A8F0u;
    if (runtime->hasFunction(0x13A8F0u)) {
        auto targetFn = runtime->lookupFunction(0x13A8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186B20u; }
        if (ctx->pc != 0x186B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        free_0x13a8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186B20u; }
        if (ctx->pc != 0x186B20u) { return; }
    }
    ctx->pc = 0x186B20u;
    // 0x186b20: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x186b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x186b24: 0xc050700  jal         func_141C00
    ctx->pc = 0x186B24u;
    SET_GPR_U32(ctx, 31, 0x186B2Cu);
    ctx->pc = 0x186B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186B24u;
            // 0x186b28: 0x8c24bee0  lw          $a0, -0x4120($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950624)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141C00u;
    if (runtime->hasFunction(0x141C00u)) {
        auto targetFn = runtime->lookupFunction(0x141C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186B2Cu; }
        if (ctx->pc != 0x186B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFree_0x141c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186B2Cu; }
        if (ctx->pc != 0x186B2Cu) { return; }
    }
    ctx->pc = 0x186B2Cu;
    // 0x186b2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x186b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186b30: 0x3e00008  jr          $ra
    ctx->pc = 0x186B30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186B30u;
            // 0x186b34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x186B38u;
}
