#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlObjPutSortEntry
// Address: 0x1a9490 - 0x1a9598
void nlObjPutSortEntry_0x1a9490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlObjPutSortEntry");


    ctx->pc = 0x1a9490u;

    // 0x1a9490: 0x3c030030
    ctx->pc = 0x1a9490u;
    SET_GPR_U32(ctx, 3, ((uint32_t)48 << 16));
    // 0x1a9494: 0x24644090
    ctx->pc = 0x1a9494u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 16528));
    // 0x1a9498: 0x3c030030
    ctx->pc = 0x1a9498u;
    SET_GPR_U32(ctx, 3, ((uint32_t)48 << 16));
    // 0x1a949c: 0x24654890
    ctx->pc = 0x1a949cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 18576));
    // 0x1a94a0: 0x24070001
    ctx->pc = 0x1a94a0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a94a4: 0x24090008
    ctx->pc = 0x1a94a4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 8));
label_1a94a8:
    // 0x1a94a8: 0x70003628
    ctx->pc = 0x1a94a8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a94ac: 0x70a04628
    ctx->pc = 0x1a94acu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1a94b0:
    // 0x1a94b0: 0xad000004
    ctx->pc = 0x1a94b0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
    // 0x1a94b4: 0xad000000
    ctx->pc = 0x1a94b4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x1a94b8: 0xad00000c
    ctx->pc = 0x1a94b8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
    // 0x1a94bc: 0xad000008
    ctx->pc = 0x1a94bcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
    // 0x1a94c0: 0xad000014
    ctx->pc = 0x1a94c0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 0));
    // 0x1a94c4: 0xad000010
    ctx->pc = 0x1a94c4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 0));
    // 0x1a94c8: 0xad00001c
    ctx->pc = 0x1a94c8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 0));
    // 0x1a94cc: 0xad000018
    ctx->pc = 0x1a94ccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 0));
    // 0x1a94d0: 0xad000024
    ctx->pc = 0x1a94d0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 36), GPR_U32(ctx, 0));
    // 0x1a94d4: 0xad000020
    ctx->pc = 0x1a94d4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 0));
    // 0x1a94d8: 0xad00002c
    ctx->pc = 0x1a94d8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 44), GPR_U32(ctx, 0));
    // 0x1a94dc: 0xad000028
    ctx->pc = 0x1a94dcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 0));
    // 0x1a94e0: 0xad000034
    ctx->pc = 0x1a94e0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 52), GPR_U32(ctx, 0));
    // 0x1a94e4: 0xad000030
    ctx->pc = 0x1a94e4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 48), GPR_U32(ctx, 0));
    // 0x1a94e8: 0xad00003c
    ctx->pc = 0x1a94e8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 60), GPR_U32(ctx, 0));
    // 0x1a94ec: 0x24c60008
    ctx->pc = 0x1a94ecu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
    // 0x1a94f0: 0xad000038
    ctx->pc = 0x1a94f0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 56), GPR_U32(ctx, 0));
    // 0x1a94f4: 0x28c30100
    ctx->pc = 0x1a94f4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), 256));
    // 0x1a94f8: 0x1460ffed
    ctx->pc = 0x1A94F8u;
    {
        const bool branch_taken_0x1a94f8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A94FCu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 64));
        if (branch_taken_0x1a94f8) {
            ctx->pc = 0x1A94B0u;
            goto label_1a94b0;
        }
    }
    ctx->pc = 0x1A9500u;
    // 0x1a9500: 0x70005e28
    ctx->pc = 0x1a9500u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a9504: 0x70804628
    ctx->pc = 0x1a9504u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_1a9508:
    // 0x1a9508: 0x8d060000
    ctx->pc = 0x1a9508u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1a950c: 0x50c00015
    ctx->pc = 0x1A950Cu;
    {
        const bool branch_taken_0x1a950c = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a950c) {
            ctx->pc = 0x1A9510u;
            SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 1));
            ctx->pc = 0x1A9564u;
            goto label_1a9564;
        }
    }
    ctx->pc = 0x1A9514u;
    // 0x1a9514: 0x0
    ctx->pc = 0x1a9514u;
    // NOP
