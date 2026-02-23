#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwl_convPtypeToSFD
// Address: 0x18dc70 - 0x18dcd8
void mwl_convPtypeToSFD_0x18dc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwl_convPtypeToSFD");


    ctx->pc = 0x18dc70u;

    // 0x18dc70: 0x27bdfff0
    ctx->pc = 0x18dc70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18dc74: 0x24020002
    ctx->pc = 0x18dc74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x18dc78: 0x10820014
    ctx->pc = 0x18DC78u;
    {
        const bool branch_taken_0x18dc78 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x18DC7Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x18dc78) {
            ctx->pc = 0x18DCCCu;
            goto label_18dccc;
        }
    }
    ctx->pc = 0x18DC80u;
    // 0x18dc80: 0x2c820003
    ctx->pc = 0x18dc80u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 3));
    // 0x18dc84: 0x10400005
    ctx->pc = 0x18DC84u;
    {
        const bool branch_taken_0x18dc84 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x18DC88u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x18dc84) {
            ctx->pc = 0x18DC9Cu;
            goto label_18dc9c;
        }
    }
    ctx->pc = 0x18DC8Cu;
    // 0x18dc8c: 0x10820010
    ctx->pc = 0x18DC8Cu;
    {
        const bool branch_taken_0x18dc8c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x18DC90u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x18dc8c) {
            ctx->pc = 0x18DCD0u;
            goto label_18dcd0;
        }
    }
    ctx->pc = 0x18DC94u;
    // 0x18dc94: 0x1000000a
    ctx->pc = 0x18DC94u;
    {
        const bool branch_taken_0x18dc94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18DC98u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x18dc94) {
            ctx->pc = 0x18DCC0u;
            goto label_18dcc0;
        }
    }
    ctx->pc = 0x18DC9Cu;
label_18dc9c:
    // 0x18dc9c: 0x24020003
    ctx->pc = 0x18dc9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x18dca0: 0x10820005
    ctx->pc = 0x18DCA0u;
    {
        const bool branch_taken_0x18dca0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x18DCA4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x18dca0) {
            ctx->pc = 0x18DCB8u;
            goto label_18dcb8;
        }
    }
    ctx->pc = 0x18DCA8u;
    // 0x18dca8: 0x10820008
    ctx->pc = 0x18DCA8u;
    {
        const bool branch_taken_0x18dca8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x18DCACu;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x18dca8) {
            ctx->pc = 0x18DCCCu;
            goto label_18dccc;
        }
    }
    ctx->pc = 0x18DCB0u;
    // 0x18dcb0: 0x10000003
    ctx->pc = 0x18DCB0u;
    {
        const bool branch_taken_0x18dcb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x18dcb0) {
            ctx->pc = 0x18DCC0u;
            goto label_18dcc0;
        }
    }
    ctx->pc = 0x18DCB8u;
label_18dcb8:
    // 0x18dcb8: 0x10000004
    ctx->pc = 0x18DCB8u;
    {
        const bool branch_taken_0x18dcb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18DCBCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x18dcb8) {
            ctx->pc = 0x18DCCCu;
            goto label_18dccc;
        }
    }
    ctx->pc = 0x18DCC0u;
label_18dcc0:
    // 0x18dcc0: 0xc063dda
    ctx->pc = 0x18DCC0u;
    SET_GPR_U32(ctx, 31, 0x18DCC8u);
    ctx->pc = 0x18DCC4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294954784));
    ctx->pc = 0x18F768u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSFSVM_Error_0x18f768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DCC8u; }
        else if (ctx->pc != 0x18DCC8u) { ctx->pc = 0x18DCC8u; }
    }
    if (ctx->pc != 0x18DCC8u) { return; }
    ctx->pc = 0x18DCC8u;
    // 0x18dcc8: 0x24020001
    ctx->pc = 0x18dcc8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_18dccc:
    // 0x18dccc: 0xdfbf0000
    ctx->pc = 0x18dcccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18dcd0:
    // 0x18dcd0: 0x3e00008
    ctx->pc = 0x18DCD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DCD4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18DC9Cu: goto label_18dc9c;
            case 0x18DCB8u: goto label_18dcb8;
            case 0x18DCC0u: goto label_18dcc0;
            case 0x18DCCCu: goto label_18dccc;
            case 0x18DCD0u: goto label_18dcd0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18DCD8u;
}
