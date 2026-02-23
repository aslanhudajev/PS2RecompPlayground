#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXPD_EntryMono
// Address: 0x173fb8 - 0x173fe4
void ADXPD_EntryMono_0x173fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXPD_EntryMono");


    ctx->pc = 0x173fb8u;

    // 0x173fb8: 0x8c82000c
    ctx->pc = 0x173fb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x173fbc: 0x14400007
    ctx->pc = 0x173FBCu;
    {
        const bool branch_taken_0x173fbc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x173FC0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x173fbc) {
            ctx->pc = 0x173FDCu;
            goto label_173fdc;
        }
    }
    ctx->pc = 0x173FC4u;
    // 0x173fc4: 0xac850018
    ctx->pc = 0x173fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
    // 0x173fc8: 0xac820014
    ctx->pc = 0x173fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x173fcc: 0xac86001c
    ctx->pc = 0x173fccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 6));
    // 0x173fd0: 0xac870020
    ctx->pc = 0x173fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 7));
    // 0x173fd4: 0x3e00008
    ctx->pc = 0x173FD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173FD8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173FDCu: goto label_173fdc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x173FDCu;
label_173fdc:
    // 0x173fdc: 0x3e00008
    ctx->pc = 0x173FDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173FE0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173FDCu: goto label_173fdc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x173FE4u;
}
