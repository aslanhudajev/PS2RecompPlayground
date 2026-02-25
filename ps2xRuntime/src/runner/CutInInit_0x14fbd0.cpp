#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CutInInit
// Address: 0x14fbd0 - 0x14fc14
void CutInInit_0x14fbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CutInInit_0x14fbd0");
#endif

    ctx->pc = 0x14fbd0u;

    // 0x14fbd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14fbd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14fbd4: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x14fbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x14fbd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14fbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14fbdc: 0x24050031  addiu       $a1, $zero, 0x31
    ctx->pc = 0x14fbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x14fbe0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14fbe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fbe4: 0xc05c20c  jal         func_170830
    ctx->pc = 0x14FBE4u;
    SET_GPR_U32(ctx, 31, 0x14FBECu);
    ctx->pc = 0x14FBE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14FBE4u;
            // 0x14fbe8: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FBECu; }
        if (ctx->pc != 0x14FBECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FBECu; }
        if (ctx->pc != 0x14FBECu) { return; }
    }
    ctx->pc = 0x14FBECu;
    // 0x14fbec: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14FBECu;
    SET_GPR_U32(ctx, 31, 0x14FBF4u);
    ctx->pc = 0x14FBF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14FBECu;
            // 0x14fbf0: 0x24040031  addiu       $a0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FBF4u; }
        if (ctx->pc != 0x14FBF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FBF4u; }
        if (ctx->pc != 0x14FBF4u) { return; }
    }
    ctx->pc = 0x14FBF4u;
    // 0x14fbf4: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x14FBF4u;
    SET_GPR_U32(ctx, 31, 0x14FBFCu);
    ctx->pc = 0x14FBF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14FBF4u;
            // 0x14fbf8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FBFCu; }
        if (ctx->pc != 0x14FBFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FBFCu; }
        if (ctx->pc != 0x14FBFCu) { return; }
    }
    ctx->pc = 0x14FBFCu;
    // 0x14fbfc: 0x2404003d  addiu       $a0, $zero, 0x3D
    ctx->pc = 0x14fbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x14fc00: 0xc05bff0  jal         func_16FFC0
    ctx->pc = 0x14FC00u;
    SET_GPR_U32(ctx, 31, 0x14FC08u);
    ctx->pc = 0x14FC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14FC00u;
            // 0x14fc04: 0x2405003e  addiu       $a1, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16FFC0u;
    if (runtime->hasFunction(0x16FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FC08u; }
        if (ctx->pc != 0x14FC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2UVrom_0x16ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FC08u; }
        if (ctx->pc != 0x14FC08u) { return; }
    }
    ctx->pc = 0x14FC08u;
    // 0x14fc08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14fc08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14fc0c: 0x3e00008  jr          $ra
    ctx->pc = 0x14FC0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14FC10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FC0Cu;
            // 0x14fc10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14FC14u;
}
