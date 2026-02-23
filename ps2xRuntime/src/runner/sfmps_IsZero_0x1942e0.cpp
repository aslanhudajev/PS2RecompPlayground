#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmps_IsZero
// Address: 0x1942e0 - 0x194318
void sfmps_IsZero_0x1942e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmps_IsZero");


    ctx->pc = 0x1942e0u;

    // 0x1942e0: 0x18a0000b
    ctx->pc = 0x1942E0u;
    {
        const bool branch_taken_0x1942e0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1942E4u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1942e0) {
            ctx->pc = 0x194310u;
            goto label_194310;
        }
    }
    ctx->pc = 0x1942E8u;
    // 0x1942e8: 0x80820000
    ctx->pc = 0x1942e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1942ec: 0x0
    ctx->pc = 0x1942ecu;
    // NOP
label_1942f0:
    // 0x1942f0: 0x10400003
    ctx->pc = 0x1942F0u;
    {
        const bool branch_taken_0x1942f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1942F4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x1942f0) {
            ctx->pc = 0x194300u;
            goto label_194300;
        }
    }
    ctx->pc = 0x1942F8u;
    // 0x1942f8: 0x3e00008
    ctx->pc = 0x1942F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1942FCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1942F0u: goto label_1942f0;
            case 0x194300u: goto label_194300;
            case 0x194310u: goto label_194310;
            default: break;
        }
        return;
    }
    ctx->pc = 0x194300u;
label_194300:
    // 0x194300: 0x24630001
    ctx->pc = 0x194300u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x194304: 0x65102a
    ctx->pc = 0x194304u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 5)));
    // 0x194308: 0x5440fff9
    ctx->pc = 0x194308u;
    {
        const bool branch_taken_0x194308 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x194308) {
            ctx->pc = 0x19430Cu;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->pc = 0x1942F0u;
            goto label_1942f0;
        }
    }
    ctx->pc = 0x194310u;
label_194310:
    // 0x194310: 0x3e00008
    ctx->pc = 0x194310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194314u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1942F0u: goto label_1942f0;
            case 0x194300u: goto label_194300;
            case 0x194310u: goto label_194310;
            default: break;
        }
        return;
    }
    ctx->pc = 0x194318u;
}
