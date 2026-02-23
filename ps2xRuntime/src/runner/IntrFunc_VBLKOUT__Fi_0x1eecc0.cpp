#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: IntrFunc_VBLKOUT__Fi
// Address: 0x1eecc0 - 0x1eecf4
void IntrFunc_VBLKOUT__Fi_0x1eecc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("IntrFunc_VBLKOUT__Fi");


    ctx->pc = 0x1eecc0u;

    // 0x1eecc0: 0x27bdfff0
    ctx->pc = 0x1eecc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1eecc4: 0x7fbf0000
    ctx->pc = 0x1eecc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1eecc8: 0x8f828d34
    ctx->pc = 0x1eecc8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
    // 0x1eeccc: 0x24420001
    ctx->pc = 0x1eecccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1eecd0: 0xc06bdf8
    ctx->pc = 0x1EECD0u;
    SET_GPR_U32(ctx, 31, 0x1EECD8u);
    ctx->pc = 0x1EECD4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937908), GPR_U32(ctx, 2));
    ctx->pc = 0x1AF7E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlVblankOutFunction_0x1af7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EECD8u; }
        else if (ctx->pc != 0x1EECD8u) { ctx->pc = 0x1EECD8u; }
    }
    if (ctx->pc != 0x1EECD8u) { return; }
    ctx->pc = 0x1EECD8u;
    // 0x1eecd8: 0xaf808bec
    ctx->pc = 0x1eecd8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937580), GPR_U32(ctx, 0));
    // 0x1eecdc: 0xf
    ctx->pc = 0x1eecdcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1eece0: 0x42000038
    ctx->pc = 0x1eece0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x1eece4: 0x7bbf0000
    ctx->pc = 0x1eece4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eece8: 0x24020001
    ctx->pc = 0x1eece8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eecec: 0x3e00008
    ctx->pc = 0x1EECECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EECF0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EECF4u;
}
