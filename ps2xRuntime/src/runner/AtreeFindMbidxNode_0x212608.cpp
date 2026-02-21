#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AtreeFindMbidxNode
// Address: 0x212608 - 0x21267c
void AtreeFindMbidxNode_0x212608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x212608u;

label_212608:
    // 0x212608: 0x27bdffd0
    ctx->pc = 0x212608u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21260c: 0xffbf0020
    ctx->pc = 0x21260cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x212610: 0xffb10010
    ctx->pc = 0x212610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x212614: 0xffb00000
    ctx->pc = 0x212614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x212618: 0x80802d
    ctx->pc = 0x212618u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21261c: 0x1000000f
    ctx->pc = 0x21261Cu;
    {
        const bool branch_taken_0x21261c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x212620u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21261c) {
            ctx->pc = 0x21265Cu;
            goto label_21265c;
        }
    }
    ctx->pc = 0x212624u;
    // 0x212624: 0x0
    ctx->pc = 0x212624u;
    // NOP
label_212628:
    // 0x212628: 0x50400005
    ctx->pc = 0x212628u;
    {
        const bool branch_taken_0x212628 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x212628) {
            ctx->pc = 0x21262Cu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->pc = 0x212640u;
            goto label_212640;
        }
    }
    ctx->pc = 0x212630u;
    // 0x212630: 0x8c42006c
    ctx->pc = 0x212630u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x212634: 0x1051000c
    ctx->pc = 0x212634u;
    {
        const bool branch_taken_0x212634 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 17));
        ctx->pc = 0x212638u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x212634) {
            ctx->pc = 0x212668u;
            goto label_212668;
        }
    }
    ctx->pc = 0x21263Cu;
    // 0x21263c: 0x8e040008
    ctx->pc = 0x21263cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_212640:
    // 0x212640: 0x50800006
    ctx->pc = 0x212640u;
    {
        const bool branch_taken_0x212640 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x212640) {
            ctx->pc = 0x212644u;
            SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->pc = 0x21265Cu;
            goto label_21265c;
        }
    }
    ctx->pc = 0x212648u;
    // 0x212648: 0xc084982
    ctx->pc = 0x212648u;
    SET_GPR_U32(ctx, 31, 0x212650u);
    ctx->pc = 0x21264Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x212608u;
    goto label_212608;
    ctx->pc = 0x212650u;
label_212650:
    // 0x212650: 0x14400006
    ctx->pc = 0x212650u;
    {
        const bool branch_taken_0x212650 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x212654u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x212650) {
            ctx->pc = 0x21266Cu;
            goto label_21266c;
        }
    }
    ctx->pc = 0x212658u;
    // 0x212658: 0x8e10000c
    ctx->pc = 0x212658u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_21265c:
    // 0x21265c: 0x5600fff2
    ctx->pc = 0x21265Cu;
    {
        const bool branch_taken_0x21265c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x21265c) {
            ctx->pc = 0x212660u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x212628u;
            goto label_212628;
        }
    }
    ctx->pc = 0x212664u;
    // 0x212664: 0x102d
    ctx->pc = 0x212664u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_212668:
    // 0x212668: 0xdfbf0020
    ctx->pc = 0x212668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_21266c:
    // 0x21266c: 0xdfb10010
    ctx->pc = 0x21266cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212670: 0xdfb00000
    ctx->pc = 0x212670u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212674: 0x3e00008
    ctx->pc = 0x212674u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212678u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x212608u: goto label_212608;
            case 0x212628u: goto label_212628;
            case 0x212640u: goto label_212640;
            case 0x212650u: goto label_212650;
            case 0x21265Cu: goto label_21265c;
            case 0x212668u: goto label_212668;
            case 0x21266Cu: goto label_21266c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21267Cu;
}
