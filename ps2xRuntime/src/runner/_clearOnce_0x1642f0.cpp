#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _clearOnce
// Address: 0x1642f0 - 0x16433c
void _clearOnce_0x1642f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_clearOnce");


    ctx->pc = 0x1642f0u;

    // 0x1642f0: 0x27bdfff0
    ctx->pc = 0x1642f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1642f4: 0xffbf0000
    ctx->pc = 0x1642f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1642f8: 0xc057fda
    ctx->pc = 0x1642F8u;
    SET_GPR_U32(ctx, 31, 0x164300u);
    ctx->pc = 0x1642FCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x15FF68u;
    {
        const uint32_t __entryPc = ctx->pc;
        _ipuSetMPEG1_0x15ff68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164300u; }
        else if (ctx->pc != 0x164300u) { ctx->pc = 0x164300u; }
    }
    if (ctx->pc != 0x164300u) { return; }
    ctx->pc = 0x164300u;
    // 0x164300: 0x3c040023
    ctx->pc = 0x164300u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x164304: 0x3c060023
    ctx->pc = 0x164304u;
    SET_GPR_U32(ctx, 6, ((uint32_t)35 << 16));
    // 0x164308: 0x8c82a210
    ctx->pc = 0x164308u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294943248)));
    // 0x16430c: 0x24c3a838
    ctx->pc = 0x16430cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 4294944824));
    // 0x164310: 0xdfbf0000
    ctx->pc = 0x164310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164314: 0x24473300
    ctx->pc = 0x164314u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 13056));
    // 0x164318: 0x24441800
    ctx->pc = 0x164318u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 6144));
    // 0x16431c: 0x24451b00
    ctx->pc = 0x16431cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 6912));
    // 0x164320: 0xacc2a838
    ctx->pc = 0x164320u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294944824), GPR_U32(ctx, 2));
    // 0x164324: 0xac600280
    ctx->pc = 0x164324u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 640), GPR_U32(ctx, 0));
    // 0x164328: 0xac640004
    ctx->pc = 0x164328u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x16432c: 0xac650140
    ctx->pc = 0x16432cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 320), GPR_U32(ctx, 5));
    // 0x164330: 0xac670144
    ctx->pc = 0x164330u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 324), GPR_U32(ctx, 7));
    // 0x164334: 0x3e00008
    ctx->pc = 0x164334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164338u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16433Cu;
}
