#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: OptionsSetup
// Address: 0x20a5e0 - 0x20a62c
void OptionsSetup_0x20a5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x20a5e0u;

    // 0x20a5e0: 0x27bdffd0
    ctx->pc = 0x20a5e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20a5e4: 0xffbf0020
    ctx->pc = 0x20a5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20a5e8: 0xffb10010
    ctx->pc = 0x20a5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x20a5ec: 0xffb00000
    ctx->pc = 0x20a5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20a5f0: 0x3c110032
    ctx->pc = 0x20a5f0u;
    SET_GPR_U32(ctx, 17, ((uint32_t)50 << 16));
    // 0x20a5f4: 0x2630f458
    ctx->pc = 0x20a5f4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 4294964312));
    // 0x20a5f8: 0xc088172
    ctx->pc = 0x20A5F8u;
    SET_GPR_U32(ctx, 31, 0x20A600u);
    ctx->pc = 0x20A5FCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x2205C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSetVolMusic_0x2205c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A600u; }
    }
    if (ctx->pc != 0x20A600u) { return; }
    ctx->pc = 0x20A600u;
    // 0x20a600: 0xc08818e
    ctx->pc = 0x20A600u;
    SET_GPR_U32(ctx, 31, 0x20A608u);
    ctx->pc = 0x20A604u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4294964312)));
    ctx->pc = 0x220638u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSetVolSfx_0x220638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A608u; }
    }
    if (ctx->pc != 0x20A608u) { return; }
    ctx->pc = 0x20A608u;
    // 0x20a608: 0xc0881aa
    ctx->pc = 0x20A608u;
    SET_GPR_U32(ctx, 31, 0x20A610u);
    ctx->pc = 0x20A60Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x2206A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSetStereo_0x2206a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A610u; }
    }
    if (ctx->pc != 0x20A610u) { return; }
    ctx->pc = 0x20A610u;
    // 0x20a610: 0x8e04000c
    ctx->pc = 0x20a610u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x20a614: 0x8e050010
    ctx->pc = 0x20a614u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x20a618: 0xdfbf0020
    ctx->pc = 0x20a618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20a61c: 0xdfb10010
    ctx->pc = 0x20a61cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20a620: 0xdfb00000
    ctx->pc = 0x20a620u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a624: 0x80aa6d0
    ctx->pc = 0x20A624u;
    ctx->pc = 0x20A628u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x2A9B40u;
    pbScreenSetAdjust_0x2a9b40(rdram, ctx, runtime); return;
    ctx->pc = 0x20A62Cu;
}
