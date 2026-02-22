#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _lastFrame
// Address: 0x11fe38 - 0x11febc
void _lastFrame_0x11fe38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11fe38u;

    // 0x11fe38: 0x27bdffe0
    ctx->pc = 0x11fe38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11fe3c: 0xffb00000
    ctx->pc = 0x11fe3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11fe40: 0x3c100017
    ctx->pc = 0x11fe40u;
    SET_GPR_S32(ctx, 16, ((uint32_t)23 << 16));
    // 0x11fe44: 0xffbf0010
    ctx->pc = 0x11fe44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11fe48: 0x8e02191c
    ctx->pc = 0x11fe48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 6428)));
    // 0x11fe4c: 0x10400006
    ctx->pc = 0x11FE4Cu;
    {
        const bool branch_taken_0x11fe4c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11FE50u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11fe4c) {
            ctx->pc = 0x11FE68u;
            goto label_11fe68;
        }
    }
    ctx->pc = 0x11FE54u;
    // 0x11fe54: 0x3c040017
    ctx->pc = 0x11fe54u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x11fe58: 0xc048006
    ctx->pc = 0x11FE58u;
    SET_GPR_U32(ctx, 31, 0x11FE60u);
    ctx->pc = 0x11FE5Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19640));
    ctx->pc = 0x120018u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x120018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FE60u; }
    }
    if (ctx->pc != 0x11FE60u) { return; }
    ctx->pc = 0x11FE60u;
    // 0x11fe60: 0x10000012
    ctx->pc = 0x11FE60u;
    {
        const bool branch_taken_0x11fe60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11FE64u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 6428), GPR_U32(ctx, 0));
        if (branch_taken_0x11fe60) {
            ctx->pc = 0x11FEACu;
            goto label_11feac;
        }
    }
    ctx->pc = 0x11FE68u;
label_11fe68:
    // 0x11fe68: 0x3c020017
    ctx->pc = 0x11fe68u;
    SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
    // 0x11fe6c: 0x24040003
    ctx->pc = 0x11fe6cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x11fe70: 0x8c4319ac
    ctx->pc = 0x11fe70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 6572)));
    // 0x11fe74: 0x14640007
    ctx->pc = 0x11FE74u;
    {
        const bool branch_taken_0x11fe74 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        ctx->pc = 0x11FE78u;
        SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x11fe74) {
            ctx->pc = 0x11FE94u;
            goto label_11fe94;
        }
    }
    ctx->pc = 0x11FE7Cu;
    // 0x11fe7c: 0x3c020017
    ctx->pc = 0x11fe7cu;
    SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
    // 0x11fe80: 0x24a5ffff
    ctx->pc = 0x11fe80u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x11fe84: 0xc04952c
    ctx->pc = 0x11FE84u;
    SET_GPR_U32(ctx, 31, 0x11FE8Cu);
    ctx->pc = 0x11FE88u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 6148)));
    ctx->pc = 0x1254B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispRefImage_0x1254b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FE8Cu; }
    }
    if (ctx->pc != 0x11FE8Cu) { return; }
    ctx->pc = 0x11FE8Cu;
    // 0x11fe8c: 0x10000007
    ctx->pc = 0x11FE8Cu;
    {
        const bool branch_taken_0x11fe8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11FE90u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 6428), GPR_U32(ctx, 0));
        if (branch_taken_0x11fe8c) {
            ctx->pc = 0x11FEACu;
            goto label_11feac;
        }
    }
    ctx->pc = 0x11FE94u;
label_11fe94:
    // 0x11fe94: 0x3c030017
    ctx->pc = 0x11fe94u;
    SET_GPR_S32(ctx, 3, ((uint32_t)23 << 16));
    // 0x11fe98: 0x24a6ffff
    ctx->pc = 0x11fe98u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x11fe9c: 0x8c441810
    ctx->pc = 0x11fe9cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 6160)));
    // 0x11fea0: 0xc049572
    ctx->pc = 0x11FEA0u;
    SET_GPR_U32(ctx, 31, 0x11FEA8u);
    ctx->pc = 0x11FEA4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 6172)));
    ctx->pc = 0x1255C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispRefImageField_0x1255c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FEA8u; }
    }
    if (ctx->pc != 0x11FEA8u) { return; }
    ctx->pc = 0x11FEA8u;
    // 0x11fea8: 0xae00191c
    ctx->pc = 0x11fea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6428), GPR_U32(ctx, 0));
label_11feac:
    // 0x11feac: 0xdfbf0010
    ctx->pc = 0x11feacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11feb0: 0xdfb00000
    ctx->pc = 0x11feb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11feb4: 0x3e00008
    ctx->pc = 0x11FEB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FEB8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11FE68u: goto label_11fe68;
            case 0x11FE94u: goto label_11fe94;
            case 0x11FEACu: goto label_11feac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11FEBCu;
}
