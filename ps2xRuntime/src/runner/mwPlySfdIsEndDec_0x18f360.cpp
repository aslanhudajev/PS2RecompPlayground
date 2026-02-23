#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlySfdIsEndDec
// Address: 0x18f360 - 0x18f384
void mwPlySfdIsEndDec_0x18f360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlySfdIsEndDec");


    ctx->pc = 0x18f360u;

    // 0x18f360: 0x27bdfff0
    ctx->pc = 0x18f360u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18f364: 0xffbf0000
    ctx->pc = 0x18f364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18f368: 0xc067406
    ctx->pc = 0x18F368u;
    SET_GPR_U32(ctx, 31, 0x18F370u);
    ctx->pc = 0x19D018u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_GetSvrStat_0x19d018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F370u; }
        else if (ctx->pc != 0x18F370u) { ctx->pc = 0x18F370u; }
    }
    if (ctx->pc != 0x18F370u) { return; }
    ctx->pc = 0x18F370u;
    // 0x18f370: 0x38420001
    ctx->pc = 0x18f370u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x18f374: 0xdfbf0000
    ctx->pc = 0x18f374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f378: 0x2102b
    ctx->pc = 0x18f378u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x18f37c: 0x3e00008
    ctx->pc = 0x18F37Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F380u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18F384u;
}
