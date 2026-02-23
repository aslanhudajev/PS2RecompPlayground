#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: add_fdes
// Address: 0x14cb30 - 0x14cbb8
void add_fdes_0x14cb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("add_fdes");


    ctx->pc = 0x14cb30u;

    // 0x14cb30: 0x80402d
    ctx->pc = 0x14cb30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cb34: 0xa0582d
    ctx->pc = 0x14cb34u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cb38: 0x8d020000
    ctx->pc = 0x14cb38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x14cb3c: 0x8cc90000
    ctx->pc = 0x14cb3cu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14cb40: 0x1040001a
    ctx->pc = 0x14CB40u;
    {
        const bool branch_taken_0x14cb40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14CB44u;
        SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 7), 0)));
        if (branch_taken_0x14cb40) {
            ctx->pc = 0x14CBACu;
            goto label_14cbac;
        }
    }
    ctx->pc = 0x14CB48u;
label_14cb48:
    // 0x14cb48: 0x8d020004
    ctx->pc = 0x14cb48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x14cb4c: 0x50400013
    ctx->pc = 0x14CB4Cu;
    {
        const bool branch_taken_0x14cb4c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x14cb4c) {
            ctx->pc = 0x14CB50u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->pc = 0x14CB9Cu;
            goto label_14cb9c;
        }
    }
    ctx->pc = 0x14CB54u;
    // 0x14cb54: 0x8d020008
    ctx->pc = 0x14cb54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x14cb58: 0x50400010
    ctx->pc = 0x14CB58u;
    {
        const bool branch_taken_0x14cb58 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x14cb58) {
            ctx->pc = 0x14CB5Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->pc = 0x14CB9Cu;
            goto label_14cb9c;
        }
    }
    ctx->pc = 0x14CB60u;
    // 0x14cb60: 0x8d640004
    ctx->pc = 0x14cb60u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x14cb64: 0x8d630000
    ctx->pc = 0x14cb64u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x14cb68: 0x41080
    ctx->pc = 0x14cb68u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x14cb6c: 0x431021
    ctx->pc = 0x14cb6cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14cb70: 0x24840001
    ctx->pc = 0x14cb70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x14cb74: 0xac480000
    ctx->pc = 0x14cb74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x14cb78: 0xad640004
    ctx->pc = 0x14cb78u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 4));
    // 0x14cb7c: 0x8d030008
    ctx->pc = 0x14cb7cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x14cb80: 0x8d04000c
    ctx->pc = 0x14cb80u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x14cb84: 0x69282b
    ctx->pc = 0x14cb84u;
    SET_GPR_U32(ctx, 5, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x14cb88: 0x642021
    ctx->pc = 0x14cb88u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14cb8c: 0x65480b
    ctx->pc = 0x14cb8cu;
    if (GPR_U32(ctx, 5) != 0) SET_GPR_U32(ctx, 9, GPR_U32(ctx, 3));
    // 0x14cb90: 0x144102b
    ctx->pc = 0x14cb90u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x14cb94: 0x82500b
    ctx->pc = 0x14cb94u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 10, GPR_U32(ctx, 4));
    // 0x14cb98: 0x8d020000
    ctx->pc = 0x14cb98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_14cb9c:
    // 0x14cb9c: 0x1021021
    ctx->pc = 0x14cb9cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x14cba0: 0x8c430004
    ctx->pc = 0x14cba0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14cba4: 0x1460ffe8
    ctx->pc = 0x14CBA4u;
    {
        const bool branch_taken_0x14cba4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x14CBA8u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4));
        if (branch_taken_0x14cba4) {
            ctx->pc = 0x14CB48u;
            goto label_14cb48;
        }
    }
    ctx->pc = 0x14CBACu;
label_14cbac:
    // 0x14cbac: 0xacc90000
    ctx->pc = 0x14cbacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
    // 0x14cbb0: 0x3e00008
    ctx->pc = 0x14CBB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CBB4u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 10));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14CB48u: goto label_14cb48;
            case 0x14CB9Cu: goto label_14cb9c;
            case 0x14CBACu: goto label_14cbac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14CBB8u;
}
