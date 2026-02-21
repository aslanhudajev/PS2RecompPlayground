#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayersAverageLevel
// Address: 0x2387e0 - 0x238840
void PlayersAverageLevel_0x2387e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2387e0u;

    // 0x2387e0: 0x3c020032
    ctx->pc = 0x2387e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2387e4: 0x24431bc0
    ctx->pc = 0x2387e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x2387e8: 0x202d
    ctx->pc = 0x2387e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2387ec: 0x302d
    ctx->pc = 0x2387ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2387f0: 0x282d
    ctx->pc = 0x2387f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2387f4: 0x24070001
    ctx->pc = 0x2387f4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
label_2387f8:
    // 0x2387f8: 0x8c6200fc
    ctx->pc = 0x2387f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 252)));
    // 0x2387fc: 0x14470004
    ctx->pc = 0x2387FCu;
    {
        const bool branch_taken_0x2387fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 7));
        ctx->pc = 0x238800u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x2387fc) {
            ctx->pc = 0x238810u;
            goto label_238810;
        }
    }
    ctx->pc = 0x238804u;
    // 0x238804: 0x24840001
    ctx->pc = 0x238804u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x238808: 0x8c622ac0
    ctx->pc = 0x238808u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 10944)));
    // 0x23880c: 0xc23021
    ctx->pc = 0x23880cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_238810:
    // 0x238810: 0x28a20004
    ctx->pc = 0x238810u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 4));
    // 0x238814: 0x1440fff8
    ctx->pc = 0x238814u;
    {
        const bool branch_taken_0x238814 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x238818u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 11008));
        if (branch_taken_0x238814) {
            ctx->pc = 0x2387F8u;
            goto label_2387f8;
        }
    }
    ctx->pc = 0x23881Cu;
    // 0x23881c: 0x54800003
    ctx->pc = 0x23881Cu;
    {
        const bool branch_taken_0x23881c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x23881c) {
            ctx->pc = 0x238820u;
            { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
            ctx->pc = 0x23882Cu;
            goto label_23882c;
        }
    }
    ctx->pc = 0x238824u;
    // 0x238824: 0x3e00008
    ctx->pc = 0x238824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238828u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2387F8u: goto label_2387f8;
            case 0x238810u: goto label_238810;
            case 0x23882Cu: goto label_23882c;
            case 0x238838u: goto label_238838;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23882Cu;
label_23882c:
    // 0x23882c: 0x1012
    ctx->pc = 0x23882cu;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x238830: 0x50800001
    ctx->pc = 0x238830u;
    {
        const bool branch_taken_0x238830 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x238830) {
            ctx->pc = 0x238834u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x238838u;
            goto label_238838;
        }
    }
    ctx->pc = 0x238838u;
label_238838:
    // 0x238838: 0x3e00008
    ctx->pc = 0x238838u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2387F8u: goto label_2387f8;
            case 0x238810u: goto label_238810;
            case 0x23882Cu: goto label_23882c;
            case 0x238838u: goto label_238838;
            default: break;
        }
        return;
    }
    ctx->pc = 0x238840u;
}
