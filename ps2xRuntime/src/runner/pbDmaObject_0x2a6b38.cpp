#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbDmaObject
// Address: 0x2a6b38 - 0x2a6bac
void pbDmaObject_0x2a6b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a6b38u;

    // 0x2a6b38: 0x27bdffd0
    ctx->pc = 0x2a6b38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a6b3c: 0xffbf0020
    ctx->pc = 0x2a6b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a6b40: 0xffbe0010
    ctx->pc = 0x2a6b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x2a6b44: 0x3a0f02d
    ctx->pc = 0x2a6b44u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6b48: 0xafc40000
    ctx->pc = 0x2a6b48u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x2a6b4c: 0x3c020037
    ctx->pc = 0x2a6b4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2a6b50: 0x8c422658
    ctx->pc = 0x2a6b50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 9816)));
    // 0x2a6b54: 0x10400009
    ctx->pc = 0x2A6B54u;
    {
        const bool branch_taken_0x2a6b54 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a6b54) {
            ctx->pc = 0x2A6B7Cu;
            goto label_2a6b7c;
        }
    }
    ctx->pc = 0x2A6B5Cu;
    // 0x2a6b5c: 0x8fc40000
    ctx->pc = 0x2a6b5cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a6b60: 0x3c050037
    ctx->pc = 0x2a6b60u;
    SET_GPR_U32(ctx, 5, ((uint32_t)55 << 16));
    // 0x2a6b64: 0x24a51f40
    ctx->pc = 0x2a6b64u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8000));
    // 0x2a6b68: 0x24060001
    ctx->pc = 0x2a6b68u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a6b6c: 0xc0acbee
    ctx->pc = 0x2A6B6Cu;
    SET_GPR_U32(ctx, 31, 0x2A6B74u);
    ctx->pc = 0x2B2FB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVu1Task_0x2b2fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6B74u; }
    }
    if (ctx->pc != 0x2A6B74u) { return; }
    ctx->pc = 0x2A6B74u;
    // 0x2a6b74: 0x10000007
    ctx->pc = 0x2A6B74u;
    {
        const bool branch_taken_0x2a6b74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a6b74) {
            ctx->pc = 0x2A6B94u;
            goto label_2a6b94;
        }
    }
    ctx->pc = 0x2A6B7Cu;
label_2a6b7c:
    // 0x2a6b7c: 0x8fc40000
    ctx->pc = 0x2a6b7cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2a6b80: 0x3c050037
    ctx->pc = 0x2a6b80u;
    SET_GPR_U32(ctx, 5, ((uint32_t)55 << 16));
    // 0x2a6b84: 0x24a51f40
    ctx->pc = 0x2a6b84u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8000));
    // 0x2a6b88: 0x302d
    ctx->pc = 0x2a6b88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6b8c: 0xc0acbee
    ctx->pc = 0x2A6B8Cu;
    SET_GPR_U32(ctx, 31, 0x2A6B94u);
    ctx->pc = 0x2B2FB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVu1Task_0x2b2fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A6B94u; }
    }
    if (ctx->pc != 0x2A6B94u) { return; }
    ctx->pc = 0x2A6B94u;
label_2a6b94:
    // 0x2a6b94: 0x3c0e82d
    ctx->pc = 0x2a6b94u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a6b98: 0xdfbf0020
    ctx->pc = 0x2a6b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a6b9c: 0xdfbe0010
    ctx->pc = 0x2a6b9cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a6ba0: 0x27bd0030
    ctx->pc = 0x2a6ba0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a6ba4: 0x3e00008
    ctx->pc = 0x2A6BA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A6B7Cu: goto label_2a6b7c;
            case 0x2A6B94u: goto label_2a6b94;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A6BACu;
}
