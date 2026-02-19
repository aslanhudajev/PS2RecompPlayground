#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: NextKey
// Address: 0x20e918 - 0x20e994
void NextKey_0x20e918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x20e918u;

    // 0x20e918: 0x24a50001
    ctx->pc = 0x20e918u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x20e91c: 0xa6102a
    ctx->pc = 0x20e91cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 6)));
    // 0x20e920: 0x14400006
    ctx->pc = 0x20E920u;
    {
        const bool branch_taken_0x20e920 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20E924u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20e920) {
            ctx->pc = 0x20E93Cu;
            goto label_20e93c;
        }
    }
    ctx->pc = 0x20E928u;
label_20e928:
    // 0x20e928: 0x3e00008
    ctx->pc = 0x20E928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E92Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20E928u: goto label_20e928;
            case 0x20E930u: goto label_20e930;
            case 0x20E93Cu: goto label_20e93c;
            case 0x20E950u: goto label_20e950;
            case 0x20E96Cu: goto label_20e96c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20E930u;
label_20e930:
    // 0x20e930: 0x24840004
    ctx->pc = 0x20e930u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
    // 0x20e934: 0x2463ffe0
    ctx->pc = 0x20e934u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x20e938: 0x24c6ffe0
    ctx->pc = 0x20e938u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967264));
label_20e93c:
    // 0x20e93c: 0x28620020
    ctx->pc = 0x20e93cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 32));
    // 0x20e940: 0x0
    ctx->pc = 0x20e940u;
    // NOP
    // 0x20e944: 0x1040fffa
    ctx->pc = 0x20E944u;
    {
        const bool branch_taken_0x20e944 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20e944) {
            ctx->pc = 0x20E930u;
            goto label_20e930;
        }
    }
    ctx->pc = 0x20E94Cu;
    // 0x20e94c: 0x8c870000
    ctx->pc = 0x20e94cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20e950:
    // 0x20e950: 0x24020001
    ctx->pc = 0x20e950u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e954: 0x621004
    ctx->pc = 0x20e954u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x20e958: 0xe21024
    ctx->pc = 0x20e958u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x20e95c: 0x10400003
    ctx->pc = 0x20E95Cu;
    {
        const bool branch_taken_0x20e95c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20E960u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x20e95c) {
            ctx->pc = 0x20E96Cu;
            goto label_20e96c;
        }
    }
    ctx->pc = 0x20E964u;
    // 0x20e964: 0x3e00008
    ctx->pc = 0x20E964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E968u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20E928u: goto label_20e928;
            case 0x20E930u: goto label_20e930;
            case 0x20E93Cu: goto label_20e93c;
            case 0x20E950u: goto label_20e950;
            case 0x20E96Cu: goto label_20e96c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20E96Cu;
label_20e96c:
    // 0x20e96c: 0x66102a
    ctx->pc = 0x20e96cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 6)));
    // 0x20e970: 0x1040ffed
    ctx->pc = 0x20E970u;
    {
        const bool branch_taken_0x20e970 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20E974u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 32));
        if (branch_taken_0x20e970) {
            ctx->pc = 0x20E928u;
            goto label_20e928;
        }
    }
    ctx->pc = 0x20E978u;
    // 0x20e978: 0x1440fff5
    ctx->pc = 0x20E978u;
    {
        const bool branch_taken_0x20e978 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20E97Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x20e978) {
            ctx->pc = 0x20E950u;
            goto label_20e950;
        }
    }
    ctx->pc = 0x20E980u;
    // 0x20e980: 0x24840004
    ctx->pc = 0x20e980u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
    // 0x20e984: 0x8c870000
    ctx->pc = 0x20e984u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20e988: 0x2463ffe0
    ctx->pc = 0x20e988u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x20e98c: 0x1000fff0
    ctx->pc = 0x20E98Cu;
    {
        const bool branch_taken_0x20e98c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20E990u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967264));
        if (branch_taken_0x20e98c) {
            ctx->pc = 0x20E950u;
            goto label_20e950;
        }
    }
    ctx->pc = 0x20E994u;
}
