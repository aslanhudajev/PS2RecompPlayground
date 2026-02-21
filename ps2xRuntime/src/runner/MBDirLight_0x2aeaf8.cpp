#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBDirLight
// Address: 0x2aeaf8 - 0x2aeb74
void MBDirLight_0x2aeaf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2aeaf8u;

    // 0x2aeaf8: 0x27bdffd0
    ctx->pc = 0x2aeaf8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2aeafc: 0xffbf0020
    ctx->pc = 0x2aeafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2aeb00: 0xffb10010
    ctx->pc = 0x2aeb00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2aeb04: 0xffb00000
    ctx->pc = 0x2aeb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2aeb08: 0x80182d
    ctx->pc = 0x2aeb08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeb0c: 0xa0882d
    ctx->pc = 0x2aeb0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeb10: 0x3c020036
    ctx->pc = 0x2aeb10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2aeb14: 0x8c50dee0
    ctx->pc = 0x2aeb14u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2aeb18: 0x28620002
    ctx->pc = 0x2aeb18u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 2));
    // 0x2aeb1c: 0x1440000a
    ctx->pc = 0x2AEB1Cu;
    {
        const bool branch_taken_0x2aeb1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2AEB20u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2aeb1c) {
            ctx->pc = 0x2AEB48u;
            goto label_2aeb48;
        }
    }
    ctx->pc = 0x2AEB24u;
    // 0x2aeb24: 0x3c04003b
    ctx->pc = 0x2aeb24u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2aeb28: 0x2484f598
    ctx->pc = 0x2aeb28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294964632));
    // 0x2aeb2c: 0x60282d
    ctx->pc = 0x2aeb2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeb30: 0x24060001
    ctx->pc = 0x2aeb30u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aeb34: 0xdfbf0020
    ctx->pc = 0x2aeb34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aeb38: 0xdfb10010
    ctx->pc = 0x2aeb38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aeb3c: 0xdfb00000
    ctx->pc = 0x2aeb3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aeb40: 0x80b492e
    ctx->pc = 0x2AEB40u;
    ctx->pc = 0x2AEB44u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x2D24B8u;
    Errorf_0x2d24b8(rdram, ctx, runtime); return;
    ctx->pc = 0x2AEB48u;
label_2aeb48:
    // 0x2aeb48: 0x8e04001c
    ctx->pc = 0x2aeb48u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2aeb4c: 0xc0b958e
    ctx->pc = 0x2AEB4Cu;
    SET_GPR_U32(ctx, 31, 0x2AEB54u);
    ctx->pc = 0x2AEB50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 240));
    ctx->pc = 0x2E5638u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x2e5638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEB54u; }
    }
    if (ctx->pc != 0x2AEB54u) { return; }
    ctx->pc = 0x2AEB54u;
    // 0x2aeb54: 0x8e04001c
    ctx->pc = 0x2aeb54u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2aeb58: 0x24840100
    ctx->pc = 0x2aeb58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 256));
    // 0x2aeb5c: 0x220282d
    ctx->pc = 0x2aeb5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeb60: 0xdfbf0020
    ctx->pc = 0x2aeb60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aeb64: 0xdfb10010
    ctx->pc = 0x2aeb64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aeb68: 0xdfb00000
    ctx->pc = 0x2aeb68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aeb6c: 0x80b958e
    ctx->pc = 0x2AEB6Cu;
    ctx->pc = 0x2AEB70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x2E5638u;
    sceVu0CopyVector_0x2e5638(rdram, ctx, runtime); return;
    ctx->pc = 0x2AEB74u;
}
