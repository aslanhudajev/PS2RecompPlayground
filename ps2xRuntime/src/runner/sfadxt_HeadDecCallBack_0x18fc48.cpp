#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfadxt_HeadDecCallBack
// Address: 0x18fc48 - 0x18fcd0
void sfadxt_HeadDecCallBack_0x18fc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfadxt_HeadDecCallBack");


    ctx->pc = 0x18fc48u;

    // 0x18fc48: 0x27bdffc0
    ctx->pc = 0x18fc48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18fc4c: 0xffb00000
    ctx->pc = 0x18fc4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18fc50: 0xffbf0030
    ctx->pc = 0x18fc50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18fc54: 0x80802d
    ctx->pc = 0x18fc54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fc58: 0xffb20020
    ctx->pc = 0x18fc58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x18fc5c: 0x26020a94
    ctx->pc = 0x18fc5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 2708));
    // 0x18fc60: 0xffb10010
    ctx->pc = 0x18fc60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x18fc64: 0x8c4401ac
    ctx->pc = 0x18fc64u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 428)));
    // 0x18fc68: 0x8c4301a8
    ctx->pc = 0x18fc68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 424)));
    // 0x18fc6c: 0x14640012
    ctx->pc = 0x18FC6Cu;
    {
        const bool branch_taken_0x18fc6c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        ctx->pc = 0x18FC70u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 15904)));
        if (branch_taken_0x18fc6c) {
            ctx->pc = 0x18FCB8u;
            goto label_18fcb8;
        }
    }
    ctx->pc = 0x18FC74u;
    // 0x18fc74: 0xc05c872
    ctx->pc = 0x18FC74u;
    SET_GPR_U32(ctx, 31, 0x18FC7Cu);
    ctx->pc = 0x18FC78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1721C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_GetNumSmpl_0x1721c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FC7Cu; }
        else if (ctx->pc != 0x18FC7Cu) { ctx->pc = 0x18FC7Cu; }
    }
    if (ctx->pc != 0x18FC7Cu) { return; }
    ctx->pc = 0x18FC7Cu;
    // 0x18fc7c: 0x40882d
    ctx->pc = 0x18fc7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fc80: 0xc05c880
    ctx->pc = 0x18FC80u;
    SET_GPR_U32(ctx, 31, 0x18FC88u);
    ctx->pc = 0x18FC84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x172200u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_GetSfreq_0x172200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FC88u; }
        else if (ctx->pc != 0x18FC88u) { ctx->pc = 0x18FC88u; }
    }
    if (ctx->pc != 0x18FC88u) { return; }
    ctx->pc = 0x18FC88u;
    // 0x18fc88: 0x1a20000c
    ctx->pc = 0x18FC88u;
    {
        const bool branch_taken_0x18fc88 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x18FC8Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x18fc88) {
            ctx->pc = 0x18FCBCu;
            goto label_18fcbc;
        }
    }
    ctx->pc = 0x18FC90u;
    // 0x18fc90: 0x1840000b
    ctx->pc = 0x18FC90u;
    {
        const bool branch_taken_0x18fc90 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x18FC94u;
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x18fc90) {
            ctx->pc = 0x18FCC0u;
            goto label_18fcc0;
        }
    }
    ctx->pc = 0x18FC98u;
    // 0x18fc98: 0x200202d
    ctx->pc = 0x18fc98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fc9c: 0x220282d
    ctx->pc = 0x18fc9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fca0: 0xdfbf0030
    ctx->pc = 0x18fca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18fca4: 0x40302d
    ctx->pc = 0x18fca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fca8: 0xdfb10010
    ctx->pc = 0x18fca8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18fcac: 0xdfb00000
    ctx->pc = 0x18fcacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18fcb0: 0x8064aca
    ctx->pc = 0x18FCB0u;
    ctx->pc = 0x18FCB4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x192B28u;
    SFCON_WriteTotSmplQue_0x192b28(rdram, ctx, runtime); return;
    ctx->pc = 0x18FCB8u;
label_18fcb8:
    // 0x18fcb8: 0xdfbf0030
    ctx->pc = 0x18fcb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_18fcbc:
    // 0x18fcbc: 0xdfb20020
    ctx->pc = 0x18fcbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18fcc0:
    // 0x18fcc0: 0xdfb10010
    ctx->pc = 0x18fcc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18fcc4: 0xdfb00000
    ctx->pc = 0x18fcc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18fcc8: 0x3e00008
    ctx->pc = 0x18FCC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FCCCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18FCB8u: goto label_18fcb8;
            case 0x18FCBCu: goto label_18fcbc;
            case 0x18FCC0u: goto label_18fcc0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18FCD0u;
}
