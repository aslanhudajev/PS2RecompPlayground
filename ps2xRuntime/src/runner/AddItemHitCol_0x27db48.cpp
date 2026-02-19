#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AddItemHitCol
// Address: 0x27db48 - 0x27dbc0
void AddItemHitCol_0x27db48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27db48u;

    // 0x27db48: 0x27bdfff0
    ctx->pc = 0x27db48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27db4c: 0xffbf0000
    ctx->pc = 0x27db4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27db50: 0x80382d
    ctx->pc = 0x27db50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27db54: 0x10c0000d
    ctx->pc = 0x27DB54u;
    {
        const bool branch_taken_0x27db54 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x27DB58u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 15));
        if (branch_taken_0x27db54) {
            ctx->pc = 0x27DB8Cu;
            goto label_27db8c;
        }
    }
    ctx->pc = 0x27DB5Cu;
    // 0x27db5c: 0x3c030034
    ctx->pc = 0x27db5cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x27db60: 0x24630d98
    ctx->pc = 0x27db60u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3480));
    // 0x27db64: 0x21080
    ctx->pc = 0x27db64u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x27db68: 0x431021
    ctx->pc = 0x27db68u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27db6c: 0x8c440000
    ctx->pc = 0x27db6cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27db70: 0xe0282d
    ctx->pc = 0x27db70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27db74: 0x44806000
    ctx->pc = 0x27db74u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x27db78: 0x302d
    ctx->pc = 0x27db78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27db7c: 0xc09f5fa
    ctx->pc = 0x27DB7Cu;
    SET_GPR_U32(ctx, 31, 0x27DB84u);
    ctx->pc = 0x27DB80u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2176));
    ctx->pc = 0x27D7E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXSub_0x27d7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DB84u; }
    }
    if (ctx->pc != 0x27DB84u) { return; }
    ctx->pc = 0x27DB84u;
    // 0x27db84: 0x1000000c
    ctx->pc = 0x27DB84u;
    {
        const bool branch_taken_0x27db84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27DB88u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x27db84) {
            ctx->pc = 0x27DBB8u;
            goto label_27dbb8;
        }
    }
    ctx->pc = 0x27DB8Cu;
label_27db8c:
    // 0x27db8c: 0x3c030034
    ctx->pc = 0x27db8cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x27db90: 0x24630d80
    ctx->pc = 0x27db90u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3456));
    // 0x27db94: 0x21080
    ctx->pc = 0x27db94u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x27db98: 0x431021
    ctx->pc = 0x27db98u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27db9c: 0x8c440000
    ctx->pc = 0x27db9cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27dba0: 0xe0282d
    ctx->pc = 0x27dba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dba4: 0x44806000
    ctx->pc = 0x27dba4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x27dba8: 0x302d
    ctx->pc = 0x27dba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dbac: 0xc09f5fa
    ctx->pc = 0x27DBACu;
    SET_GPR_U32(ctx, 31, 0x27DBB4u);
    ctx->pc = 0x27DBB0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2176));
    ctx->pc = 0x27D7E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXSub_0x27d7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DBB4u; }
    }
    if (ctx->pc != 0x27DBB4u) { return; }
    ctx->pc = 0x27DBB4u;
    // 0x27dbb4: 0xdfbf0000
    ctx->pc = 0x27dbb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27dbb8:
    // 0x27dbb8: 0x3e00008
    ctx->pc = 0x27DBB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27DBBCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27DB8Cu: goto label_27db8c;
            case 0x27DBB8u: goto label_27dbb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27DBC0u;
}
