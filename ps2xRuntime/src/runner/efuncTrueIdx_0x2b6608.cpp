#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: efuncTrueIdx
// Address: 0x2b6608 - 0x2b669c
void efuncTrueIdx_0x2b6608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b6608u;

    // 0x2b6608: 0x27bdffa0
    ctx->pc = 0x2b6608u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2b660c: 0xffbf0050
    ctx->pc = 0x2b660cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2b6610: 0xffb40040
    ctx->pc = 0x2b6610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2b6614: 0xffb30030
    ctx->pc = 0x2b6614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2b6618: 0xffb20020
    ctx->pc = 0x2b6618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b661c: 0xffb10010
    ctx->pc = 0x2b661cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b6620: 0xffb00000
    ctx->pc = 0x2b6620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b6624: 0x80882d
    ctx->pc = 0x2b6624u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6628: 0x8e320000
    ctx->pc = 0x2b6628u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b662c: 0x8e330010
    ctx->pc = 0x2b662cu;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2b6630: 0x24020001
    ctx->pc = 0x2b6630u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6634: 0xae420000
    ctx->pc = 0x2b6634u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2b6638: 0x802d
    ctx->pc = 0x2b6638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b663c: 0x24140050
    ctx->pc = 0x2b663cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 80));
label_2b6640:
    // 0x2b6640: 0x8e22000c
    ctx->pc = 0x2b6640u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2b6644: 0x202102a
    ctx->pc = 0x2b6644u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x2b6648: 0x1040000b
    ctx->pc = 0x2B6648u;
    {
        const bool branch_taken_0x2b6648 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B664Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2b6648) {
            ctx->pc = 0x2B6678u;
            goto label_2b6678;
        }
    }
    ctx->pc = 0x2B6650u;
    // 0x2b6650: 0xc0ad1a2
    ctx->pc = 0x2B6650u;
    SET_GPR_U32(ctx, 31, 0x2B6658u);
    ctx->pc = 0x2B6654u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->pc = 0x2B4688u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalInt_0x2b4688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6658u; }
    }
    if (ctx->pc != 0x2B6658u) { return; }
    ctx->pc = 0x2B6658u;
    // 0x2b6658: 0x5040fff9
    ctx->pc = 0x2B6658u;
    {
        const bool branch_taken_0x2b6658 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2b6658) {
            ctx->pc = 0x2B665Cu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x2B6640u;
            goto label_2b6640;
        }
    }
    ctx->pc = 0x2B6660u;
    // 0x2b6660: 0x8e22000c
    ctx->pc = 0x2b6660u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2b6664: 0x202102a
    ctx->pc = 0x2b6664u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x2b6668: 0x10400003
    ctx->pc = 0x2B6668u;
    {
        const bool branch_taken_0x2b6668 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B666Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x2b6668) {
            ctx->pc = 0x2B6678u;
            goto label_2b6678;
        }
    }
    ctx->pc = 0x2B6670u;
    // 0x2b6670: 0x10000002
    ctx->pc = 0x2B6670u;
    {
        const bool branch_taken_0x2b6670 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B6674u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x2b6670) {
            ctx->pc = 0x2B667Cu;
            goto label_2b667c;
        }
    }
    ctx->pc = 0x2B6678u;
label_2b6678:
    // 0x2b6678: 0xae400010
    ctx->pc = 0x2b6678u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_2b667c:
    // 0x2b667c: 0xdfbf0050
    ctx->pc = 0x2b667cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b6680: 0xdfb40040
    ctx->pc = 0x2b6680u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b6684: 0xdfb30030
    ctx->pc = 0x2b6684u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b6688: 0xdfb20020
    ctx->pc = 0x2b6688u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b668c: 0xdfb10010
    ctx->pc = 0x2b668cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6690: 0xdfb00000
    ctx->pc = 0x2b6690u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6694: 0x3e00008
    ctx->pc = 0x2B6694u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6698u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B6640u: goto label_2b6640;
            case 0x2B6678u: goto label_2b6678;
            case 0x2B667Cu: goto label_2b667c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B669Cu;
}
