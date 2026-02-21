#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbSetVu1DataI
// Address: 0x2b3610 - 0x2b368c
void pbSetVu1DataI_0x2b3610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b3610u;

    // 0x2b3610: 0x27bdffd0
    ctx->pc = 0x2b3610u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b3614: 0xffbf0020
    ctx->pc = 0x2b3614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b3618: 0xffb10010
    ctx->pc = 0x2b3618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b361c: 0xffb00000
    ctx->pc = 0x2b361cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b3620: 0xc0802d
    ctx->pc = 0x2b3620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3624: 0xe0882d
    ctx->pc = 0x2b3624u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3628: 0xc0accda
    ctx->pc = 0x2B3628u;
    SET_GPR_U32(ctx, 31, 0x2B3630u);
    ctx->pc = 0x2B362Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B3368u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetVu1DataAddr_0x2b3368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3630u; }
    }
    if (ctx->pc != 0x2B3630u) { return; }
    ctx->pc = 0x2B3630u;
    // 0x2b3630: 0x40202d
    ctx->pc = 0x2b3630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3634: 0x54800003
    ctx->pc = 0x2B3634u;
    {
        const bool branch_taken_0x2b3634 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x2b3634) {
            ctx->pc = 0x2B3638u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->pc = 0x2B3644u;
            goto label_2b3644;
        }
    }
    ctx->pc = 0x2B363Cu;
    // 0x2b363c: 0x1000000e
    ctx->pc = 0x2B363Cu;
    {
        const bool branch_taken_0x2b363c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B3640u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        if (branch_taken_0x2b363c) {
            ctx->pc = 0x2B3678u;
            goto label_2b3678;
        }
    }
    ctx->pc = 0x2B3644u;
label_2b3644:
    // 0x2b3644: 0x3c02ffff
    ctx->pc = 0x2b3644u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x2b3648: 0x3442ffff
    ctx->pc = 0x2b3648u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2b364c: 0x54620003
    ctx->pc = 0x2B364Cu;
    {
        const bool branch_taken_0x2b364c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2b364c) {
            ctx->pc = 0x2B3650u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->pc = 0x2B365Cu;
            goto label_2b365c;
        }
    }
    ctx->pc = 0x2B3654u;
    // 0x2b3654: 0x10000008
    ctx->pc = 0x2B3654u;
    {
        const bool branch_taken_0x2b3654 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B3658u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2b3654) {
            ctx->pc = 0x2B3678u;
            goto label_2b3678;
        }
    }
    ctx->pc = 0x2B365Cu;
label_2b365c:
    // 0x2b365c: 0x101880
    ctx->pc = 0x2b365cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x2b3660: 0x621821
    ctx->pc = 0x2b3660u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b3664: 0x3c021100
    ctx->pc = 0x2b3664u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4352 << 16));
    // 0x2b3668: 0x3442c000
    ctx->pc = 0x2b3668u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 49152));
    // 0x2b366c: 0x621821
    ctx->pc = 0x2b366cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b3670: 0xac710000
    ctx->pc = 0x2b3670u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x2b3674: 0x102d
    ctx->pc = 0x2b3674u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b3678:
    // 0x2b3678: 0xdfbf0020
    ctx->pc = 0x2b3678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b367c: 0xdfb10010
    ctx->pc = 0x2b367cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b3680: 0xdfb00000
    ctx->pc = 0x2b3680u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3684: 0x3e00008
    ctx->pc = 0x2B3684u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3688u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B3644u: goto label_2b3644;
            case 0x2B365Cu: goto label_2b365c;
            case 0x2B3678u: goto label_2b3678;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B368Cu;
}
