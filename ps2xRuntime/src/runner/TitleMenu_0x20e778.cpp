#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: TitleMenu
// Address: 0x20e778 - 0x20e7ec
void TitleMenu_0x20e778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x20e778u;

    // 0x20e778: 0x3c020032
    ctx->pc = 0x20e778u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20e77c: 0xac44d4e0
    ctx->pc = 0x20e77cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956256), GPR_U32(ctx, 4));
    // 0x20e780: 0x3c020032
    ctx->pc = 0x20e780u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20e784: 0x8c42f444
    ctx->pc = 0x20e784u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294964292)));
    // 0x20e788: 0x10400007
    ctx->pc = 0x20E788u;
    {
        const bool branch_taken_0x20e788 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20E78Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20e788) {
            ctx->pc = 0x20E7A8u;
            goto label_20e7a8;
        }
    }
    ctx->pc = 0x20E790u;
    // 0x20e790: 0x3c020032
    ctx->pc = 0x20e790u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20e794: 0x8c42d358
    ctx->pc = 0x20e794u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955864)));
    // 0x20e798: 0x14400004
    ctx->pc = 0x20E798u;
    {
        const bool branch_taken_0x20e798 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20E79Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x20e798) {
            ctx->pc = 0x20E7ACu;
            goto label_20e7ac;
        }
    }
    ctx->pc = 0x20E7A0u;
    // 0x20e7a0: 0x3e00008
    ctx->pc = 0x20E7A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E7A4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20E7A8u: goto label_20e7a8;
            case 0x20E7ACu: goto label_20e7ac;
            case 0x20E7D8u: goto label_20e7d8;
            case 0x20E7E4u: goto label_20e7e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20E7A8u;
label_20e7a8:
    // 0x20e7a8: 0x3c020032
    ctx->pc = 0x20e7a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_20e7ac:
    // 0x20e7ac: 0x8c43d358
    ctx->pc = 0x20e7acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294955864)));
    // 0x20e7b0: 0x24020002
    ctx->pc = 0x20e7b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x20e7b4: 0x14620008
    ctx->pc = 0x20E7B4u;
    {
        const bool branch_taken_0x20e7b4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x20E7B8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x20e7b4) {
            ctx->pc = 0x20E7D8u;
            goto label_20e7d8;
        }
    }
    ctx->pc = 0x20E7BCu;
    // 0x20e7bc: 0x3c030032
    ctx->pc = 0x20e7bcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x20e7c0: 0x8c62f448
    ctx->pc = 0x20e7c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294964296)));
    // 0x20e7c4: 0x10400007
    ctx->pc = 0x20E7C4u;
    {
        const bool branch_taken_0x20e7c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20e7c4) {
            ctx->pc = 0x20E7E4u;
            goto label_20e7e4;
        }
    }
    ctx->pc = 0x20E7CCu;
    // 0x20e7cc: 0x24050001
    ctx->pc = 0x20e7ccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e7d0: 0x10000004
    ctx->pc = 0x20E7D0u;
    {
        const bool branch_taken_0x20e7d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20E7D4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294964296), GPR_U32(ctx, 0));
        if (branch_taken_0x20e7d0) {
            ctx->pc = 0x20E7E4u;
            goto label_20e7e4;
        }
    }
    ctx->pc = 0x20E7D8u;
label_20e7d8:
    // 0x20e7d8: 0x8c43d358
    ctx->pc = 0x20e7d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294955864)));
    // 0x20e7dc: 0x24020001
    ctx->pc = 0x20e7dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e7e0: 0x43280b
    ctx->pc = 0x20e7e0u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
label_20e7e4:
    // 0x20e7e4: 0x3e00008
    ctx->pc = 0x20E7E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E7E8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20E7A8u: goto label_20e7a8;
            case 0x20E7ACu: goto label_20e7ac;
            case 0x20E7D8u: goto label_20e7d8;
            case 0x20E7E4u: goto label_20e7e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20E7ECu;
}
