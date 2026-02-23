#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfaoap_ChkTermFlg
// Address: 0x191278 - 0x1912e0
void sfaoap_ChkTermFlg_0x191278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfaoap_ChkTermFlg");


    ctx->pc = 0x191278u;

    // 0x191278: 0x27bdffd0
    ctx->pc = 0x191278u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19127c: 0x24050007
    ctx->pc = 0x19127cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
    // 0x191280: 0xffb00000
    ctx->pc = 0x191280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x191284: 0x80802d
    ctx->pc = 0x191284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191288: 0xffb10010
    ctx->pc = 0x191288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19128c: 0xffbf0020
    ctx->pc = 0x19128cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x191290: 0xc067cf0
    ctx->pc = 0x191290u;
    SET_GPR_U32(ctx, 31, 0x191298u);
    ctx->pc = 0x191294u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x19F3C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTRN_GetTermFlg_0x19f3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191298u; }
        else if (ctx->pc != 0x191298u) { ctx->pc = 0x191298u; }
    }
    if (ctx->pc != 0x191298u) { return; }
    ctx->pc = 0x191298u;
    // 0x191298: 0x1051000d
    ctx->pc = 0x191298u;
    {
        const bool branch_taken_0x191298 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 17));
        ctx->pc = 0x19129Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x191298) {
            ctx->pc = 0x1912D0u;
            goto label_1912d0;
        }
    }
    ctx->pc = 0x1912A0u;
    // 0x1912a0: 0x8e056044
    ctx->pc = 0x1912a0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 24644)));
    // 0x1912a4: 0xc064a60
    ctx->pc = 0x1912A4u;
    SET_GPR_U32(ctx, 31, 0x1912ACu);
    ctx->pc = 0x1912A8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x192980u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_GetTermFlg_0x192980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1912ACu; }
        else if (ctx->pc != 0x1912ACu) { ctx->pc = 0x1912ACu; }
    }
    if (ctx->pc != 0x1912ACu) { return; }
    ctx->pc = 0x1912ACu;
    // 0x1912ac: 0x14510008
    ctx->pc = 0x1912ACu;
    {
        const bool branch_taken_0x1912ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        ctx->pc = 0x1912B0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1912ac) {
            ctx->pc = 0x1912D0u;
            goto label_1912d0;
        }
    }
    ctx->pc = 0x1912B4u;
    // 0x1912b4: 0x200202d
    ctx->pc = 0x1912b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1912b8: 0xdfb10010
    ctx->pc = 0x1912b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1912bc: 0x24050007
    ctx->pc = 0x1912bcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
    // 0x1912c0: 0xdfb00000
    ctx->pc = 0x1912c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1912c4: 0x24060001
    ctx->pc = 0x1912c4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1912c8: 0x8067cea
    ctx->pc = 0x1912C8u;
    ctx->pc = 0x1912CCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x19F3A8u;
    SFTRN_SetTermFlg_0x19f3a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1912D0u;
label_1912d0:
    // 0x1912d0: 0xdfb10010
    ctx->pc = 0x1912d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1912d4: 0xdfb00000
    ctx->pc = 0x1912d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1912d8: 0x3e00008
    ctx->pc = 0x1912D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1912DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1912D0u: goto label_1912d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1912E0u;
}
