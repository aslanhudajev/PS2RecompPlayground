#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: videoDecSetStream
// Address: 0x18a9d0 - 0x18a9f0
void videoDecSetStream_0x18a9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("videoDecSetStream_0x18a9d0");
#endif

    ctx->pc = 0x18a9d0u;

    // 0x18a9d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18a9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18a9d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18a9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18a9d8: 0xc04aa9c  jal         func_12AA70
    ctx->pc = 0x18A9D8u;
    SET_GPR_U32(ctx, 31, 0x18A9E0u);
    ctx->pc = 0x18A9DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A9D8u;
            // 0x18a9dc: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)255u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AA70u;
    if (runtime->hasFunction(0x12AA70u)) {
        auto targetFn = runtime->lookupFunction(0x12AA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A9E0u; }
        if (ctx->pc != 0x18A9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMpegAddStrCallback_0x12aa70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A9E0u; }
        if (ctx->pc != 0x18A9E0u) { return; }
    }
    ctx->pc = 0x18A9E0u;
    // 0x18a9e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a9e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a9e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18a9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a9e8: 0x3e00008  jr          $ra
    ctx->pc = 0x18A9E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A9E8u;
            // 0x18a9ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18A9F0u;
}
