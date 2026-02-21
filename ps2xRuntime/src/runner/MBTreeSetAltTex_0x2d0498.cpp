#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBTreeSetAltTex
// Address: 0x2d0498 - 0x2d0554
void MBTreeSetAltTex_0x2d0498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d0498u;

label_2d0498:
    // 0x2d0498: 0x27bdffa0
    ctx->pc = 0x2d0498u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d049c: 0xffbf0050
    ctx->pc = 0x2d049cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2d04a0: 0xffb40040
    ctx->pc = 0x2d04a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2d04a4: 0xffb30030
    ctx->pc = 0x2d04a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2d04a8: 0xffb20020
    ctx->pc = 0x2d04a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2d04ac: 0xffb10010
    ctx->pc = 0x2d04acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d04b0: 0xffb00000
    ctx->pc = 0x2d04b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d04b4: 0x80802d
    ctx->pc = 0x2d04b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d04b8: 0xa0982d
    ctx->pc = 0x2d04b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d04bc: 0xc0902d
    ctx->pc = 0x2d04bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d04c0: 0xe0882d
    ctx->pc = 0x2d04c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d04c4: 0x1000000b
    ctx->pc = 0x2D04C4u;
    {
        const bool branch_taken_0x2d04c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D04C8u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2d04c4) {
            ctx->pc = 0x2D04F4u;
            goto label_2d04f4;
        }
    }
    ctx->pc = 0x2D04CCu;
    // 0x2d04cc: 0x0
    ctx->pc = 0x2d04ccu;
    // NOP
label_2d04d0:
    // 0x2d04d0: 0x12000019
    ctx->pc = 0x2D04D0u;
    {
        const bool branch_taken_0x2d04d0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D04D4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x2d04d0) {
            ctx->pc = 0x2D0538u;
            goto label_2d0538;
        }
    }
    ctx->pc = 0x2D04D8u;
    // 0x2d04d8: 0x8e10007c
    ctx->pc = 0x2d04d8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x2d04dc: 0x52000017
    ctx->pc = 0x2D04DCu;
    {
        const bool branch_taken_0x2d04dc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d04dc) {
            ctx->pc = 0x2D04E0u;
            SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->pc = 0x2D053Cu;
            goto label_2d053c;
        }
    }
    ctx->pc = 0x2D04E4u;
    // 0x2d04e4: 0x8e020060
    ctx->pc = 0x2d04e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2d04e8: 0x30420010
    ctx->pc = 0x2d04e8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x2d04ec: 0x1440fff8
    ctx->pc = 0x2D04ECu;
    {
        const bool branch_taken_0x2d04ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d04ec) {
            ctx->pc = 0x2D04D0u;
            goto label_2d04d0;
        }
    }
    ctx->pc = 0x2D04F4u;
label_2d04f4:
    // 0x2d04f4: 0x52000010
    ctx->pc = 0x2D04F4u;
    {
        const bool branch_taken_0x2d04f4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d04f4) {
            ctx->pc = 0x2D04F8u;
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->pc = 0x2D0538u;
            goto label_2d0538;
        }
    }
    ctx->pc = 0x2D04FCu;
    // 0x2d04fc: 0xa613005c
    ctx->pc = 0x2d04fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 92), (uint16_t)GPR_U32(ctx, 19));
    // 0x2d0500: 0x1220000b
    ctx->pc = 0x2D0500u;
    {
        const bool branch_taken_0x2d0500 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D0504u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 18));
        if (branch_taken_0x2d0500) {
            ctx->pc = 0x2D0530u;
            goto label_2d0530;
        }
    }
    ctx->pc = 0x2D0508u;
    // 0x2d0508: 0x8e040078
    ctx->pc = 0x2d0508u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x2d050c: 0x10800008
    ctx->pc = 0x2D050Cu;
    {
        const bool branch_taken_0x2d050c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x2d050c) {
            ctx->pc = 0x2D0530u;
            goto label_2d0530;
        }
    }
    ctx->pc = 0x2D0514u;
    // 0x2d0514: 0x8c820060
    ctx->pc = 0x2d0514u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2d0518: 0x30420010
    ctx->pc = 0x2d0518u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x2d051c: 0x14400004
    ctx->pc = 0x2D051Cu;
    {
        const bool branch_taken_0x2d051c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D0520u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d051c) {
            ctx->pc = 0x2D0530u;
            goto label_2d0530;
        }
    }
    ctx->pc = 0x2D0524u;
    // 0x2d0524: 0x240302d
    ctx->pc = 0x2d0524u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0528: 0xc0b4126
    ctx->pc = 0x2D0528u;
    SET_GPR_U32(ctx, 31, 0x2D0530u);
    ctx->pc = 0x2D052Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2D0498u;
    goto label_2d0498;
    ctx->pc = 0x2D0530u;
label_2d0530:
    // 0x2d0530: 0x1234ffe7
    ctx->pc = 0x2D0530u;
    {
        const bool branch_taken_0x2d0530 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 20));
        ctx->pc = 0x2D0534u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x2d0530) {
            ctx->pc = 0x2D04D0u;
            goto label_2d04d0;
        }
    }
    ctx->pc = 0x2D0538u;
label_2d0538:
    // 0x2d0538: 0xdfb40040
    ctx->pc = 0x2d0538u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2d053c:
    // 0x2d053c: 0xdfb30030
    ctx->pc = 0x2d053cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d0540: 0xdfb20020
    ctx->pc = 0x2d0540u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d0544: 0xdfb10010
    ctx->pc = 0x2d0544u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0548: 0xdfb00000
    ctx->pc = 0x2d0548u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d054c: 0x3e00008
    ctx->pc = 0x2D054Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0550u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D0498u: goto label_2d0498;
            case 0x2D04D0u: goto label_2d04d0;
            case 0x2D04F4u: goto label_2d04f4;
            case 0x2D0530u: goto label_2d0530;
            case 0x2D0538u: goto label_2d0538;
            case 0x2D053Cu: goto label_2d053c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D0554u;
}
