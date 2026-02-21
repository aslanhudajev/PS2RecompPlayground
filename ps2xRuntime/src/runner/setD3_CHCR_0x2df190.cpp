#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setD3_CHCR
// Address: 0x2df190 - 0x2df200
void setD3_CHCR_0x2df190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2df190u;

    // 0x2df190: 0x80302d
    ctx->pc = 0x2df190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df194: 0x3c030001
    ctx->pc = 0x2df194u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
label_2df198:
    // 0x2df198: 0x42000039
    ctx->pc = 0x2df198u;
    ctx->cop0_status &= ~0x10000; // DI: clear EIE (R5900)
    // 0x2df19c: 0x40f
    ctx->pc = 0x2df19cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2df1a0: 0x40026000
    ctx->pc = 0x2df1a0u;
    SET_GPR_U32(ctx, 2, ctx->cop0_status);
    // 0x2df1a4: 0x431024
    ctx->pc = 0x2df1a4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2df1a8: 0x0
    ctx->pc = 0x2df1a8u;
    // NOP
    // 0x2df1ac: 0x1440fffa
    ctx->pc = 0x2DF1ACu;
    {
        const bool branch_taken_0x2df1ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2df1ac) {
            ctx->pc = 0x2DF198u;
            goto label_2df198;
        }
    }
    ctx->pc = 0x2DF1B4u;
    // 0x2df1b4: 0x3c051000
    ctx->pc = 0x2df1b4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x2df1b8: 0x34a5f590
    ctx->pc = 0x2df1b8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 62864));
    // 0x2df1bc: 0x3c041000
    ctx->pc = 0x2df1bcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x2df1c0: 0x3484f520
    ctx->pc = 0x2df1c0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 62752));
    // 0x2df1c4: 0x8c820000
    ctx->pc = 0x2df1c4u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0))); // MMIO: 0x10000000
    // 0x2df1c8: 0x3c030001
    ctx->pc = 0x2df1c8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x2df1cc: 0x431025
    ctx->pc = 0x2df1ccu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2df1d0: 0xaca20000
    ctx->pc = 0x2df1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2df1d4: 0x3c021000
    ctx->pc = 0x2df1d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2df1d8: 0x3442b000
    ctx->pc = 0x2df1d8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 45056));
    // 0x2df1dc: 0xac460000
    ctx->pc = 0x2df1dcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6)); // MMIO: 0x10000000
    // 0x2df1e0: 0x8c820000
    ctx->pc = 0x2df1e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2df1e4: 0x3c03fffe
    ctx->pc = 0x2df1e4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65534 << 16));
    // 0x2df1e8: 0x3463ffff
    ctx->pc = 0x2df1e8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x2df1ec: 0x431024
    ctx->pc = 0x2df1ecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2df1f0: 0xaca20000
    ctx->pc = 0x2df1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2df1f4: 0x42000038
    ctx->pc = 0x2df1f4u;
    ctx->cop0_status |= 0x10000; // EI: set EIE (R5900)
    // 0x2df1f8: 0x3e00008
    ctx->pc = 0x2DF1F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DF198u: goto label_2df198;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DF200u;
}
