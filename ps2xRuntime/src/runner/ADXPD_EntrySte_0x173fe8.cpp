#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXPD_EntrySte
// Address: 0x173fe8 - 0x174018
void ADXPD_EntrySte_0x173fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXPD_EntrySte");


    ctx->pc = 0x173fe8u;

    // 0x173fe8: 0x8c82000c
    ctx->pc = 0x173fe8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x173fec: 0x14400008
    ctx->pc = 0x173FECu;
    {
        const bool branch_taken_0x173fec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x173FF0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x173fec) {
            ctx->pc = 0x174010u;
            goto label_174010;
        }
    }
    ctx->pc = 0x173FF4u;
    // 0x173ff4: 0xac880024
    ctx->pc = 0x173ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 8));
    // 0x173ff8: 0xac820014
    ctx->pc = 0x173ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x173ffc: 0x24020001
    ctx->pc = 0x173ffcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x174000: 0xac850018
    ctx->pc = 0x174000u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
    // 0x174004: 0xac86001c
    ctx->pc = 0x174004u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 6));
    // 0x174008: 0x3e00008
    ctx->pc = 0x174008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17400Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 7));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174010u: goto label_174010;
            default: break;
        }
        return;
    }
    ctx->pc = 0x174010u;
label_174010:
    // 0x174010: 0x3e00008
    ctx->pc = 0x174010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174014u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174010u: goto label_174010;
            default: break;
        }
        return;
    }
    ctx->pc = 0x174018u;
}