label_1a9518:
    // 0x1a9518: 0x8cc30000
    ctx->pc = 0x1a9518u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a951c: 0x1231806
    ctx->pc = 0x1a951cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 9) & 0x1F));
    // 0x1a9520: 0x306300ff
    ctx->pc = 0x1a9520u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 255));
    // 0x1a9524: 0x318c0
    ctx->pc = 0x1a9524u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a9528: 0xa31821
    ctx->pc = 0x1a9528u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a952c: 0x8c6a0004
    ctx->pc = 0x1a952cu;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a9530: 0x15400004
    ctx->pc = 0x1A9530u;
    {
        const bool branch_taken_0x1a9530 = (GPR_U32(ctx, 10) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a9530) {
            ctx->pc = 0x1A9544u;
            goto label_1a9544;
        }
    }
    ctx->pc = 0x1A9538u;
    // 0x1a9538: 0xac660004
    ctx->pc = 0x1a9538u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x1a953c: 0x10000004
    ctx->pc = 0x1A953Cu;
    {
        const bool branch_taken_0x1a953c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A9540u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        if (branch_taken_0x1a953c) {
            ctx->pc = 0x1A9550u;
            goto label_1a9550;
        }
    }
    ctx->pc = 0x1A9544u;
label_1a9544:
    // 0x1a9544: 0xad4600f0
    ctx->pc = 0x1a9544u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 240), GPR_U32(ctx, 6));
    // 0x1a9548: 0xac660004
    ctx->pc = 0x1a9548u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x1a954c: 0x0
    ctx->pc = 0x1a954cu;
    // NOP
label_1a9550:
    // 0x1a9550: 0x8cc300f0
    ctx->pc = 0x1a9550u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 240)));
    // 0x1a9554: 0xacc000f0
    ctx->pc = 0x1a9554u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 240), GPR_U32(ctx, 0));
    // 0x1a9558: 0x1460ffef
    ctx->pc = 0x1A9558u;
    {
        const bool branch_taken_0x1a9558 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A955Cu;
        SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a9558) {
            ctx->pc = 0x1A9518u;
            goto label_1a9518;
        }
    }
    ctx->pc = 0x1A9560u;
    // 0x1a9560: 0x256b0001
    ctx->pc = 0x1a9560u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 1));
label_1a9564:
    // 0x1a9564: 0x29630100
    ctx->pc = 0x1a9564u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 11), 256));
    // 0x1a9568: 0x1460ffe7
    ctx->pc = 0x1A9568u;
    {
        const bool branch_taken_0x1a9568 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A956Cu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 8));
        if (branch_taken_0x1a9568) {
            ctx->pc = 0x1A9508u;
            goto label_1a9508;
        }
    }
    ctx->pc = 0x1A9570u;
    // 0x1a9570: 0x70801e28
    ctx->pc = 0x1a9570u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1a9574: 0x70a02628
    ctx->pc = 0x1a9574u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1a9578: 0x70602e28
    ctx->pc = 0x1a9578u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1a957c: 0x24e70001
    ctx->pc = 0x1a957cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x1a9580: 0x28e30004
    ctx->pc = 0x1a9580u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 7), 4));
    // 0x1a9584: 0x1460ffc8
    ctx->pc = 0x1A9584u;
    {
        const bool branch_taken_0x1a9584 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A9588u;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 8));
        if (branch_taken_0x1a9584) {
            ctx->pc = 0x1A94A8u;
            goto label_1a94a8;
        }
    }
    ctx->pc = 0x1A958Cu;
    // 0x1a958c: 0xaf848a48
    ctx->pc = 0x1a958cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937160), GPR_U32(ctx, 4));
    // 0x1a9590: 0x3e00008
    ctx->pc = 0x1A9590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9594u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937148), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A94A8u: goto label_1a94a8;
            case 0x1A94B0u: goto label_1a94b0;
            case 0x1A9508u: goto label_1a9508;
            case 0x1A9518u: goto label_1a9518;
            case 0x1A9544u: goto label_1a9544;
            case 0x1A9550u: goto label_1a9550;
            case 0x1A9564u: goto label_1a9564;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A9598u;
}
