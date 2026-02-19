#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: RunesToBeatFlags
// Address: 0x289d80 - 0x289dd4
void RunesToBeatFlags_0x289d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x289d80u;

    // 0x289d80: 0x382d
    ctx->pc = 0x289d80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289d84: 0x302d
    ctx->pc = 0x289d84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289d88: 0x240a0024
    ctx->pc = 0x289d88u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 36));
    // 0x289d8c: 0x3c020035
    ctx->pc = 0x289d8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x289d90: 0x2449aaec
    ctx->pc = 0x289d90u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 4294945516));
    // 0x289d94: 0x3c020035
    ctx->pc = 0x289d94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x289d98: 0x2448aaf0
    ctx->pc = 0x289d98u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294945520));
    // 0x289d9c: 0xca2818
    ctx->pc = 0x289d9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_289da0:
    // 0x289da0: 0xa91021
    ctx->pc = 0x289da0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x289da4: 0x8c430000
    ctx->pc = 0x289da4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x289da8: 0x831024
    ctx->pc = 0x289da8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x289dac: 0x14430004
    ctx->pc = 0x289DACu;
    {
        const bool branch_taken_0x289dac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x289DB0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x289dac) {
            ctx->pc = 0x289DC0u;
            goto label_289dc0;
        }
    }
    ctx->pc = 0x289DB4u;
    // 0x289db4: 0xa81021
    ctx->pc = 0x289db4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x289db8: 0x8c420000
    ctx->pc = 0x289db8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x289dbc: 0xe23825
    ctx->pc = 0x289dbcu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_289dc0:
    // 0x289dc0: 0x28c20009
    ctx->pc = 0x289dc0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 9));
    // 0x289dc4: 0x1440fff6
    ctx->pc = 0x289DC4u;
    {
        const bool branch_taken_0x289dc4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x289DC8u;
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x289dc4) {
            ctx->pc = 0x289DA0u;
            goto label_289da0;
        }
    }
    ctx->pc = 0x289DCCu;
    // 0x289dcc: 0x3e00008
    ctx->pc = 0x289DCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289DD0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x289DA0u: goto label_289da0;
            case 0x289DC0u: goto label_289dc0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x289DD4u;
}
