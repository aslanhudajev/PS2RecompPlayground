#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: set_logo
// Address: 0x282220 - 0x282258
void set_logo_0x282220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x282220u;

    // 0x282220: 0x27bdfff0
    ctx->pc = 0x282220u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x282224: 0xffbf0000
    ctx->pc = 0x282224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x282228: 0x2406fed0
    ctx->pc = 0x282228u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294966992));
    // 0x28222c: 0x2402ff14
    ctx->pc = 0x28222cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967060));
    // 0x282230: 0x44300a
    ctx->pc = 0x282230u;
    if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 2));
    // 0x282234: 0x3c04003b
    ctx->pc = 0x282234u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x282238: 0x2484c320
    ctx->pc = 0x282238u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294951712));
    // 0x28223c: 0xc0b0c08
    ctx->pc = 0x28223Cu;
    SET_GPR_U32(ctx, 31, 0x282244u);
    ctx->pc = 0x282240u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 368));
    ctx->pc = 0x2C3020u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewBlit_0x2c3020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282244u; }
    }
    if (ctx->pc != 0x282244u) { return; }
    ctx->pc = 0x282244u;
    // 0x282244: 0x3c030035
    ctx->pc = 0x282244u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x282248: 0xac629bc4
    ctx->pc = 0x282248u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941636), GPR_U32(ctx, 2));
    // 0x28224c: 0xdfbf0000
    ctx->pc = 0x28224cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282250: 0x3e00008
    ctx->pc = 0x282250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282254u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x282258u;
}
