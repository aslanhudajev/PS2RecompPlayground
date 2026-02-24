#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: setScale
// Address: 0x108b88 - 0x108bac
void setScale_0x108b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("setScale_0x108b88");
#endif

    ctx->pc = 0x108b88u;

    // 0x108b88: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x108b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x108b8c: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x108b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x108b90: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x108b90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x108b94: 0x24421698  addiu       $v0, $v0, 0x1698
    ctx->pc = 0x108b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5784));
    // 0x108b98: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x108b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x108b9c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x108b9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ba0: 0xe46c0020  swc1        $f12, 0x20($v1)
    ctx->pc = 0x108ba0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x108ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x108BA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108BA4u;
            // 0x108ba8: 0xe44d0024  swc1        $f13, 0x24($v0) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x108BACu;
}
