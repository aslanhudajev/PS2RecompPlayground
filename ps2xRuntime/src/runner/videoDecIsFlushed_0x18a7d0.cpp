#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: videoDecIsFlushed
// Address: 0x18a7d0 - 0x18a810
void videoDecIsFlushed_0x18a7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("videoDecIsFlushed_0x18a7d0");
#endif

    ctx->pc = 0x18a7d0u;

    // 0x18a7d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18a7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18a7d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18a7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18a7d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18a7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18a7dc: 0xc062a3c  jal         func_18A8F0
    ctx->pc = 0x18A7DCu;
    SET_GPR_U32(ctx, 31, 0x18A7E4u);
    ctx->pc = 0x18A7E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A7DCu;
            // 0x18a7e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A8F0u;
    if (runtime->hasFunction(0x18A8F0u)) {
        auto targetFn = runtime->lookupFunction(0x18A8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A7E4u; }
        if (ctx->pc != 0x18A7E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        videoDecInputCount_0x18a8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A7E4u; }
        if (ctx->pc != 0x18A7E4u) { return; }
    }
    ctx->pc = 0x18A7E4u;
    // 0x18a7e4: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x18a7e4u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18a7e8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x18a7e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x18a7ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18A7ECu;
    {
        const bool branch_taken_0x18a7ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A7F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A7ECu;
            // 0x18a7f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a7ec) {
            ctx->pc = 0x18A800u;
            goto label_18a800;
        }
    }
    ctx->pc = 0x18A7F4u;
    // 0x18a7f4: 0xc04adc6  jal         func_12B718
    ctx->pc = 0x18A7F4u;
    SET_GPR_U32(ctx, 31, 0x18A7FCu);
    ctx->pc = 0x12B718u;
    if (runtime->hasFunction(0x12B718u)) {
        auto targetFn = runtime->lookupFunction(0x12B718u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A7FCu; }
        if (ctx->pc != 0x18A7FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMpegIsRefBuffEmpty_0x12b718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A7FCu; }
        if (ctx->pc != 0x18A7FCu) { return; }
    }
    ctx->pc = 0x18A7FCu;
    // 0x18a7fc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x18a7fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_18a800:
    // 0x18a800: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18a800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a804: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18a804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a808: 0x3e00008  jr          $ra
    ctx->pc = 0x18A808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A808u;
            // 0x18a80c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18A800u: goto label_18a800;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18A810u;
}
