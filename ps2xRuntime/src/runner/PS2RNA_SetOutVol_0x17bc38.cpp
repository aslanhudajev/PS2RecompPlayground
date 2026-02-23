#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PS2RNA_SetOutVol
// Address: 0x17bc38 - 0x17bc58
void PS2RNA_SetOutVol_0x17bc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PS2RNA_SetOutVol");


    ctx->pc = 0x17bc38u;

    // 0x17bc38: 0x28a30001
    ctx->pc = 0x17bc38u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 1));
    // 0x17bc3c: 0x2402fc18
    ctx->pc = 0x17bc3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294966296));
    // 0x17bc40: 0x3280a
    ctx->pc = 0x17bc40u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 0));
    // 0x17bc44: 0x2406fc19
    ctx->pc = 0x17bc44u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294966297));
    // 0x17bc48: 0x45102a
    ctx->pc = 0x17bc48u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 5)));
    // 0x17bc4c: 0xc2280a
    ctx->pc = 0x17bc4cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 6));
    // 0x17bc50: 0x3e00008
    ctx->pc = 0x17BC50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BC54u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17BC58u;
}
