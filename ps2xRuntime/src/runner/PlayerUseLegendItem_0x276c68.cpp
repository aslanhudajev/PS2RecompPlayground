#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerUseLegendItem
// Address: 0x276c68 - 0x276ce4
void PlayerUseLegendItem_0x276c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x276c68u;

    // 0x276c68: 0x4810003
    ctx->pc = 0x276C68u;
    {
        const bool branch_taken_0x276c68 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x276C6Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x276c68) {
            ctx->pc = 0x276C78u;
            goto label_276c78;
        }
    }
    ctx->pc = 0x276C70u;
    // 0x276c70: 0x102d
    ctx->pc = 0x276c70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276c74: 0x24040003
    ctx->pc = 0x276c74u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
label_276c78:
    // 0x276c78: 0x40302d
    ctx->pc = 0x276c78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276c7c: 0x86102a
    ctx->pc = 0x276c7cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 6)));
    // 0x276c80: 0x14400016
    ctx->pc = 0x276C80u;
    {
        const bool branch_taken_0x276c80 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x276C84u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 11008));
        if (branch_taken_0x276c80) {
            ctx->pc = 0x276CDCu;
            goto label_276cdc;
        }
    }
    ctx->pc = 0x276C88u;
    // 0x276c88: 0x3c020032
    ctx->pc = 0x276c88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x276c8c: 0x24421bc0
    ctx->pc = 0x276c8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x276c90: 0x70400013
    ctx->pc = 0x276c90u;
    ctx->lo1 = GPR_U32(ctx, 2);
    // 0x276c94: 0x240700b4
    ctx->pc = 0x276c94u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 180));
    // 0x276c98: 0x24020001
    ctx->pc = 0x276c98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x276c9c: 0xa21004
    ctx->pc = 0x276c9cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x276ca0: 0x22827
    ctx->pc = 0x276ca0u;
    SET_GPR_U32(ctx, 5, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x276ca4: 0x0
    ctx->pc = 0x276ca4u;
    // NOP
label_276ca8:
    // 0x276ca8: 0x70001012
    ctx->pc = 0x276ca8u;
    SET_GPR_U32(ctx, 2, ctx->lo1);
    // 0x276cac: 0x400013
    ctx->pc = 0x276cacu;
    ctx->lo = GPR_U32(ctx, 2);
    // 0x276cb0: 0x70c80000
    ctx->pc = 0x276cb0u;
    { int64_t acc = ((int64_t)ctx->hi << 32) | ctx->lo; int64_t prod = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); int64_t result = acc + prod; ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x276cb4: 0x1012
    ctx->pc = 0x276cb4u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x276cb8: 0x8c43000c
    ctx->pc = 0x276cb8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x276cbc: 0x70671800
    ctx->pc = 0x276cbcu;
    { int64_t acc = ((int64_t)ctx->hi << 32) | ctx->lo; int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); int64_t result = acc + prod; ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x276cc0: 0x94620cf4
    ctx->pc = 0x276cc0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 3316)));
    // 0x276cc4: 0x451024
    ctx->pc = 0x276cc4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x276cc8: 0xa4620cf4
    ctx->pc = 0x276cc8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 3316), (uint16_t)GPR_U32(ctx, 2));
    // 0x276ccc: 0x24c60001
    ctx->pc = 0x276cccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x276cd0: 0x86102a
    ctx->pc = 0x276cd0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 6)));
    // 0x276cd4: 0x1040fff4
    ctx->pc = 0x276CD4u;
    {
        const bool branch_taken_0x276cd4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x276cd4) {
            ctx->pc = 0x276CA8u;
            goto label_276ca8;
        }
    }
    ctx->pc = 0x276CDCu;
label_276cdc:
    // 0x276cdc: 0x3e00008
    ctx->pc = 0x276CDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x276C78u: goto label_276c78;
            case 0x276CA8u: goto label_276ca8;
            case 0x276CDCu: goto label_276cdc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x276CE4u;
}
