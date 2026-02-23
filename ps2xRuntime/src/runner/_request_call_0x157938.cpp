#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _request_call
// Address: 0x157938 - 0x1579c4
void _request_call_0x157938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_request_call");


    ctx->pc = 0x157938u;

    // 0x157938: 0x8c850034
    ctx->pc = 0x157938u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x15793c: 0x8ca60040
    ctx->pc = 0x15793cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x157940: 0x8cc2000c
    ctx->pc = 0x157940u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x157944: 0x54400003
    ctx->pc = 0x157944u;
    {
        const bool branch_taken_0x157944 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x157944) {
            ctx->pc = 0x157948u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 16)));
            ctx->pc = 0x157954u;
            goto label_157954;
        }
    }
    ctx->pc = 0x15794Cu;
    // 0x15794c: 0x10000002
    ctx->pc = 0x15794Cu;
    {
        const bool branch_taken_0x15794c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x157950u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
        if (branch_taken_0x15794c) {
            ctx->pc = 0x157958u;
            goto label_157958;
        }
    }
    ctx->pc = 0x157954u;
label_157954:
    // 0x157954: 0xac45003c
    ctx->pc = 0x157954u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 5));
label_157958:
    // 0x157958: 0xacc50010
    ctx->pc = 0x157958u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 5));
    // 0x15795c: 0x8c820014
    ctx->pc = 0x15795cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x157960: 0x8c83001c
    ctx->pc = 0x157960u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x157964: 0xaca20020
    ctx->pc = 0x157964u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
    // 0x157968: 0xaca3001c
    ctx->pc = 0x157968u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
    // 0x15796c: 0x8c820020
    ctx->pc = 0x15796cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x157970: 0xaca20024
    ctx->pc = 0x157970u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
    // 0x157974: 0x8c830024
    ctx->pc = 0x157974u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x157978: 0xaca3000c
    ctx->pc = 0x157978u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x15797c: 0x8c820028
    ctx->pc = 0x15797cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x157980: 0xaca20028
    ctx->pc = 0x157980u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x157984: 0x8c83002c
    ctx->pc = 0x157984u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x157988: 0xaca3002c
    ctx->pc = 0x157988u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x15798c: 0x8c820030
    ctx->pc = 0x15798cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x157990: 0xaca20030
    ctx->pc = 0x157990u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x157994: 0x8c830010
    ctx->pc = 0x157994u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x157998: 0xaca30034
    ctx->pc = 0x157998u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
    // 0x15799c: 0x8cc40000
    ctx->pc = 0x15799cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1579a0: 0x4800006
    ctx->pc = 0x1579A0u;
    {
        const bool branch_taken_0x1579a0 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x1579a0) {
            ctx->pc = 0x1579BCu;
            goto label_1579bc;
        }
    }
    ctx->pc = 0x1579A8u;
    // 0x1579a8: 0x8cc20004
    ctx->pc = 0x1579a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1579ac: 0x14400003
    ctx->pc = 0x1579ACu;
    {
        const bool branch_taken_0x1579ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1579ac) {
            ctx->pc = 0x1579BCu;
            goto label_1579bc;
        }
    }
    ctx->pc = 0x1579B4u;
    // 0x1579b4: 0x8055606
    ctx->pc = 0x1579B4u;
    ctx->pc = 0x155818u;
    iWakeupThread_0x155818(rdram, ctx, runtime); return;
    ctx->pc = 0x1579BCu;
label_1579bc:
    // 0x1579bc: 0x3e00008
    ctx->pc = 0x1579BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x157954u: goto label_157954;
            case 0x157958u: goto label_157958;
            case 0x1579BCu: goto label_1579bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1579C4u;
}
