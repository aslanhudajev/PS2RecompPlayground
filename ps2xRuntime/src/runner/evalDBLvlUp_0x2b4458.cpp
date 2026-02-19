#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: evalDBLvlUp
// Address: 0x2b4458 - 0x2b4524
void evalDBLvlUp_0x2b4458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b4458u;

    // 0x2b4458: 0x27bdfff0
    ctx->pc = 0x2b4458u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b445c: 0xffbf0000
    ctx->pc = 0x2b445cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b4460: 0x3c020037
    ctx->pc = 0x2b4460u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2b4464: 0x8c4320ac
    ctx->pc = 0x2b4464u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
    // 0x2b4468: 0x8c620008
    ctx->pc = 0x2b4468u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2b446c: 0x8c630024
    ctx->pc = 0x2b446cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x2b4470: 0x431021
    ctx->pc = 0x2b4470u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b4474: 0x80420000
    ctx->pc = 0x2b4474u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b4478: 0x14400004
    ctx->pc = 0x2B4478u;
    {
        const bool branch_taken_0x2b4478 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B447Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2b4478) {
            ctx->pc = 0x2B448Cu;
            goto label_2b448c;
        }
    }
    ctx->pc = 0x2B4480u;
    // 0x2b4480: 0xc0ad0c8
    ctx->pc = 0x2B4480u;
    SET_GPR_U32(ctx, 31, 0x2B4488u);
    ctx->pc = 0x2B4320u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalDBLvlChar_0x2b4320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4488u; }
    }
    if (ctx->pc != 0x2B4488u) { return; }
    ctx->pc = 0x2B4488u;
    // 0x2b4488: 0x3c020037
    ctx->pc = 0x2b4488u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2b448c:
    // 0x2b448c: 0x8c4320ac
    ctx->pc = 0x2b448cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
    // 0x2b4490: 0x8c620024
    ctx->pc = 0x2b4490u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x2b4494: 0x24420001
    ctx->pc = 0x2b4494u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b4498: 0xac620024
    ctx->pc = 0x2b4498u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
    // 0x2b449c: 0x8c630020
    ctx->pc = 0x2b449cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2b44a0: 0x2402005a
    ctx->pc = 0x2b44a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 90));
    // 0x2b44a4: 0x1062000f
    ctx->pc = 0x2B44A4u;
    {
        const bool branch_taken_0x2b44a4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B44A8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 91));
        if (branch_taken_0x2b44a4) {
            ctx->pc = 0x2B44E4u;
            goto label_2b44e4;
        }
    }
    ctx->pc = 0x2B44ACu;
    // 0x2b44ac: 0x10400005
    ctx->pc = 0x2B44ACu;
    {
        const bool branch_taken_0x2b44ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B44B0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 57));
        if (branch_taken_0x2b44ac) {
            ctx->pc = 0x2B44C4u;
            goto label_2b44c4;
        }
    }
    ctx->pc = 0x2B44B4u;
    // 0x2b44b4: 0x10620008
    ctx->pc = 0x2B44B4u;
    {
        const bool branch_taken_0x2b44b4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B44B8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2b44b4) {
            ctx->pc = 0x2B44D8u;
            goto label_2b44d8;
        }
    }
    ctx->pc = 0x2B44BCu;
    // 0x2b44bc: 0x10000013
    ctx->pc = 0x2B44BCu;
    {
        const bool branch_taken_0x2b44bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B44C0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
        if (branch_taken_0x2b44bc) {
            ctx->pc = 0x2B450Cu;
            goto label_2b450c;
        }
    }
    ctx->pc = 0x2B44C4u;
label_2b44c4:
    // 0x2b44c4: 0x2402007a
    ctx->pc = 0x2b44c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 122));
    // 0x2b44c8: 0x1062000a
    ctx->pc = 0x2B44C8u;
    {
        const bool branch_taken_0x2b44c8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B44CCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2b44c8) {
            ctx->pc = 0x2B44F4u;
            goto label_2b44f4;
        }
    }
    ctx->pc = 0x2B44D0u;
    // 0x2b44d0: 0x1000000e
    ctx->pc = 0x2B44D0u;
    {
        const bool branch_taken_0x2b44d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B44D4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
        if (branch_taken_0x2b44d0) {
            ctx->pc = 0x2B450Cu;
            goto label_2b450c;
        }
    }
    ctx->pc = 0x2B44D8u;
label_2b44d8:
    // 0x2b44d8: 0x8c4320ac
    ctx->pc = 0x2b44d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
    // 0x2b44dc: 0x24020041
    ctx->pc = 0x2b44dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 65));
    // 0x2b44e0: 0xac620020
    ctx->pc = 0x2b44e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
label_2b44e4:
    // 0x2b44e4: 0x3c020037
    ctx->pc = 0x2b44e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2b44e8: 0x8c4320ac
    ctx->pc = 0x2b44e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
    // 0x2b44ec: 0x24020061
    ctx->pc = 0x2b44ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 97));
    // 0x2b44f0: 0xac620020
    ctx->pc = 0x2b44f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
label_2b44f4:
    // 0x2b44f4: 0x3c020037
    ctx->pc = 0x2b44f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2b44f8: 0x8c4320ac
    ctx->pc = 0x2b44f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
    // 0x2b44fc: 0x24020041
    ctx->pc = 0x2b44fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 65));
    // 0x2b4500: 0xac620020
    ctx->pc = 0x2b4500u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    // 0x2b4504: 0x3c020037
    ctx->pc = 0x2b4504u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2b4508: 0x8c4320ac
    ctx->pc = 0x2b4508u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
label_2b450c:
    // 0x2b450c: 0x8c620020
    ctx->pc = 0x2b450cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2b4510: 0x24420001
    ctx->pc = 0x2b4510u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b4514: 0xac620020
    ctx->pc = 0x2b4514u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    // 0x2b4518: 0xdfbf0000
    ctx->pc = 0x2b4518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b451c: 0x3e00008
    ctx->pc = 0x2B451Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4520u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B448Cu: goto label_2b448c;
            case 0x2B44C4u: goto label_2b44c4;
            case 0x2B44D8u: goto label_2b44d8;
            case 0x2B44E4u: goto label_2b44e4;
            case 0x2B44F4u: goto label_2b44f4;
            case 0x2B450Cu: goto label_2b450c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B4524u;
}
