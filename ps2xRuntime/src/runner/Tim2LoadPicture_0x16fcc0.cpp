#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Tim2LoadPicture
// Address: 0x16fcc0 - 0x16fd0c
void Tim2LoadPicture_0x16fcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Tim2LoadPicture_0x16fcc0");
#endif

    ctx->pc = 0x16fcc0u;

    // 0x16fcc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16fcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16fcc4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x16fcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16fcc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16fcc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16fccc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16fcccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16fcd0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x16fcd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fcd4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16fcd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16fcd8: 0xc05be58  jal         func_16F960
    ctx->pc = 0x16FCD8u;
    SET_GPR_U32(ctx, 31, 0x16FCE0u);
    ctx->pc = 0x16FCDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FCD8u;
            // 0x16fcdc: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F960u;
    if (runtime->hasFunction(0x16F960u)) {
        auto targetFn = runtime->lookupFunction(0x16F960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FCE0u; }
        if (ctx->pc != 0x16FCE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Tim2LoadImage_0x16f960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FCE0u; }
        if (ctx->pc != 0x16FCE0u) { return; }
    }
    ctx->pc = 0x16FCE0u;
    // 0x16fce0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16fce0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fce4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16fce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fce8: 0xc05bdcc  jal         func_16F730
    ctx->pc = 0x16FCE8u;
    SET_GPR_U32(ctx, 31, 0x16FCF0u);
    ctx->pc = 0x16FCECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FCE8u;
            // 0x16fcec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F730u;
    if (runtime->hasFunction(0x16F730u)) {
        auto targetFn = runtime->lookupFunction(0x16F730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FCF0u; }
        if (ctx->pc != 0x16FCF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Tim2LoadClut_0x16f730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FCF0u; }
        if (ctx->pc != 0x16FCF0u) { return; }
    }
    ctx->pc = 0x16FCF0u;
    // 0x16fcf0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x16fcf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fcf4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x16fcf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16fcf8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16fcf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16fcfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16fcfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16fd00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16fd00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16fd04: 0x3e00008  jr          $ra
    ctx->pc = 0x16FD04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FD08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FD04u;
            // 0x16fd08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16FD0Cu;
}
