#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyShotCreate_Burner_Small
// Address: 0x195660 - 0x19567c
void EnemyShotCreate_Burner_Small_0x195660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyShotCreate_Burner_Small_0x195660");
#endif

    ctx->pc = 0x195660u;

    // 0x195660: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x195660u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x195664: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x195664u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195668: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x195668u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19566c: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x19566cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x195670: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x195670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195674: 0x8065674  j           func_1959D0
    ctx->pc = 0x195674u;
    ctx->pc = 0x195678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195674u;
            // 0x195678: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1959D0u;
    if (runtime->hasFunction(0x1959D0u)) {
        auto targetFn = runtime->lookupFunction(0x1959D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        EnemyShotCreate_0x1959d0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19567Cu;
}
