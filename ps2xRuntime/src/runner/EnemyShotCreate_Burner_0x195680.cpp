#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyShotCreate_Burner
// Address: 0x195680 - 0x19569c
void EnemyShotCreate_Burner_0x195680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyShotCreate_Burner_0x195680");
#endif

    ctx->pc = 0x195680u;

    // 0x195680: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x195680u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x195684: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x195684u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195688: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x195688u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19568c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x19568cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x195690: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x195690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195694: 0x8065674  j           func_1959D0
    ctx->pc = 0x195694u;
    ctx->pc = 0x195698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195694u;
            // 0x195698: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1959D0u;
    if (runtime->hasFunction(0x1959D0u)) {
        auto targetFn = runtime->lookupFunction(0x1959D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        EnemyShotCreate_0x1959d0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19569Cu;
}
