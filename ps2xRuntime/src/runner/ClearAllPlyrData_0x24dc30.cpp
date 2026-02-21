#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ClearAllPlyrData
// Address: 0x24dc30 - 0x24dc8c
void ClearAllPlyrData_0x24dc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x24dc30u;

    // 0x24dc30: 0x27bdffd0
    ctx->pc = 0x24dc30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24dc34: 0xffbf0020
    ctx->pc = 0x24dc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x24dc38: 0xffb10010
    ctx->pc = 0x24dc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24dc3c: 0xffb00000
    ctx->pc = 0x24dc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24dc40: 0x802d
    ctx->pc = 0x24dc40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dc44: 0x3c020033
    ctx->pc = 0x24dc44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x24dc48: 0x24514910
    ctx->pc = 0x24dc48u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 18704));
    // 0x24dc4c: 0x101080
    ctx->pc = 0x24dc4cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
label_24dc50:
    // 0x24dc50: 0x511021
    ctx->pc = 0x24dc50u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x24dc54: 0x8c420000
    ctx->pc = 0x24dc54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24dc58: 0x50400004
    ctx->pc = 0x24DC58u;
    {
        const bool branch_taken_0x24dc58 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x24dc58) {
            ctx->pc = 0x24DC5Cu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x24DC6Cu;
            goto label_24dc6c;
        }
    }
    ctx->pc = 0x24DC60u;
    // 0x24dc60: 0xc0936fa
    ctx->pc = 0x24DC60u;
    SET_GPR_U32(ctx, 31, 0x24DC68u);
    ctx->pc = 0x24DC64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x24DBE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ClearPlyrData_0x24dbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DC68u; }
    }
    if (ctx->pc != 0x24DC68u) { return; }
    ctx->pc = 0x24DC68u;
    // 0x24dc68: 0x26100001
    ctx->pc = 0x24dc68u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_24dc6c:
    // 0x24dc6c: 0x2a020004
    ctx->pc = 0x24dc6cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x24dc70: 0x5440fff7
    ctx->pc = 0x24DC70u;
    {
        const bool branch_taken_0x24dc70 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x24dc70) {
            ctx->pc = 0x24DC74u;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
            ctx->pc = 0x24DC50u;
            goto label_24dc50;
        }
    }
    ctx->pc = 0x24DC78u;
    // 0x24dc78: 0xdfbf0020
    ctx->pc = 0x24dc78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24dc7c: 0xdfb10010
    ctx->pc = 0x24dc7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24dc80: 0xdfb00000
    ctx->pc = 0x24dc80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24dc84: 0x3e00008
    ctx->pc = 0x24DC84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24DC88u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24DC50u: goto label_24dc50;
            case 0x24DC6Cu: goto label_24dc6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24DC8Cu;
}
