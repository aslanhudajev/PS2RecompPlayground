#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_IsPrepFrmEnough
// Address: 0x195c70 - 0x195cb4
void sfmpv_IsPrepFrmEnough_0x195c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_IsPrepFrmEnough");


    ctx->pc = 0x195c70u;

    // 0x195c70: 0x27bdffe0
    ctx->pc = 0x195c70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x195c74: 0x80102d
    ctx->pc = 0x195c74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195c78: 0xffbf0010
    ctx->pc = 0x195c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x195c7c: 0xffb00000
    ctx->pc = 0x195c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x195c80: 0x8c5009f0
    ctx->pc = 0x195c80u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 2544)));
    // 0x195c84: 0x8c43002c
    ctx->pc = 0x195c84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x195c88: 0x102827
    ctx->pc = 0x195c88u;
    SET_GPR_U32(ctx, 5, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x195c8c: 0x65800a
    ctx->pc = 0x195c8cu;
    if (GPR_U32(ctx, 5) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
    // 0x195c90: 0x70102a
    ctx->pc = 0x195c90u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 16)));
    // 0x195c94: 0xc06639a
    ctx->pc = 0x195C94u;
    SET_GPR_U32(ctx, 31, 0x195C9Cu);
    ctx->pc = 0x195C98u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
    ctx->pc = 0x198E68u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFMPVF_GetNumFrm_0x198e68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195C9Cu; }
        else if (ctx->pc != 0x195C9Cu) { ctx->pc = 0x195C9Cu; }
    }
    if (ctx->pc != 0x195C9Cu) { return; }
    ctx->pc = 0x195C9Cu;
    // 0x195c9c: 0x50102a
    ctx->pc = 0x195c9cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
    // 0x195ca0: 0xdfbf0010
    ctx->pc = 0x195ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195ca4: 0xdfb00000
    ctx->pc = 0x195ca4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195ca8: 0x38420001
    ctx->pc = 0x195ca8u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x195cac: 0x3e00008
    ctx->pc = 0x195CACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195CB0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x195CB4u;
}
