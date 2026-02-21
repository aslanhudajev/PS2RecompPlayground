#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: test_wait_vb
// Address: 0x2850b8 - 0x285168
void test_wait_vb_0x2850b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2850b8u;

    // 0x2850b8: 0x27bdffb0
    ctx->pc = 0x2850b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2850bc: 0xffbf0040
    ctx->pc = 0x2850bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2850c0: 0xffb30030
    ctx->pc = 0x2850c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2850c4: 0xffb20020
    ctx->pc = 0x2850c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2850c8: 0xffb10010
    ctx->pc = 0x2850c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2850cc: 0xffb00000
    ctx->pc = 0x2850ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2850d0: 0x282d
    ctx->pc = 0x2850d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2850d4: 0x3c06003a
    ctx->pc = 0x2850d4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)58 << 16));
    // 0x2850d8: 0x8cd022f8
    ctx->pc = 0x2850d8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 6), 8952)));
    // 0x2850dc: 0x2041821
    ctx->pc = 0x2850dcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2850e0: 0x8cc222f8
    ctx->pc = 0x2850e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 8952)));
    // 0x2850e4: 0x43102b
    ctx->pc = 0x2850e4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2850e8: 0x10400019
    ctx->pc = 0x2850E8u;
    {
        const bool branch_taken_0x2850e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2850ECu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x2850e8) {
            ctx->pc = 0x285150u;
            goto label_285150;
        }
    }
    ctx->pc = 0x2850F0u;
    // 0x2850f0: 0x8cc222f8
    ctx->pc = 0x2850f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 8952)));
    // 0x2850f4: 0x50102b
    ctx->pc = 0x2850f4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2850f8: 0x14400016
    ctx->pc = 0x2850F8u;
    {
        const bool branch_taken_0x2850f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2850FCu;
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x2850f8) {
            ctx->pc = 0x285154u;
            goto label_285154;
        }
    }
    ctx->pc = 0x285100u;
    // 0x285100: 0x3c130001
    ctx->pc = 0x285100u;
    SET_GPR_U32(ctx, 19, ((uint32_t)1 << 16));
    // 0x285104: 0x367386a1
    ctx->pc = 0x285104u;
    SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 19), 34465));
    // 0x285108: 0xc0882d
    ctx->pc = 0x285108u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28510c: 0x60902d
    ctx->pc = 0x28510cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285110: 0x24a50001
    ctx->pc = 0x285110u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x285114: 0x0
    ctx->pc = 0x285114u;
    // NOP
label_285118:
    // 0x285118: 0x14b30004
    ctx->pc = 0x285118u;
    {
        const bool branch_taken_0x285118 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 19));
        if (branch_taken_0x285118) {
            ctx->pc = 0x28512Cu;
            goto label_28512c;
        }
    }
    ctx->pc = 0x285120u;
    // 0x285120: 0xc0881f4
    ctx->pc = 0x285120u;
    SET_GPR_U32(ctx, 31, 0x285128u);
    ctx->pc = 0x285124u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2207D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioPoll_0x2207d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285128u; }
    }
    if (ctx->pc != 0x285128u) { return; }
    ctx->pc = 0x285128u;
    // 0x285128: 0x282d
    ctx->pc = 0x285128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28512c:
    // 0x28512c: 0x8e2222f8
    ctx->pc = 0x28512cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8952)));
    // 0x285130: 0x52102b
    ctx->pc = 0x285130u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x285134: 0x10400006
    ctx->pc = 0x285134u;
    {
        const bool branch_taken_0x285134 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x285138u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x285134) {
            ctx->pc = 0x285150u;
            goto label_285150;
        }
    }
    ctx->pc = 0x28513Cu;
    // 0x28513c: 0x8e2222f8
    ctx->pc = 0x28513cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8952)));
    // 0x285140: 0x50102b
    ctx->pc = 0x285140u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x285144: 0x5040fff4
    ctx->pc = 0x285144u;
    {
        const bool branch_taken_0x285144 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x285144) {
            ctx->pc = 0x285148u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x285118u;
            goto label_285118;
        }
    }
    ctx->pc = 0x28514Cu;
    // 0x28514c: 0xdfbf0040
    ctx->pc = 0x28514cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_285150:
    // 0x285150: 0xdfb30030
    ctx->pc = 0x285150u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_285154:
    // 0x285154: 0xdfb20020
    ctx->pc = 0x285154u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285158: 0xdfb10010
    ctx->pc = 0x285158u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28515c: 0xdfb00000
    ctx->pc = 0x28515cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285160: 0x3e00008
    ctx->pc = 0x285160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285164u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x285118u: goto label_285118;
            case 0x28512Cu: goto label_28512c;
            case 0x285150u: goto label_285150;
            case 0x285154u: goto label_285154;
            default: break;
        }
        return;
    }
    ctx->pc = 0x285168u;
}
