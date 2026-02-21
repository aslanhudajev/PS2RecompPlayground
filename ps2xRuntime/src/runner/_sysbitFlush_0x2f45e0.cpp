#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _sysbitFlush
// Address: 0x2f45e0 - 0x2f4678
void _sysbitFlush_0x2f45e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f45e0u;

    // 0x2f45e0: 0x80302d
    ctx->pc = 0x2f45e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f45e4: 0xdcc20000
    ctx->pc = 0x2f45e4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f45e8: 0x8cc30010
    ctx->pc = 0x2f45e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2f45ec: 0xa21014
    ctx->pc = 0x2f45ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 5) & 0x3F));
    // 0x2f45f0: 0x651823
    ctx->pc = 0x2f45f0u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2f45f4: 0xfcc20000
    ctx->pc = 0x2f45f4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x2f45f8: 0x2c640039
    ctx->pc = 0x2f45f8u;
    SET_GPR_U32(ctx, 4, SLTU32(GPR_U32(ctx, 3), 57));
    // 0x2f45fc: 0x10800019
    ctx->pc = 0x2F45FCu;
    {
        const bool branch_taken_0x2f45fc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F4600u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
        if (branch_taken_0x2f45fc) {
            ctx->pc = 0x2F4664u;
            goto label_2f4664;
        }
    }
    ctx->pc = 0x2F4604u;
    // 0x2f4604: 0x8cc80024
    ctx->pc = 0x2f4604u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x2f4608: 0xa0482d
    ctx->pc = 0x2f4608u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f460c: 0xdcca0018
    ctx->pc = 0x2f460cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 6), 24)));
label_2f4610:
    // 0x2f4610: 0x8cc5000c
    ctx->pc = 0x2f4610u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2f4614: 0x24020038
    ctx->pc = 0x2f4614u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 56));
    // 0x2f4618: 0x8cc70010
    ctx->pc = 0x2f4618u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2f461c: 0x90a30000
    ctx->pc = 0x2f461cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f4620: 0x471023
    ctx->pc = 0x2f4620u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2f4624: 0xdcc40000
    ctx->pc = 0x2f4624u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f4628: 0x431814
    ctx->pc = 0x2f4628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2f462c: 0x24a50001
    ctx->pc = 0x2f462cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x2f4630: 0x832025
    ctx->pc = 0x2f4630u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2f4634: 0xa8102b
    ctx->pc = 0x2f4634u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x2f4638: 0xfcc40000
    ctx->pc = 0x2f4638u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x2f463c: 0x14400003
    ctx->pc = 0x2F463Cu;
    {
        const bool branch_taken_0x2f463c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F4640u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
        if (branch_taken_0x2f463c) {
            ctx->pc = 0x2F464Cu;
            goto label_2f464c;
        }
    }
    ctx->pc = 0x2F4644u;
    // 0x2f4644: 0x8cc20020
    ctx->pc = 0x2f4644u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2f4648: 0xacc2000c
    ctx->pc = 0x2f4648u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_2f464c:
    // 0x2f464c: 0x24e20008
    ctx->pc = 0x2f464cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 8));
    // 0x2f4650: 0x2c430039
    ctx->pc = 0x2f4650u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 2), 57));
    // 0x2f4654: 0x1460ffee
    ctx->pc = 0x2F4654u;
    {
        const bool branch_taken_0x2f4654 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F4658u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x2f4654) {
            ctx->pc = 0x2F4610u;
            goto label_2f4610;
        }
    }
    ctx->pc = 0x2F465Cu;
    // 0x2f465c: 0x10000004
    ctx->pc = 0x2F465Cu;
    {
        const bool branch_taken_0x2f465c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F4660u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 9));
        if (branch_taken_0x2f465c) {
            ctx->pc = 0x2F4670u;
            goto label_2f4670;
        }
    }
    ctx->pc = 0x2F4664u;
label_2f4664:
    // 0x2f4664: 0xdcca0018
    ctx->pc = 0x2f4664u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2f4668: 0xa0482d
    ctx->pc = 0x2f4668u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f466c: 0x149102d
    ctx->pc = 0x2f466cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 9));
label_2f4670:
    // 0x2f4670: 0x3e00008
    ctx->pc = 0x2F4670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4674u;
        WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F4610u: goto label_2f4610;
            case 0x2F464Cu: goto label_2f464c;
            case 0x2F4664u: goto label_2f4664;
            case 0x2F4670u: goto label_2f4670;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F4678u;
}
