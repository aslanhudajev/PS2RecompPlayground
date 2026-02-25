#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateChip
// Address: 0x1ec3f0 - 0x1ec460
void CreateChip_0x1ec3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateChip_0x1ec3f0");
#endif

    ctx->pc = 0x1ec3f0u;

    // 0x1ec3f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ec3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ec3f4: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1ec3f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1ec3f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ec3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ec3fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ec3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ec400: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ec400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ec404: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ec404u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec408: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ec408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ec40c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ec40cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec410: 0x8c233830  lw          $v1, 0x3830($at)
    ctx->pc = 0x1ec410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 14384)));
    // 0x1ec414: 0x28610201  slti        $at, $v1, 0x201
    ctx->pc = 0x1ec414u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)513) ? 1 : 0);
    // 0x1ec418: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x1EC418u;
    {
        const bool branch_taken_0x1ec418 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC41Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC418u;
            // 0x1ec41c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec418) {
            ctx->pc = 0x1EC448u;
            goto label_1ec448;
        }
    }
    ctx->pc = 0x1EC420u;
    // 0x1ec420: 0xc07b1e4  jal         func_1EC790
    ctx->pc = 0x1EC420u;
    SET_GPR_U32(ctx, 31, 0x1EC428u);
    ctx->pc = 0x1EC790u;
    if (runtime->hasFunction(0x1EC790u)) {
        auto targetFn = runtime->lookupFunction(0x1EC790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC428u; }
        if (ctx->pc != 0x1EC428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateRandomChip_0x1ec790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC428u; }
        if (ctx->pc != 0x1EC428u) { return; }
    }
    ctx->pc = 0x1EC428u;
    // 0x1ec428: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec42c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ec42cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec430: 0xc07b1e4  jal         func_1EC790
    ctx->pc = 0x1EC430u;
    SET_GPR_U32(ctx, 31, 0x1EC438u);
    ctx->pc = 0x1EC434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC430u;
            // 0x1ec434: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC790u;
    if (runtime->hasFunction(0x1EC790u)) {
        auto targetFn = runtime->lookupFunction(0x1EC790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC438u; }
        if (ctx->pc != 0x1EC438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateRandomChip_0x1ec790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC438u; }
        if (ctx->pc != 0x1EC438u) { return; }
    }
    ctx->pc = 0x1EC438u;
    // 0x1ec438: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ec438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec43c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ec43cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec440: 0xc07b1e4  jal         func_1EC790
    ctx->pc = 0x1EC440u;
    SET_GPR_U32(ctx, 31, 0x1EC448u);
    ctx->pc = 0x1EC444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC440u;
            // 0x1ec444: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC790u;
    if (runtime->hasFunction(0x1EC790u)) {
        auto targetFn = runtime->lookupFunction(0x1EC790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC448u; }
        if (ctx->pc != 0x1EC448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateRandomChip_0x1ec790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC448u; }
        if (ctx->pc != 0x1EC448u) { return; }
    }
    ctx->pc = 0x1EC448u;
label_1ec448:
    // 0x1ec448: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ec448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ec44c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ec44cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec450: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ec450u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec454: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ec454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec458: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC45Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC458u;
            // 0x1ec45c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EC448u: goto label_1ec448;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EC460u;
}
