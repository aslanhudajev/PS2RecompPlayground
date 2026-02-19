#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _clearEach
// Address: 0x2ee848 - 0x2ee918
void _clearEach_0x2ee848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ee848u;

    // 0x2ee848: 0x24030001
    ctx->pc = 0x2ee848u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee84c: 0x3c02003a
    ctx->pc = 0x2ee84cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2ee850: 0x3c04003a
    ctx->pc = 0x2ee850u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2ee854: 0xac40327c
    ctx->pc = 0x2ee854u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12924), GPR_U32(ctx, 0));
    // 0x2ee858: 0xac833064
    ctx->pc = 0x2ee858u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12388), GPR_U32(ctx, 3));
    // 0x2ee85c: 0x3c030001
    ctx->pc = 0x2ee85cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
label_2ee860:
    // 0x2ee860: 0x42000039
    ctx->pc = 0x2ee860u;
    ctx->cop0_status &= ~0x1; // Disable interrupts
    // 0x2ee864: 0x40f
    ctx->pc = 0x2ee864u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2ee868: 0x40026000
    ctx->pc = 0x2ee868u;
    SET_GPR_U32(ctx, 2, ctx->cop0_status);
    // 0x2ee86c: 0x431024
    ctx->pc = 0x2ee86cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ee870: 0x0
    ctx->pc = 0x2ee870u;
    // NOP
    // 0x2ee874: 0x1440fffa
    ctx->pc = 0x2EE874u;
    {
        const bool branch_taken_0x2ee874 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2ee874) {
            ctx->pc = 0x2EE860u;
            goto label_2ee860;
        }
    }
    ctx->pc = 0x2EE87Cu;
    // 0x2ee87c: 0x3c061000
    ctx->pc = 0x2ee87cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)4096 << 16));
    // 0x2ee880: 0x3c070001
    ctx->pc = 0x2ee880u;
    SET_GPR_U32(ctx, 7, ((uint32_t)1 << 16));
    // 0x2ee884: 0x34c6f520
    ctx->pc = 0x2ee884u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 62752));
    // 0x2ee888: 0x3c051000
    ctx->pc = 0x2ee888u;
    SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x2ee88c: 0x8cc20000
    ctx->pc = 0x2ee88cu;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 6), 0))); // MMIO: 0x10000000
    // 0x2ee890: 0x34a5f590
    ctx->pc = 0x2ee890u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 62864));
    // 0x2ee894: 0x3c031000
    ctx->pc = 0x2ee894u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2ee898: 0x3c041000
    ctx->pc = 0x2ee898u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x2ee89c: 0x471025
    ctx->pc = 0x2ee89cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2ee8a0: 0x3463b000
    ctx->pc = 0x2ee8a0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 45056));
    // 0x2ee8a4: 0xaca20000
    ctx->pc = 0x2ee8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2ee8a8: 0x3484b400
    ctx->pc = 0x2ee8a8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 46080));
    // 0x2ee8ac: 0xac600000
    ctx->pc = 0x2ee8acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2ee8b0: 0x3c021000
    ctx->pc = 0x2ee8b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2ee8b4: 0xac800000
    ctx->pc = 0x2ee8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2ee8b8: 0x3442d400
    ctx->pc = 0x2ee8b8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 54272));
    // 0x2ee8bc: 0xac400000
    ctx->pc = 0x2ee8bcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x2ee8c0: 0x3c03fffe
    ctx->pc = 0x2ee8c0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65534 << 16));
    // 0x2ee8c4: 0x3463ffff
    ctx->pc = 0x2ee8c4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2ee8c8: 0x8cc20000
    ctx->pc = 0x2ee8c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ee8cc: 0x431024
    ctx->pc = 0x2ee8ccu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ee8d0: 0xaca20000
    ctx->pc = 0x2ee8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2ee8d4: 0x42000038
    ctx->pc = 0x2ee8d4u;
    ctx->cop0_status |= 0x1; // Enable interrupts
    // 0x2ee8d8: 0x3c021000
    ctx->pc = 0x2ee8d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2ee8dc: 0x3c041000
    ctx->pc = 0x2ee8dcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x2ee8e0: 0x3442b020
    ctx->pc = 0x2ee8e0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 45088));
    // 0x2ee8e4: 0x3484b420
    ctx->pc = 0x2ee8e4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 46112));
    // 0x2ee8e8: 0xac400000
    ctx->pc = 0x2ee8e8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x2ee8ec: 0x3c031000
    ctx->pc = 0x2ee8ecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2ee8f0: 0xac800000
    ctx->pc = 0x2ee8f0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x2ee8f4: 0x3463d420
    ctx->pc = 0x2ee8f4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 54304));
    // 0x2ee8f8: 0xac600000
    ctx->pc = 0x2ee8f8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x2ee8fc: 0x3c021000
    ctx->pc = 0x2ee8fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2ee900: 0x34422010
    ctx->pc = 0x2ee900u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8208));
    // 0x2ee904: 0x3c034000
    ctx->pc = 0x2ee904u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16384 << 16));
    // 0x2ee908: 0xac430000
    ctx->pc = 0x2ee908u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x2ee90c: 0x202d
    ctx->pc = 0x2ee90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee910: 0x80bd2ba
    ctx->pc = 0x2EE910u;
    ctx->pc = 0x2EE914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F4AE8u;
    sceIpuSync_0x2f4ae8(rdram, ctx, runtime); return;
    ctx->pc = 0x2EE918u;
}
