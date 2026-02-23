#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSTM_SetEos
// Address: 0x170ce0 - 0x170d14
void ADXSTM_SetEos_0x170ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSTM_SetEos");


    ctx->pc = 0x170ce0u;

    // 0x170ce0: 0x4a00003
    ctx->pc = 0x170CE0u;
    {
        const bool branch_taken_0x170ce0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x170CE4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x170ce0) {
            ctx->pc = 0x170CF0u;
            goto label_170cf0;
        }
    }
    ctx->pc = 0x170CE8u;
    // 0x170ce8: 0x3e00008
    ctx->pc = 0x170CE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170CECu;
        WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170CF0u: goto label_170cf0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x170CF0u;
label_170cf0:
    // 0x170cf0: 0x8cc20014
    ctx->pc = 0x170cf0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x170cf4: 0x2403ffff
    ctx->pc = 0x170cf4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x170cf8: 0x244407ff
    ctx->pc = 0x170cf8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 2047));
    // 0x170cfc: 0x24420ffe
    ctx->pc = 0x170cfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4094));
    // 0x170d00: 0x64182a
    ctx->pc = 0x170d00u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
    // 0x170d04: 0x83100b
    ctx->pc = 0x170d04u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
    // 0x170d08: 0x212c3
    ctx->pc = 0x170d08u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x170d0c: 0x3e00008
    ctx->pc = 0x170D0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170D10u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170CF0u: goto label_170cf0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x170D14u;
}
