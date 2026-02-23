#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_IsVbvEnough
// Address: 0x195cb8 - 0x195d1c
void sfmpv_IsVbvEnough_0x195cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_IsVbvEnough");


    ctx->pc = 0x195cb8u;

    // 0x195cb8: 0x27bdffc0
    ctx->pc = 0x195cb8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x195cbc: 0xffb00000
    ctx->pc = 0x195cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x195cc0: 0x80802d
    ctx->pc = 0x195cc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195cc4: 0xffb20020
    ctx->pc = 0x195cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x195cc8: 0xffb10010
    ctx->pc = 0x195cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x195ccc: 0x24120001
    ctx->pc = 0x195cccu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x195cd0: 0xffbf0030
    ctx->pc = 0x195cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x195cd4: 0xc065a5c
    ctx->pc = 0x195CD4u;
    SET_GPR_U32(ctx, 31, 0x195CDCu);
    ctx->pc = 0x195CD8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 14144));
    ctx->pc = 0x196970u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_GetTermSrc_0x196970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195CDCu; }
        else if (ctx->pc != 0x195CDCu) { ctx->pc = 0x195CDCu; }
    }
    if (ctx->pc != 0x195CDCu) { return; }
    ctx->pc = 0x195CDCu;
    // 0x195cdc: 0x14520003
    ctx->pc = 0x195CDCu;
    {
        const bool branch_taken_0x195cdc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        ctx->pc = 0x195CE0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x195cdc) {
            ctx->pc = 0x195CECu;
            goto label_195cec;
        }
    }
    ctx->pc = 0x195CE4u;
    // 0x195ce4: 0x10000007
    ctx->pc = 0x195CE4u;
    {
        const bool branch_taken_0x195ce4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x195CE8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x195ce4) {
            ctx->pc = 0x195D04u;
            goto label_195d04;
        }
    }
    ctx->pc = 0x195CECu;
label_195cec:
    // 0x195cec: 0xc0648a8
    ctx->pc = 0x195CECu;
    SET_GPR_U32(ctx, 31, 0x195CF4u);
    ctx->pc = 0x195CF0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1922A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_GetWTot_0x1922a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195CF4u; }
        else if (ctx->pc != 0x195CF4u) { ctx->pc = 0x195CF4u; }
    }
    if (ctx->pc != 0x195CF4u) { return; }
    ctx->pc = 0x195CF4u;
    // 0x195cf4: 0x8e230080
    ctx->pc = 0x195cf4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x195cf8: 0x43102a
    ctx->pc = 0x195cf8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x195cfc: 0x2900b
    ctx->pc = 0x195cfcu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 0));
    // 0x195d00: 0x240102d
    ctx->pc = 0x195d00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_195d04:
    // 0x195d04: 0xdfbf0030
    ctx->pc = 0x195d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x195d08: 0xdfb20020
    ctx->pc = 0x195d08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195d0c: 0xdfb10010
    ctx->pc = 0x195d0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195d10: 0xdfb00000
    ctx->pc = 0x195d10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195d14: 0x3e00008
    ctx->pc = 0x195D14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195D18u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x195CECu: goto label_195cec;
            case 0x195D04u: goto label_195d04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x195D1Cu;
}
