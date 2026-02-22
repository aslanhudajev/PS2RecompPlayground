#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setRot
// Address: 0x108bd0 - 0x108c0c
void setRot_0x108bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x108bd0u;

    // 0x108bd0: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x108bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x108bd4: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x108bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x108bd8: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x108bd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x108bdc: 0x24421698  addiu       $v0, $v0, 0x1698
    ctx->pc = 0x108bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5784));
    // 0x108be0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x108be0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108be4: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x108be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x108be8: 0xac68002c  sw          $t0, 0x2C($v1)
    ctx->pc = 0x108be8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 8));
    // 0x108bec: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x108becu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108bf0: 0xad250030  sw          $a1, 0x30($t1)
    ctx->pc = 0x108bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 48), GPR_U32(ctx, 5));
    // 0x108bf4: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x108bf4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108bf8: 0xe54c0034  swc1        $f12, 0x34($t2)
    ctx->pc = 0x108bf8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 52), bits); }
    // 0x108bfc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x108bfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108c00: 0xac660038  sw          $a2, 0x38($v1)
    ctx->pc = 0x108c00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 6));
    // 0x108c04: 0x3e00008  jr          $ra
    ctx->pc = 0x108C04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108C04u;
            // 0x108c08: 0xac47003c  sw          $a3, 0x3C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x108C0Cu;
}
