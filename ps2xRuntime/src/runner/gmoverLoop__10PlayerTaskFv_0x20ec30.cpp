#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: gmoverLoop__10PlayerTaskFv
// Address: 0x20ec30 - 0x20ecc8
void gmoverLoop__10PlayerTaskFv_0x20ec30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("gmoverLoop__10PlayerTaskFv");


    ctx->pc = 0x20ec30u;

    // 0x20ec30: 0x27bdffe0
    ctx->pc = 0x20ec30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20ec34: 0x7fbf0010
    ctx->pc = 0x20ec34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x20ec38: 0x7fb00000
    ctx->pc = 0x20ec38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20ec3c: 0x3c010050
    ctx->pc = 0x20ec3cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x20ec40: 0x8425e504
    ctx->pc = 0x20ec40u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x20ec44: 0x2403000a
    ctx->pc = 0x20ec44u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x20ec48: 0x10a30006
    ctx->pc = 0x20EC48u;
    {
        const bool branch_taken_0x20ec48 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x20EC4Cu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20ec48) {
            ctx->pc = 0x20EC64u;
            goto label_20ec64;
        }
    }
    ctx->pc = 0x20EC50u;
    // 0x20ec50: 0x2403000b
    ctx->pc = 0x20ec50u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11));
    // 0x20ec54: 0x10a30018
    ctx->pc = 0x20EC54u;
    {
        const bool branch_taken_0x20ec54 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x20ec54) {
            ctx->pc = 0x20ECB8u;
            goto label_20ecb8;
        }
    }
    ctx->pc = 0x20EC5Cu;
    // 0x20ec5c: 0x10000014
    ctx->pc = 0x20EC5Cu;
    {
        const bool branch_taken_0x20ec5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20EC60u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 9));
        if (branch_taken_0x20ec5c) {
            ctx->pc = 0x20ECB0u;
            goto label_20ecb0;
        }
    }
    ctx->pc = 0x20EC64u;
label_20ec64:
    // 0x20ec64: 0x8e041cbc
    ctx->pc = 0x20ec64u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 7356)));
    // 0x20ec68: 0x8c830074
    ctx->pc = 0x20ec68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x20ec6c: 0x2463ffff
    ctx->pc = 0x20ec6cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x20ec70: 0x1460000b
    ctx->pc = 0x20EC70u;
    {
        const bool branch_taken_0x20ec70 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x20EC74u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 3));
        if (branch_taken_0x20ec70) {
            ctx->pc = 0x20ECA0u;
            goto label_20eca0;
        }
    }
    ctx->pc = 0x20EC78u;
    // 0x20ec78: 0x8e051cb8
    ctx->pc = 0x20ec78u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 7352)));
    // 0x20ec7c: 0x3c020050
    ctx->pc = 0x20ec7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x20ec80: 0xc074dd8
    ctx->pc = 0x20EC80u;
    SET_GPR_U32(ctx, 31, 0x20EC88u);
    ctx->pc = 0x20EC84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294966912));
    ctx->pc = 0x1D3760u;
    {
        const uint32_t __entryPc = ctx->pc;
        setBookPlGameEnd__14SysCfgMgrClassFi_0x1d3760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EC88u; }
        else if (ctx->pc != 0x20EC88u) { ctx->pc = 0x20EC88u; }
    }
    if (ctx->pc != 0x20EC88u) { return; }
    ctx->pc = 0x20EC88u;
    // 0x20ec88: 0x72002628
    ctx->pc = 0x20ec88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x20ec8c: 0x24050009
    ctx->pc = 0x20ec8cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 9));
    // 0x20ec90: 0xc083d34
    ctx->pc = 0x20EC90u;
    SET_GPR_U32(ctx, 31, 0x20EC98u);
    ctx->pc = 0x20EC94u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x20F4D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        changePlayerMode__10PlayerTaskFii_0x20f4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EC98u; }
        else if (ctx->pc != 0x20EC98u) { ctx->pc = 0x20EC98u; }
    }
    if (ctx->pc != 0x20EC98u) { return; }
    ctx->pc = 0x20EC98u;
    // 0x20ec98: 0x10000008
    ctx->pc = 0x20EC98u;
    {
        const bool branch_taken_0x20ec98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20EC9Cu;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x20ec98) {
            ctx->pc = 0x20ECBCu;
            goto label_20ecbc;
        }
    }
    ctx->pc = 0x20ECA0u;
label_20eca0:
    // 0x20eca0: 0x8e0327fc
    ctx->pc = 0x20eca0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 10236)));
    // 0x20eca4: 0x34630004
    ctx->pc = 0x20eca4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 4));
    // 0x20eca8: 0x10000003
    ctx->pc = 0x20ECA8u;
    {
        const bool branch_taken_0x20eca8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20ECACu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 10236), GPR_U32(ctx, 3));
        if (branch_taken_0x20eca8) {
            ctx->pc = 0x20ECB8u;
            goto label_20ecb8;
        }
    }
    ctx->pc = 0x20ECB0u;
label_20ecb0:
    // 0x20ecb0: 0xc083d34
    ctx->pc = 0x20ECB0u;
    SET_GPR_U32(ctx, 31, 0x20ECB8u);
    ctx->pc = 0x20ECB4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x20F4D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        changePlayerMode__10PlayerTaskFii_0x20f4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20ECB8u; }
        else if (ctx->pc != 0x20ECB8u) { ctx->pc = 0x20ECB8u; }
    }
    if (ctx->pc != 0x20ECB8u) { return; }
    ctx->pc = 0x20ECB8u;
label_20ecb8:
    // 0x20ecb8: 0x7bbf0010
    ctx->pc = 0x20ecb8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20ecbc:
    // 0x20ecbc: 0x7bb00000
    ctx->pc = 0x20ecbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20ecc0: 0x3e00008
    ctx->pc = 0x20ECC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20ECC4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20EC64u: goto label_20ec64;
            case 0x20ECA0u: goto label_20eca0;
            case 0x20ECB0u: goto label_20ecb0;
            case 0x20ECB8u: goto label_20ecb8;
            case 0x20ECBCu: goto label_20ecbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20ECC8u;
}
