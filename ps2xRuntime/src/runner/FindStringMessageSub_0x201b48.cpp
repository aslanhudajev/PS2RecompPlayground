#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: FindStringMessageSub
// Address: 0x201b48 - 0x201bc4
void FindStringMessageSub_0x201b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x201b48u;

    // 0x201b48: 0x27bdffc0
    ctx->pc = 0x201b48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x201b4c: 0xffbf0030
    ctx->pc = 0x201b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x201b50: 0xffb20020
    ctx->pc = 0x201b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x201b54: 0xffb10010
    ctx->pc = 0x201b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x201b58: 0xffb00000
    ctx->pc = 0x201b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x201b5c: 0x80802d
    ctx->pc = 0x201b5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201b60: 0xa0902d
    ctx->pc = 0x201b60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201b64: 0x882d
    ctx->pc = 0x201b64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201b68:
    // 0x201b68: 0x8e02003c
    ctx->pc = 0x201b68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x201b6c: 0x222102a
    ctx->pc = 0x201b6cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x201b70: 0x1040000a
    ctx->pc = 0x201B70u;
    {
        const bool branch_taken_0x201b70 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x201B74u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x201b70) {
            ctx->pc = 0x201B9Cu;
            goto label_201b9c;
        }
    }
    ctx->pc = 0x201B78u;
    // 0x201b78: 0x8e030028
    ctx->pc = 0x201b78u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x201b7c: 0x431021
    ctx->pc = 0x201b7cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201b80: 0x8c420000
    ctx->pc = 0x201b80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x201b84: 0x8e040024
    ctx->pc = 0x201b84u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x201b88: 0x442021
    ctx->pc = 0x201b88u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x201b8c: 0xc0bf194
    ctx->pc = 0x201B8Cu;
    SET_GPR_U32(ctx, 31, 0x201B94u);
    ctx->pc = 0x201B90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FC650u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcasecmp_0x2fc650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201B94u; }
    }
    if (ctx->pc != 0x201B94u) { return; }
    ctx->pc = 0x201B94u;
    // 0x201b94: 0x5440fff4
    ctx->pc = 0x201B94u;
    {
        const bool branch_taken_0x201b94 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x201b94) {
            ctx->pc = 0x201B98u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x201B68u;
            goto label_201b68;
        }
    }
    ctx->pc = 0x201B9Cu;
label_201b9c:
    // 0x201b9c: 0x8e03003c
    ctx->pc = 0x201b9cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x201ba0: 0x223182a
    ctx->pc = 0x201ba0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x201ba4: 0x2402ffff
    ctx->pc = 0x201ba4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x201ba8: 0x223100b
    ctx->pc = 0x201ba8u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 17));
    // 0x201bac: 0xdfbf0030
    ctx->pc = 0x201bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x201bb0: 0xdfb20020
    ctx->pc = 0x201bb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x201bb4: 0xdfb10010
    ctx->pc = 0x201bb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201bb8: 0xdfb00000
    ctx->pc = 0x201bb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201bbc: 0x3e00008
    ctx->pc = 0x201BBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201BC0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x201B68u: goto label_201b68;
            case 0x201B9Cu: goto label_201b9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x201BC4u;
}
