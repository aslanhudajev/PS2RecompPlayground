#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSJD_Start
// Address: 0x16dea0 - 0x16decc
void ADXSJD_Start_0x16dea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSJD_Start");


    ctx->pc = 0x16dea0u;

    // 0x16dea0: 0x27bdffe0
    ctx->pc = 0x16dea0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16dea4: 0xffb00000
    ctx->pc = 0x16dea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16dea8: 0xffbf0010
    ctx->pc = 0x16dea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16deac: 0xc05b716
    ctx->pc = 0x16DEACu;
    SET_GPR_U32(ctx, 31, 0x16DEB4u);
    ctx->pc = 0x16DEB0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16DC58u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxsjd_clear_0x16dc58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DEB4u; }
        else if (ctx->pc != 0x16DEB4u) { ctx->pc = 0x16DEB4u; }
    }
    if (ctx->pc != 0x16DEB4u) { return; }
    ctx->pc = 0x16DEB4u;
    // 0x16deb4: 0x24020001
    ctx->pc = 0x16deb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16deb8: 0xdfbf0010
    ctx->pc = 0x16deb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16debc: 0xa2020001
    ctx->pc = 0x16debcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x16dec0: 0xdfb00000
    ctx->pc = 0x16dec0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16dec4: 0x3e00008
    ctx->pc = 0x16DEC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DEC8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16DECCu;
}
