#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ClearAllPlayerControls
// Address: 0x205b30 - 0x205c00
void ClearAllPlayerControls_0x205b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x205b30u;

    // 0x205b30: 0x27bdff90
    ctx->pc = 0x205b30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x205b34: 0xffbf0060
    ctx->pc = 0x205b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x205b38: 0xffb50050
    ctx->pc = 0x205b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x205b3c: 0xffb40040
    ctx->pc = 0x205b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x205b40: 0xffb30030
    ctx->pc = 0x205b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x205b44: 0xffb20020
    ctx->pc = 0x205b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x205b48: 0xffb10010
    ctx->pc = 0x205b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x205b4c: 0x80882d
    ctx->pc = 0x205b4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205b50: 0x6210003
    ctx->pc = 0x205B50u;
    {
        const bool branch_taken_0x205b50 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x205B54u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x205b50) {
            ctx->pc = 0x205B60u;
            goto label_205b60;
        }
    }
    ctx->pc = 0x205B58u;
    // 0x205b58: 0xc081010
    ctx->pc = 0x205B58u;
    SET_GPR_U32(ctx, 31, 0x205B60u);
    ctx->pc = 0x205B5Cu;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    ctx->pc = 0x204040u;
    {
        const uint32_t __entryPc = ctx->pc;
        ClearControls_0x204040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205B60u; }
    }
    if (ctx->pc != 0x205B60u) { return; }
    ctx->pc = 0x205B60u;
label_205b60:
    // 0x205b60: 0x802d
    ctx->pc = 0x205b60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205b64: 0x3c020031
    ctx->pc = 0x205b64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x205b68: 0x24551b20
    ctx->pc = 0x205b68u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 6944));
    // 0x205b6c: 0x3c020031
    ctx->pc = 0x205b6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x205b70: 0x24541b38
    ctx->pc = 0x205b70u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 6968));
    // 0x205b74: 0x3c020031
    ctx->pc = 0x205b74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x205b78: 0x24531b50
    ctx->pc = 0x205b78u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 6992));
    // 0x205b7c: 0x3c020031
    ctx->pc = 0x205b7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x205b80: 0x24521b68
    ctx->pc = 0x205b80u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 7016));
    // 0x205b84: 0x0
    ctx->pc = 0x205b84u;
    // NOP
label_205b88:
    // 0x205b88: 0x200202d
    ctx->pc = 0x205b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205b8c: 0xc0816b8
    ctx->pc = 0x205B8Cu;
    SET_GPR_U32(ctx, 31, 0x205B94u);
    ctx->pc = 0x205B90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x205AE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ClearPlayerControl_0x205ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205B94u; }
    }
    if (ctx->pc != 0x205B94u) { return; }
    ctx->pc = 0x205B94u;
    // 0x205b94: 0x101880
    ctx->pc = 0x205b94u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x205b98: 0x751021
    ctx->pc = 0x205b98u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x205b9c: 0xac400000
    ctx->pc = 0x205b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x205ba0: 0x741021
    ctx->pc = 0x205ba0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x205ba4: 0xac400000
    ctx->pc = 0x205ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x205ba8: 0x731021
    ctx->pc = 0x205ba8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x205bac: 0xac400000
    ctx->pc = 0x205bacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x205bb0: 0x721821
    ctx->pc = 0x205bb0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x205bb4: 0x26100001
    ctx->pc = 0x205bb4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x205bb8: 0x2a020004
    ctx->pc = 0x205bb8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x205bbc: 0x1440fff2
    ctx->pc = 0x205BBCu;
    {
        const bool branch_taken_0x205bbc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x205BC0u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x205bbc) {
            ctx->pc = 0x205B88u;
            goto label_205b88;
        }
    }
    ctx->pc = 0x205BC4u;
    // 0x205bc4: 0x3c020031
    ctx->pc = 0x205bc4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x205bc8: 0xac401b30
    ctx->pc = 0x205bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6960), GPR_U32(ctx, 0));
    // 0x205bcc: 0x3c020031
    ctx->pc = 0x205bccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x205bd0: 0xac401b48
    ctx->pc = 0x205bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6984), GPR_U32(ctx, 0));
    // 0x205bd4: 0x3c020031
    ctx->pc = 0x205bd4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x205bd8: 0xac401b60
    ctx->pc = 0x205bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 0));
    // 0x205bdc: 0xdfbf0060
    ctx->pc = 0x205bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x205be0: 0xdfb50050
    ctx->pc = 0x205be0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x205be4: 0xdfb40040
    ctx->pc = 0x205be4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x205be8: 0xdfb30030
    ctx->pc = 0x205be8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x205bec: 0xdfb20020
    ctx->pc = 0x205becu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x205bf0: 0xdfb10010
    ctx->pc = 0x205bf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x205bf4: 0xdfb00000
    ctx->pc = 0x205bf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205bf8: 0x3e00008
    ctx->pc = 0x205BF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205BFCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x205B60u: goto label_205b60;
            case 0x205B88u: goto label_205b88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x205C00u;
}
