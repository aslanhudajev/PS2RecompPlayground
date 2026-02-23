#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: UrawazaSet__Fv
// Address: 0x1f2bb0 - 0x1f2c38
void UrawazaSet__Fv_0x1f2bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("UrawazaSet__Fv");


    ctx->pc = 0x1f2bb0u;

    // 0x1f2bb0: 0x27bdfff0
    ctx->pc = 0x1f2bb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f2bb4: 0x7fbf0000
    ctx->pc = 0x1f2bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1f2bb8: 0x8f838e2c
    ctx->pc = 0x1f2bb8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294938156)));
    // 0x1f2bbc: 0x28610008
    ctx->pc = 0x1f2bbcu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 8));
    // 0x1f2bc0: 0x1020001a
    ctx->pc = 0x1F2BC0u;
    {
        const bool branch_taken_0x1f2bc0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F2BC4u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1f2bc0) {
            ctx->pc = 0x1F2C2Cu;
            goto label_1f2c2c;
        }
    }
    ctx->pc = 0x1F2BC8u;
    // 0x1f2bc8: 0xc080978
    ctx->pc = 0x1F2BC8u;
    SET_GPR_U32(ctx, 31, 0x1F2BD0u);
    ctx->pc = 0x2025E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_PullTrigger__Fi_0x2025e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2BD0u; }
        else if (ctx->pc != 0x1F2BD0u) { ctx->pc = 0x1F2BD0u; }
    }
    if (ctx->pc != 0x1F2BD0u) { return; }
    ctx->pc = 0x1F2BD0u;
    // 0x1f2bd0: 0x1040000a
    ctx->pc = 0x1F2BD0u;
    {
        const bool branch_taken_0x1f2bd0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F2BD4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1f2bd0) {
            ctx->pc = 0x1F2BFCu;
            goto label_1f2bfc;
        }
    }
    ctx->pc = 0x1F2BD8u;
    // 0x1f2bd8: 0x8f848e2c
    ctx->pc = 0x1f2bd8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294938156)));
    // 0x1f2bdc: 0x27838e30
    ctx->pc = 0x1f2bdcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 28), 4294938160));
    // 0x1f2be0: 0x2405004c
    ctx->pc = 0x1f2be0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 76));
    // 0x1f2be4: 0x641821
    ctx->pc = 0x1f2be4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f2be8: 0xa0650000
    ctx->pc = 0x1f2be8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1f2bec: 0x8f838e2c
    ctx->pc = 0x1f2becu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294938156)));
    // 0x1f2bf0: 0x24630001
    ctx->pc = 0x1f2bf0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f2bf4: 0x1000000d
    ctx->pc = 0x1F2BF4u;
    {
        const bool branch_taken_0x1f2bf4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F2BF8u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938156), GPR_U32(ctx, 3));
        if (branch_taken_0x1f2bf4) {
            ctx->pc = 0x1F2C2Cu;
            goto label_1f2c2c;
        }
    }
    ctx->pc = 0x1F2BFCu;
label_1f2bfc:
    // 0x1f2bfc: 0xc080978
    ctx->pc = 0x1F2BFCu;
    SET_GPR_U32(ctx, 31, 0x1F2C04u);
    ctx->pc = 0x2025E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_PullTrigger__Fi_0x2025e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2C04u; }
        else if (ctx->pc != 0x1F2C04u) { ctx->pc = 0x1F2C04u; }
    }
    if (ctx->pc != 0x1F2C04u) { return; }
    ctx->pc = 0x1F2C04u;
    // 0x1f2c04: 0x10400009
    ctx->pc = 0x1F2C04u;
    {
        const bool branch_taken_0x1f2c04 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f2c04) {
            ctx->pc = 0x1F2C2Cu;
            goto label_1f2c2c;
        }
    }
    ctx->pc = 0x1F2C0Cu;
    // 0x1f2c0c: 0x8f848e2c
    ctx->pc = 0x1f2c0cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294938156)));
    // 0x1f2c10: 0x27838e30
    ctx->pc = 0x1f2c10u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 28), 4294938160));
    // 0x1f2c14: 0x24050052
    ctx->pc = 0x1f2c14u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 82));
    // 0x1f2c18: 0x641821
    ctx->pc = 0x1f2c18u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f2c1c: 0xa0650000
    ctx->pc = 0x1f2c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1f2c20: 0x8f838e2c
    ctx->pc = 0x1f2c20u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294938156)));
    // 0x1f2c24: 0x24630001
    ctx->pc = 0x1f2c24u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f2c28: 0xaf838e2c
    ctx->pc = 0x1f2c28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938156), GPR_U32(ctx, 3));
label_1f2c2c:
    // 0x1f2c2c: 0x7bbf0000
    ctx->pc = 0x1f2c2cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f2c30: 0x3e00008
    ctx->pc = 0x1F2C30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2C34u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F2BFCu: goto label_1f2bfc;
            case 0x1F2C2Cu: goto label_1f2c2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F2C38u;
}
