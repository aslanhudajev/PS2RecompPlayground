#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mmm_mat_ovlap_beta__FP19tagNL_PF_GloblParamiPv
// Address: 0x215700 - 0x215744
void mmm_mat_ovlap_beta__FP19tagNL_PF_GloblParamiPv_0x215700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mmm_mat_ovlap_beta__FP19tagNL_PF_GloblParamiPv");


    ctx->pc = 0x215700u;

    // 0x215700: 0x8c870004
    ctx->pc = 0x215700u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x215704: 0x2406fffe
    ctx->pc = 0x215704u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x215708: 0x3c03fff7
    ctx->pc = 0x215708u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65527 << 16));
    // 0x21570c: 0x2405fff0
    ctx->pc = 0x21570cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x215710: 0x3463ffff
    ctx->pc = 0x215710u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x215714: 0xe63024
    ctx->pc = 0x215714u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x215718: 0xac860004
    ctx->pc = 0x215718u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x21571c: 0x8c860034
    ctx->pc = 0x21571cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x215720: 0xc52824
    ctx->pc = 0x215720u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x215724: 0xac850034
    ctx->pc = 0x215724u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 5));
    // 0x215728: 0x8c850034
    ctx->pc = 0x215728u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x21572c: 0x34a50003
    ctx->pc = 0x21572cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3));
    // 0x215730: 0xac850034
    ctx->pc = 0x215730u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 5));
    // 0x215734: 0x8c850038
    ctx->pc = 0x215734u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x215738: 0xa31824
    ctx->pc = 0x215738u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x21573c: 0x3e00008
    ctx->pc = 0x21573Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215740u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x215744u;
}
