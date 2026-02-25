#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: PlayerRenderFunction
// Address: 0x18b140 - 0x18b1a8
void PlayerRenderFunction_0x18b140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("PlayerRenderFunction_0x18b140");
#endif

    ctx->pc = 0x18b140u;

    // 0x18b140: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18b140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18b144: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18b144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18b148: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18b148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18b14c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18b14cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b150: 0x8c8400bc  lw          $a0, 0xBC($a0)
    ctx->pc = 0x18b150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x18b154: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18B154u;
    {
        const bool branch_taken_0x18b154 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x18B158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B154u;
            // 0x18b158: 0x30830001  andi        $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b154) {
            ctx->pc = 0x18B168u;
            goto label_18b168;
        }
    }
    ctx->pc = 0x18B15Cu;
    // 0x18b15c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x18B15Cu;
    {
        const bool branch_taken_0x18b15c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b15c) {
            ctx->pc = 0x18B168u;
            goto label_18b168;
        }
    }
    ctx->pc = 0x18B164u;
    // 0x18b164: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x18b164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_18b168:
    // 0x18b168: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x18B168u;
    {
        const bool branch_taken_0x18b168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b168) {
            ctx->pc = 0x18B198u;
            goto label_18b198;
        }
    }
    ctx->pc = 0x18B170u;
    // 0x18b170: 0xc0605c0  jal         func_181700
    ctx->pc = 0x18B170u;
    SET_GPR_U32(ctx, 31, 0x18B178u);
    ctx->pc = 0x18B174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B170u;
            // 0x18b174: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181700u;
    if (runtime->hasFunction(0x181700u)) {
        auto targetFn = runtime->lookupFunction(0x181700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B178u; }
        if (ctx->pc != 0x18B178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CameraViewMicroD_0x181700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B178u; }
        if (ctx->pc != 0x18B178u) { return; }
    }
    ctx->pc = 0x18B178u;
    // 0x18b178: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18b178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b17c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18b17cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b180: 0xc0605dc  jal         func_181770
    ctx->pc = 0x18B180u;
    SET_GPR_U32(ctx, 31, 0x18B188u);
    ctx->pc = 0x18B184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B180u;
            // 0x18b184: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B188u; }
        if (ctx->pc != 0x18B188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B188u; }
        if (ctx->pc != 0x18B188u) { return; }
    }
    ctx->pc = 0x18B188u;
    // 0x18b188: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18b188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18b18c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18b18cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b190: 0xc0605dc  jal         func_181770
    ctx->pc = 0x18B190u;
    SET_GPR_U32(ctx, 31, 0x18B198u);
    ctx->pc = 0x18B194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18B190u;
            // 0x18b194: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181770u;
    if (runtime->hasFunction(0x181770u)) {
        auto targetFn = runtime->lookupFunction(0x181770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B198u; }
        if (ctx->pc != 0x18B198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ProcessEs_0x181770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18B198u; }
        if (ctx->pc != 0x18B198u) { return; }
    }
    ctx->pc = 0x18B198u;
label_18b198:
    // 0x18b198: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18b198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b19c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18b19cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b1a0: 0x3e00008  jr          $ra
    ctx->pc = 0x18B1A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18B1A0u;
            // 0x18b1a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18B168u: goto label_18b168;
            case 0x18B198u: goto label_18b198;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18B1A8u;
}
