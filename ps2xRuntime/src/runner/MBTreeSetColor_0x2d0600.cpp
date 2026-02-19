#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBTreeSetColor
// Address: 0x2d0600 - 0x2d06b4
void MBTreeSetColor_0x2d0600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d0600u;

label_2d0600:
    // 0x2d0600: 0x27bdffb0
    ctx->pc = 0x2d0600u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d0604: 0xffbf0040
    ctx->pc = 0x2d0604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d0608: 0xffb30030
    ctx->pc = 0x2d0608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2d060c: 0xffb20020
    ctx->pc = 0x2d060cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d0610: 0xffb10010
    ctx->pc = 0x2d0610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d0614: 0xffb00000
    ctx->pc = 0x2d0614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d0618: 0x80802d
    ctx->pc = 0x2d0618u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d061c: 0xa0902d
    ctx->pc = 0x2d061cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0620: 0xc0882d
    ctx->pc = 0x2d0620u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0624: 0x1000000b
    ctx->pc = 0x2D0624u;
    {
        const bool branch_taken_0x2d0624 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D0628u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2d0624) {
            ctx->pc = 0x2D0654u;
            goto label_2d0654;
        }
    }
    ctx->pc = 0x2D062Cu;
    // 0x2d062c: 0x0
    ctx->pc = 0x2d062cu;
    // NOP
label_2d0630:
    // 0x2d0630: 0x1200001a
    ctx->pc = 0x2D0630u;
    {
        const bool branch_taken_0x2d0630 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D0634u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x2d0630) {
            ctx->pc = 0x2D069Cu;
            goto label_2d069c;
        }
    }
    ctx->pc = 0x2D0638u;
    // 0x2d0638: 0x8e10007c
    ctx->pc = 0x2d0638u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x2d063c: 0x52000018
    ctx->pc = 0x2D063Cu;
    {
        const bool branch_taken_0x2d063c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d063c) {
            ctx->pc = 0x2D0640u;
            SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->pc = 0x2D06A0u;
            goto label_2d06a0;
        }
    }
    ctx->pc = 0x2D0644u;
    // 0x2d0644: 0x8e020060
    ctx->pc = 0x2d0644u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2d0648: 0x30420010
    ctx->pc = 0x2d0648u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x2d064c: 0x1440fff8
    ctx->pc = 0x2D064Cu;
    {
        const bool branch_taken_0x2d064c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d064c) {
            ctx->pc = 0x2D0630u;
            goto label_2d0630;
        }
    }
    ctx->pc = 0x2D0654u;
label_2d0654:
    // 0x2d0654: 0x52000011
    ctx->pc = 0x2D0654u;
    {
        const bool branch_taken_0x2d0654 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d0654) {
            ctx->pc = 0x2D0658u;
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->pc = 0x2D069Cu;
            goto label_2d069c;
        }
    }
    ctx->pc = 0x2D065Cu;
    // 0x2d065c: 0xae120064
    ctx->pc = 0x2d065cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 18));
    // 0x2d0660: 0x8e020060
    ctx->pc = 0x2d0660u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2d0664: 0x34420100
    ctx->pc = 0x2d0664u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 256));
    // 0x2d0668: 0x1220000a
    ctx->pc = 0x2D0668u;
    {
        const bool branch_taken_0x2d0668 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D066Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        if (branch_taken_0x2d0668) {
            ctx->pc = 0x2D0694u;
            goto label_2d0694;
        }
    }
    ctx->pc = 0x2D0670u;
    // 0x2d0670: 0x8e040078
    ctx->pc = 0x2d0670u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x2d0674: 0x10800007
    ctx->pc = 0x2D0674u;
    {
        const bool branch_taken_0x2d0674 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d0674) {
            ctx->pc = 0x2D0694u;
            goto label_2d0694;
        }
    }
    ctx->pc = 0x2D067Cu;
    // 0x2d067c: 0x8c820060
    ctx->pc = 0x2d067cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2d0680: 0x30420010
    ctx->pc = 0x2d0680u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x2d0684: 0x14400003
    ctx->pc = 0x2D0684u;
    {
        const bool branch_taken_0x2d0684 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D0688u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d0684) {
            ctx->pc = 0x2D0694u;
            goto label_2d0694;
        }
    }
    ctx->pc = 0x2D068Cu;
    // 0x2d068c: 0xc0b4180
    ctx->pc = 0x2D068Cu;
    SET_GPR_U32(ctx, 31, 0x2D0694u);
    ctx->pc = 0x2D0690u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2D0600u;
    goto label_2d0600;
    ctx->pc = 0x2D0694u;
label_2d0694:
    // 0x2d0694: 0x1233ffe6
    ctx->pc = 0x2D0694u;
    {
        const bool branch_taken_0x2d0694 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 19));
        ctx->pc = 0x2D0698u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x2d0694) {
            ctx->pc = 0x2D0630u;
            goto label_2d0630;
        }
    }
    ctx->pc = 0x2D069Cu;
label_2d069c:
    // 0x2d069c: 0xdfb30030
    ctx->pc = 0x2d069cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2d06a0:
    // 0x2d06a0: 0xdfb20020
    ctx->pc = 0x2d06a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d06a4: 0xdfb10010
    ctx->pc = 0x2d06a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d06a8: 0xdfb00000
    ctx->pc = 0x2d06a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d06ac: 0x3e00008
    ctx->pc = 0x2D06ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D06B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D0600u: goto label_2d0600;
            case 0x2D0630u: goto label_2d0630;
            case 0x2D0654u: goto label_2d0654;
            case 0x2D0694u: goto label_2d0694;
            case 0x2D069Cu: goto label_2d069c;
            case 0x2D06A0u: goto label_2d06a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D06B4u;
}
