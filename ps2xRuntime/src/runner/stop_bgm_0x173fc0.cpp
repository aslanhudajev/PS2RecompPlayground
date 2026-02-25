#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stop_bgm
// Address: 0x173fc0 - 0x17400c
void stop_bgm_0x173fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stop_bgm_0x173fc0");
#endif

    ctx->pc = 0x173fc0u;

    // 0x173fc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x173fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x173fc4: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x173fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x173fc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x173fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x173fcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x173fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x173fd0: 0xc05cd60  jal         func_173580
    ctx->pc = 0x173FD0u;
    SET_GPR_U32(ctx, 31, 0x173FD8u);
    ctx->pc = 0x173FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173FD0u;
            // 0x173fd4: 0x8c242788  lw          $a0, 0x2788($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10120)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173580u;
    if (runtime->hasFunction(0x173580u)) {
        auto targetFn = runtime->lookupFunction(0x173580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173FD8u; }
        if (ctx->pc != 0x173FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_StopStream_0x173580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173FD8u; }
        if (ctx->pc != 0x173FD8u) { return; }
    }
    ctx->pc = 0x173FD8u;
    // 0x173fd8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x173fd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173fdc: 0x0  nop
    ctx->pc = 0x173fdcu;
    // NOP
label_173fe0:
    // 0x173fe0: 0xc05cd48  jal         func_173520
    ctx->pc = 0x173FE0u;
    SET_GPR_U32(ctx, 31, 0x173FE8u);
    ctx->pc = 0x173FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173FE0u;
            // 0x173fe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173520u;
    if (runtime->hasFunction(0x173520u)) {
        auto targetFn = runtime->lookupFunction(0x173520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173FE8u; }
        if (ctx->pc != 0x173FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_StopSound_0x173520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173FE8u; }
        if (ctx->pc != 0x173FE8u) { return; }
    }
    ctx->pc = 0x173FE8u;
    // 0x173fe8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x173fe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x173fec: 0x2a030030  slti        $v1, $s0, 0x30
    ctx->pc = 0x173fecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x173ff0: 0x0  nop
    ctx->pc = 0x173ff0u;
    // NOP
    // 0x173ff4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x173FF4u;
    {
        const bool branch_taken_0x173ff4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x173ff4) {
            ctx->pc = 0x173FE0u;
            goto label_173fe0;
        }
    }
    ctx->pc = 0x173FFCu;
    // 0x173ffc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x173ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174000: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x174000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174004: 0x3e00008  jr          $ra
    ctx->pc = 0x174004u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174004u;
            // 0x174008: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173FE0u: goto label_173fe0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17400Cu;
}
