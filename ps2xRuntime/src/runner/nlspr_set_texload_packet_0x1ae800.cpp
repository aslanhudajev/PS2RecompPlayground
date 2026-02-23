#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlspr_set_texload_packet
// Address: 0x1ae800 - 0x1ae894
void nlspr_set_texload_packet_0x1ae800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlspr_set_texload_packet");


    ctx->pc = 0x1ae800u;

    // 0x1ae800: 0x3c030026
    ctx->pc = 0x1ae800u;
    SET_GPR_U32(ctx, 3, ((uint32_t)38 << 16));
    // 0x1ae804: 0x2463f820
    ctx->pc = 0x1ae804u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294965280));
    // 0x1ae808: 0x78680000
    ctx->pc = 0x1ae808u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ae80c: 0x94a70070
    ctx->pc = 0x1ae80cu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 112)));
    // 0x1ae810: 0x24020003
    ctx->pc = 0x1ae810u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ae814: 0x3c030026
    ctx->pc = 0x1ae814u;
    SET_GPR_U32(ctx, 3, ((uint32_t)38 << 16));
    // 0x1ae818: 0x2463f830
    ctx->pc = 0x1ae818u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294965296));
    // 0x1ae81c: 0x78690000
    ctx->pc = 0x1ae81cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ae820: 0x3c030026
    ctx->pc = 0x1ae820u;
    SET_GPR_U32(ctx, 3, ((uint32_t)38 << 16));
    // 0x1ae824: 0x2463f840
    ctx->pc = 0x1ae824u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294965312));
    // 0x1ae828: 0x786a0000
    ctx->pc = 0x1ae828u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ae82c: 0x24a30010
    ctx->pc = 0x1ae82cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 16));
    // 0x1ae830: 0x7c8a0000
    ctx->pc = 0x1ae830u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 10));
    // 0x1ae834: 0xac830004
    ctx->pc = 0x1ae834u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1ae838: 0x7c880010
    ctx->pc = 0x1ae838u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 8));
    // 0x1ae83c: 0xa4870010
    ctx->pc = 0x1ae83cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 7));
    // 0x1ae840: 0x8ca30074
    ctx->pc = 0x1ae840u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 116)));
    // 0x1ae844: 0xac830014
    ctx->pc = 0x1ae844u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x1ae848: 0xa487001c
    ctx->pc = 0x1ae848u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 28), (uint16_t)GPR_U32(ctx, 7));
    // 0x1ae84c: 0x10c0000c
    ctx->pc = 0x1AE84Cu;
    {
        const bool branch_taken_0x1ae84c = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AE850u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
        if (branch_taken_0x1ae84c) {
            ctx->pc = 0x1AE880u;
            goto label_1ae880;
        }
    }
    ctx->pc = 0x1AE854u;
    // 0x1ae854: 0x94a600f0
    ctx->pc = 0x1ae854u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 240)));
    // 0x1ae858: 0x24a30090
    ctx->pc = 0x1ae858u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 144));
    // 0x1ae85c: 0x24420002
    ctx->pc = 0x1ae85cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x1ae860: 0x7c8a0000
    ctx->pc = 0x1ae860u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 10));
    // 0x1ae864: 0xac830004
    ctx->pc = 0x1ae864u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1ae868: 0x7c880010
    ctx->pc = 0x1ae868u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 8));
    // 0x1ae86c: 0xa4860010
    ctx->pc = 0x1ae86cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 6));
    // 0x1ae870: 0x8ca300f4
    ctx->pc = 0x1ae870u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 244)));
    // 0x1ae874: 0xac830014
    ctx->pc = 0x1ae874u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x1ae878: 0xa486001c
    ctx->pc = 0x1ae878u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 28), (uint16_t)GPR_U32(ctx, 6));
    // 0x1ae87c: 0x24840020
    ctx->pc = 0x1ae87cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
label_1ae880:
    // 0x1ae880: 0x3c030026
    ctx->pc = 0x1ae880u;
    SET_GPR_U32(ctx, 3, ((uint32_t)38 << 16));
    // 0x1ae884: 0x7c890000
    ctx->pc = 0x1ae884u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 9));
    // 0x1ae888: 0x2463f440
    ctx->pc = 0x1ae888u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294964288));
    // 0x1ae88c: 0x3e00008
    ctx->pc = 0x1AE88Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE890u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AE880u: goto label_1ae880;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AE894u;
}
