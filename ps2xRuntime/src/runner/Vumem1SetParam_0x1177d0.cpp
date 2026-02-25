#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Vumem1SetParam
// Address: 0x1177d0 - 0x1177f4
void Vumem1SetParam_0x1177d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Vumem1SetParam_0x1177d0");
#endif

    ctx->pc = 0x1177d0u;

    // 0x1177d0: 0x3c070022  lui         $a3, 0x22
    ctx->pc = 0x1177d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)34 << 16));
    // 0x1177d4: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1177d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1177d8: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1177d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x1177dc: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1177dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1177e0: 0xac65720c  sw          $a1, 0x720C($v1)
    ctx->pc = 0x1177e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 29196), GPR_U32(ctx, 5));
    // 0x1177e4: 0xac447224  sw          $a0, 0x7224($v0)
    ctx->pc = 0x1177e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29220), GPR_U32(ctx, 4));
    // 0x1177e8: 0xace47208  sw          $a0, 0x7208($a3)
    ctx->pc = 0x1177e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 29192), GPR_U32(ctx, 4));
    // 0x1177ec: 0x8045dfe  j           func_1177F8
    ctx->pc = 0x1177ECu;
    ctx->pc = 0x1177F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1177ECu;
            // 0x1177f0: 0xacc07220  sw          $zero, 0x7220($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 29216), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1177F8u;
    if (runtime->hasFunction(0x1177F8u)) {
        auto targetFn = runtime->lookupFunction(0x1177F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        Vumem1Reset_0x1177f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1177F4u;
}
