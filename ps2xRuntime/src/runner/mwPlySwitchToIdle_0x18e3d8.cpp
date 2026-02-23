#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlySwitchToIdle
// Address: 0x18e3d8 - 0x18e3fc
void mwPlySwitchToIdle_0x18e3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlySwitchToIdle");


    ctx->pc = 0x18e3d8u;

    // 0x18e3d8: 0x27bdfff0
    ctx->pc = 0x18e3d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18e3dc: 0xffbf0000
    ctx->pc = 0x18e3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18e3e0: 0xc063900
    ctx->pc = 0x18E3E0u;
    SET_GPR_U32(ctx, 31, 0x18E3E8u);
    ctx->pc = 0x18E400u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlySaveRsc_0x18e400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E3E8u; }
        else if (ctx->pc != 0x18E3E8u) { ctx->pc = 0x18E3E8u; }
    }
    if (ctx->pc != 0x18E3E8u) { return; }
    ctx->pc = 0x18E3E8u;
    // 0x18e3e8: 0xc05b5a4
    ctx->pc = 0x18E3E8u;
    SET_GPR_U32(ctx, 31, 0x18E3F0u);
    ctx->pc = 0x16D690u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXM_WaitVsync_0x16d690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E3F0u; }
        else if (ctx->pc != 0x18E3F0u) { ctx->pc = 0x18E3F0u; }
    }
    if (ctx->pc != 0x18E3F0u) { return; }
    ctx->pc = 0x18E3F0u;
    // 0x18e3f0: 0xdfbf0000
    ctx->pc = 0x18e3f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e3f4: 0x8063902
    ctx->pc = 0x18E3F4u;
    ctx->pc = 0x18E3F8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x18E408u;
    mwPlyRestoreRsc_0x18e408(rdram, ctx, runtime); return;
    ctx->pc = 0x18E3FCu;
}
