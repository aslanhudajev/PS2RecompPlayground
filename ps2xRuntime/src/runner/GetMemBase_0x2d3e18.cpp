#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetMemBase
// Address: 0x2d3e18 - 0x2d3e80
void GetMemBase_0x2d3e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d3e18u;

    // 0x2d3e18: 0x27bdfff0
    ctx->pc = 0x2d3e18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d3e1c: 0xffbf0000
    ctx->pc = 0x2d3e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d3e20: 0x3c02003a
    ctx->pc = 0x2d3e20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d3e24: 0x8c422358
    ctx->pc = 0x2d3e24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 9048)));
    // 0x2d3e28: 0x10400007
    ctx->pc = 0x2D3E28u;
    {
        const bool branch_taken_0x2d3e28 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D3E2Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2d3e28) {
            ctx->pc = 0x2D3E48u;
            goto label_2d3e48;
        }
    }
    ctx->pc = 0x2D3E30u;
    // 0x2d3e30: 0x3c0300e0
    ctx->pc = 0x2d3e30u;
    SET_GPR_U32(ctx, 3, ((uint32_t)224 << 16));
    // 0x2d3e34: 0x3463e000
    ctx->pc = 0x2d3e34u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 57344));
    // 0x2d3e38: 0xac438008
    ctx->pc = 0x2d3e38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294934536), GPR_U32(ctx, 3));
    // 0x2d3e3c: 0x3c04003b
    ctx->pc = 0x2d3e3cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2d3e40: 0xc0b4976
    ctx->pc = 0x2D3E40u;
    SET_GPR_U32(ctx, 31, 0x2D3E48u);
    ctx->pc = 0x2D3E44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 31448));
    ctx->pc = 0x2D25D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorf_0x2d25d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D3E48u; }
    }
    if (ctx->pc != 0x2D3E48u) { return; }
    ctx->pc = 0x2D3E48u;
label_2d3e48:
    // 0x2d3e48: 0x3c05003a
    ctx->pc = 0x2d3e48u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x2d3e4c: 0x3c02003a
    ctx->pc = 0x2d3e4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d3e50: 0x8c42230c
    ctx->pc = 0x2d3e50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8972)));
    // 0x2d3e54: 0x24440003
    ctx->pc = 0x2d3e54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 3));
    // 0x2d3e58: 0x2403ffff
    ctx->pc = 0x2d3e58u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d3e5c: 0x62182a
    ctx->pc = 0x2d3e5cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x2d3e60: 0x83100a
    ctx->pc = 0x2d3e60u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
    // 0x2d3e64: 0x21083
    ctx->pc = 0x2d3e64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2d3e68: 0x21080
    ctx->pc = 0x2d3e68u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d3e6c: 0x8ca32354
    ctx->pc = 0x2d3e6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 9044)));
    // 0x2d3e70: 0x431021
    ctx->pc = 0x2d3e70u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d3e74: 0xdfbf0000
    ctx->pc = 0x2d3e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3e78: 0x3e00008
    ctx->pc = 0x2D3E78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3E7Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D3E48u: goto label_2d3e48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D3E80u;
}
