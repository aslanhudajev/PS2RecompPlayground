#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: eENB__16ScrBlurCtrlClassFPUi
// Address: 0x2165b0 - 0x21663c
void eENB__16ScrBlurCtrlClassFPUi_0x2165b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("eENB__16ScrBlurCtrlClassFPUi");


    ctx->pc = 0x2165b0u;

    // 0x2165b0: 0x27bdffd0
    ctx->pc = 0x2165b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2165b4: 0x7fbf0020
    ctx->pc = 0x2165b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2165b8: 0x7fb10010
    ctx->pc = 0x2165b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2165bc: 0x7fb00000
    ctx->pc = 0x2165bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2165c0: 0x8ca20008
    ctx->pc = 0x2165c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2165c4: 0x70808e28
    ctx->pc = 0x2165c4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2165c8: 0xac820000
    ctx->pc = 0x2165c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2165cc: 0x8c820000
    ctx->pc = 0x2165ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2165d0: 0x14400014
    ctx->pc = 0x2165D0u;
    {
        const bool branch_taken_0x2165d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2165D4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 5), 12));
        if (branch_taken_0x2165d0) {
            ctx->pc = 0x216624u;
            goto label_216624;
        }
    }
    ctx->pc = 0x2165D8u;
    // 0x2165d8: 0x3c0243a0
    ctx->pc = 0x2165d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17312 << 16));
    // 0x2165dc: 0x44826000
    ctx->pc = 0x2165dcu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x2165e0: 0x3c0242e0
    ctx->pc = 0x2165e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17120 << 16));
    // 0x2165e4: 0x44826800
    ctx->pc = 0x2165e4u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 2);
    // 0x2165e8: 0xc06c448
    ctx->pc = 0x2165E8u;
    SET_GPR_U32(ctx, 31, 0x2165F0u);
    ctx->pc = 0x1B1120u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlBlurSetCenter_0x1b1120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2165F0u; }
        else if (ctx->pc != 0x2165F0u) { ctx->pc = 0x2165F0u; }
    }
    if (ctx->pc != 0x2165F0u) { return; }
    ctx->pc = 0x2165F0u;
    // 0x2165f0: 0x3c023f80
    ctx->pc = 0x2165f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x2165f4: 0x44826000
    ctx->pc = 0x2165f4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x2165f8: 0xc06c440
    ctx->pc = 0x2165F8u;
    SET_GPR_U32(ctx, 31, 0x216600u);
    ctx->pc = 0x1B1100u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlBlurSetMag_0x1b1100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216600u; }
        else if (ctx->pc != 0x216600u) { ctx->pc = 0x216600u; }
    }
    if (ctx->pc != 0x216600u) { return; }
    ctx->pc = 0x216600u;
    // 0x216600: 0xc06c444
    ctx->pc = 0x216600u;
    SET_GPR_U32(ctx, 31, 0x216608u);
    ctx->pc = 0x216604u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1B1110u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlBlurSetRot_0x1b1110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216608u; }
        else if (ctx->pc != 0x216608u) { ctx->pc = 0x216608u; }
    }
    if (ctx->pc != 0x216608u) { return; }
    ctx->pc = 0x216608u;
    // 0x216608: 0x8e250014
    ctx->pc = 0x216608u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x21660c: 0x10a00006
    ctx->pc = 0x21660Cu;
    {
        const bool branch_taken_0x21660c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x216610u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21660c) {
            ctx->pc = 0x216628u;
            goto label_216628;
        }
    }
    ctx->pc = 0x216614u;
    // 0x216614: 0x3c020050
    ctx->pc = 0x216614u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x216618: 0xc0868f4
    ctx->pc = 0x216618u;
    SET_GPR_U32(ctx, 31, 0x216620u);
    ctx->pc = 0x21661Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960448));
    ctx->pc = 0x21A3D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        free__14TexBufMgrClassFP10TexSurface_0x21a3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216620u; }
        else if (ctx->pc != 0x216620u) { ctx->pc = 0x216620u; }
    }
    if (ctx->pc != 0x216620u) { return; }
    ctx->pc = 0x216620u;
    // 0x216620: 0xae200014
    ctx->pc = 0x216620u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_216624:
    // 0x216624: 0x72001628
    ctx->pc = 0x216624u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_216628:
    // 0x216628: 0x7bbf0020
    ctx->pc = 0x216628u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21662c: 0x7bb10010
    ctx->pc = 0x21662cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216630: 0x7bb00000
    ctx->pc = 0x216630u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216634: 0x3e00008
    ctx->pc = 0x216634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216638u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x216624u: goto label_216624;
            case 0x216628u: goto label_216628;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21663Cu;
}
