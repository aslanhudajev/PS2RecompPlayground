#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvvlc_InitCbpSub2
// Address: 0x18b550 - 0x18b9e4
void mpvvlc_InitCbpSub2_0x18b550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvvlc_InitCbpSub2");


    ctx->pc = 0x18b550u;

    // 0x18b550: 0x80102d
    ctx->pc = 0x18b550u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b554: 0x24030003
    ctx->pc = 0x18b554u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x18b558: 0x3404a207
    ctx->pc = 0x18b558u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 41479));
    // 0x18b55c: 0x0
    ctx->pc = 0x18b55cu;
    // NOP
label_18b560:
    // 0x18b560: 0xa4440000
    ctx->pc = 0x18b560u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b564: 0x2463ffff
    ctx->pc = 0x18b564u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b568: 0x24420002
    ctx->pc = 0x18b568u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b56c: 0x0
    ctx->pc = 0x18b56cu;
    // NOP
    // 0x18b570: 0x0
    ctx->pc = 0x18b570u;
    // NOP
    // 0x18b574: 0x461fffa
    ctx->pc = 0x18B574u;
    {
        const bool branch_taken_0x18b574 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b574) {
            ctx->pc = 0x18B560u;
            goto label_18b560;
        }
    }
    ctx->pc = 0x18B57Cu;
    // 0x18b57c: 0x34049207
    ctx->pc = 0x18b57cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 37383));
    // 0x18b580: 0x24030003
    ctx->pc = 0x18b580u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x18b584: 0x0
    ctx->pc = 0x18b584u;
    // NOP
label_18b588:
    // 0x18b588: 0xa4440000
    ctx->pc = 0x18b588u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b58c: 0x2463ffff
    ctx->pc = 0x18b58cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b590: 0x24420002
    ctx->pc = 0x18b590u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b594: 0x0
    ctx->pc = 0x18b594u;
    // NOP
    // 0x18b598: 0x0
    ctx->pc = 0x18b598u;
    // NOP
    // 0x18b59c: 0x461fffa
    ctx->pc = 0x18B59Cu;
    {
        const bool branch_taken_0x18b59c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b59c) {
            ctx->pc = 0x18B588u;
            goto label_18b588;
        }
    }
    ctx->pc = 0x18B5A4u;
    // 0x18b5a4: 0x34048a07
    ctx->pc = 0x18b5a4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 35335));
    // 0x18b5a8: 0x24030003
    ctx->pc = 0x18b5a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x18b5ac: 0x0
    ctx->pc = 0x18b5acu;
    // NOP
label_18b5b0:
    // 0x18b5b0: 0xa4440000
    ctx->pc = 0x18b5b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b5b4: 0x2463ffff
    ctx->pc = 0x18b5b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b5b8: 0x24420002
    ctx->pc = 0x18b5b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b5bc: 0x0
    ctx->pc = 0x18b5bcu;
    // NOP
    // 0x18b5c0: 0x0
    ctx->pc = 0x18b5c0u;
    // NOP
    // 0x18b5c4: 0x461fffa
    ctx->pc = 0x18B5C4u;
    {
        const bool branch_taken_0x18b5c4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b5c4) {
            ctx->pc = 0x18B5B0u;
            goto label_18b5b0;
        }
    }
    ctx->pc = 0x18B5CCu;
    // 0x18b5cc: 0x34048607
    ctx->pc = 0x18b5ccu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 34311));
    // 0x18b5d0: 0x24030003
    ctx->pc = 0x18b5d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x18b5d4: 0x0
    ctx->pc = 0x18b5d4u;
    // NOP
label_18b5d8:
    // 0x18b5d8: 0xa4440000
    ctx->pc = 0x18b5d8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b5dc: 0x2463ffff
    ctx->pc = 0x18b5dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b5e0: 0x24420002
    ctx->pc = 0x18b5e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b5e4: 0x0
    ctx->pc = 0x18b5e4u;
    // NOP
    // 0x18b5e8: 0x0
    ctx->pc = 0x18b5e8u;
    // NOP
    // 0x18b5ec: 0x461fffa
    ctx->pc = 0x18B5ECu;
    {
        const bool branch_taken_0x18b5ec = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b5ec) {
            ctx->pc = 0x18B5D8u;
            goto label_18b5d8;
        }
    }
    ctx->pc = 0x18B5F4u;
    // 0x18b5f4: 0x24046107
    ctx->pc = 0x18b5f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 24839));
    // 0x18b5f8: 0x24030003
    ctx->pc = 0x18b5f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x18b5fc: 0x0
    ctx->pc = 0x18b5fcu;
    // NOP
label_18b600:
    // 0x18b600: 0xa4440000
    ctx->pc = 0x18b600u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b604: 0x2463ffff
    ctx->pc = 0x18b604u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b608: 0x24420002
    ctx->pc = 0x18b608u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b60c: 0x0
    ctx->pc = 0x18b60cu;
    // NOP
    // 0x18b610: 0x0
    ctx->pc = 0x18b610u;
    // NOP
    // 0x18b614: 0x461fffa
    ctx->pc = 0x18B614u;
    {
        const bool branch_taken_0x18b614 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b614) {
            ctx->pc = 0x18B600u;
            goto label_18b600;
        }
    }
    ctx->pc = 0x18B61Cu;
    // 0x18b61c: 0x24045107
    ctx->pc = 0x18b61cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 20743));
    // 0x18b620: 0x24030003
    ctx->pc = 0x18b620u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x18b624: 0x0
    ctx->pc = 0x18b624u;
    // NOP
label_18b628:
    // 0x18b628: 0xa4440000
    ctx->pc = 0x18b628u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b62c: 0x2463ffff
    ctx->pc = 0x18b62cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b630: 0x24420002
    ctx->pc = 0x18b630u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b634: 0x0
    ctx->pc = 0x18b634u;
    // NOP
    // 0x18b638: 0x0
    ctx->pc = 0x18b638u;
    // NOP
    // 0x18b63c: 0x461fffa
    ctx->pc = 0x18B63Cu;
    {
        const bool branch_taken_0x18b63c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b63c) {
            ctx->pc = 0x18B628u;
            goto label_18b628;
        }
    }
    ctx->pc = 0x18B644u;
    // 0x18b644: 0x24044907
    ctx->pc = 0x18b644u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 18695));
    // 0x18b648: 0x24030003
    ctx->pc = 0x18b648u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x18b64c: 0x0
    ctx->pc = 0x18b64cu;
    // NOP
label_18b650:
    // 0x18b650: 0xa4440000
    ctx->pc = 0x18b650u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b654: 0x2463ffff
    ctx->pc = 0x18b654u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b658: 0x24420002
    ctx->pc = 0x18b658u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b65c: 0x0
    ctx->pc = 0x18b65cu;
    // NOP
    // 0x18b660: 0x0
    ctx->pc = 0x18b660u;
    // NOP
    // 0x18b664: 0x461fffa
    ctx->pc = 0x18B664u;
    {
        const bool branch_taken_0x18b664 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b664) {
            ctx->pc = 0x18B650u;
            goto label_18b650;
        }
    }
    ctx->pc = 0x18B66Cu;
    // 0x18b66c: 0x24044507
    ctx->pc = 0x18b66cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 17671));
    // 0x18b670: 0x24030003
    ctx->pc = 0x18b670u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x18b674: 0x0
    ctx->pc = 0x18b674u;
    // NOP
label_18b678:
    // 0x18b678: 0xa4440000
    ctx->pc = 0x18b678u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b67c: 0x2463ffff
    ctx->pc = 0x18b67cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b680: 0x24420002
    ctx->pc = 0x18b680u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b684: 0x0
    ctx->pc = 0x18b684u;
    // NOP
    // 0x18b688: 0x0
    ctx->pc = 0x18b688u;
    // NOP
    // 0x18b68c: 0x461fffa
    ctx->pc = 0x18B68Cu;
    {
        const bool branch_taken_0x18b68c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b68c) {
            ctx->pc = 0x18B678u;
            goto label_18b678;
        }
    }
    ctx->pc = 0x18B694u;
    // 0x18b694: 0x3404ff06
    ctx->pc = 0x18b694u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 65286));
    // 0x18b698: 0x24030007
    ctx->pc = 0x18b698u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7));
    // 0x18b69c: 0x0
    ctx->pc = 0x18b69cu;
    // NOP
label_18b6a0:
    // 0x18b6a0: 0xa4440000
    ctx->pc = 0x18b6a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b6a4: 0x2463ffff
    ctx->pc = 0x18b6a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b6a8: 0x24420002
    ctx->pc = 0x18b6a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b6ac: 0x0
    ctx->pc = 0x18b6acu;
    // NOP
    // 0x18b6b0: 0x0
    ctx->pc = 0x18b6b0u;
    // NOP
    // 0x18b6b4: 0x461fffa
    ctx->pc = 0x18B6B4u;
    {
        const bool branch_taken_0x18b6b4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b6b4) {
            ctx->pc = 0x18B6A0u;
            goto label_18b6a0;
        }
    }
    ctx->pc = 0x18B6BCu;
    // 0x18b6bc: 0x3404c306
    ctx->pc = 0x18b6bcu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 49926));
    // 0x18b6c0: 0x24030007
    ctx->pc = 0x18b6c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7));
    // 0x18b6c4: 0x0
    ctx->pc = 0x18b6c4u;
    // NOP
label_18b6c8:
    // 0x18b6c8: 0xa4440000
    ctx->pc = 0x18b6c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b6cc: 0x2463ffff
    ctx->pc = 0x18b6ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b6d0: 0x24420002
    ctx->pc = 0x18b6d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b6d4: 0x0
    ctx->pc = 0x18b6d4u;
    // NOP
    // 0x18b6d8: 0x0
    ctx->pc = 0x18b6d8u;
    // NOP
    // 0x18b6dc: 0x461fffa
    ctx->pc = 0x18B6DCu;
    {
        const bool branch_taken_0x18b6dc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b6dc) {
            ctx->pc = 0x18B6C8u;
            goto label_18b6c8;
        }
    }
    ctx->pc = 0x18B6E4u;
    // 0x18b6e4: 0x24042406
    ctx->pc = 0x18b6e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 9222));
    // 0x18b6e8: 0x24030007
    ctx->pc = 0x18b6e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7));
    // 0x18b6ec: 0x0
    ctx->pc = 0x18b6ecu;
    // NOP
label_18b6f0:
    // 0x18b6f0: 0xa4440000
    ctx->pc = 0x18b6f0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b6f4: 0x2463ffff
    ctx->pc = 0x18b6f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b6f8: 0x24420002
    ctx->pc = 0x18b6f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b6fc: 0x0
    ctx->pc = 0x18b6fcu;
    // NOP
    // 0x18b700: 0x0
    ctx->pc = 0x18b700u;
    // NOP
    // 0x18b704: 0x461fffa
    ctx->pc = 0x18B704u;
    {
        const bool branch_taken_0x18b704 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b704) {
            ctx->pc = 0x18B6F0u;
            goto label_18b6f0;
        }
    }
    ctx->pc = 0x18B70Cu;
    // 0x18b70c: 0x24041806
    ctx->pc = 0x18b70cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 6150));
    // 0x18b710: 0x24030007
    ctx->pc = 0x18b710u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7));
    // 0x18b714: 0x0
    ctx->pc = 0x18b714u;
    // NOP
label_18b718:
    // 0x18b718: 0xa4440000
    ctx->pc = 0x18b718u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b71c: 0x2463ffff
    ctx->pc = 0x18b71cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b720: 0x24420002
    ctx->pc = 0x18b720u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b724: 0x0
    ctx->pc = 0x18b724u;
    // NOP
    // 0x18b728: 0x0
    ctx->pc = 0x18b728u;
    // NOP
    // 0x18b72c: 0x461fffa
    ctx->pc = 0x18B72Cu;
    {
        const bool branch_taken_0x18b72c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b72c) {
            ctx->pc = 0x18B718u;
            goto label_18b718;
        }
    }
    ctx->pc = 0x18B734u;
    // 0x18b734: 0x3404be05
    ctx->pc = 0x18b734u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 48645));
    // 0x18b738: 0x2403000f
    ctx->pc = 0x18b738u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 15));
    // 0x18b73c: 0x0
    ctx->pc = 0x18b73cu;
    // NOP
label_18b740:
    // 0x18b740: 0xa4440000
    ctx->pc = 0x18b740u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b744: 0x2463ffff
    ctx->pc = 0x18b744u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b748: 0x24420002
    ctx->pc = 0x18b748u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b74c: 0x0
    ctx->pc = 0x18b74cu;
    // NOP
    // 0x18b750: 0x0
    ctx->pc = 0x18b750u;
    // NOP
    // 0x18b754: 0x461fffa
    ctx->pc = 0x18B754u;
    {
        const bool branch_taken_0x18b754 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b754) {
            ctx->pc = 0x18B740u;
            goto label_18b740;
        }
    }
    ctx->pc = 0x18B75Cu;
    // 0x18b75c: 0x34048205
    ctx->pc = 0x18b75cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 33285));
    // 0x18b760: 0x2403000f
    ctx->pc = 0x18b760u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 15));
    // 0x18b764: 0x0
    ctx->pc = 0x18b764u;
    // NOP
label_18b768:
    // 0x18b768: 0xa4440000
    ctx->pc = 0x18b768u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b76c: 0x2463ffff
    ctx->pc = 0x18b76cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b770: 0x24420002
    ctx->pc = 0x18b770u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b774: 0x0
    ctx->pc = 0x18b774u;
    // NOP
    // 0x18b778: 0x0
    ctx->pc = 0x18b778u;
    // NOP
    // 0x18b77c: 0x461fffa
    ctx->pc = 0x18B77Cu;
    {
        const bool branch_taken_0x18b77c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b77c) {
            ctx->pc = 0x18B768u;
            goto label_18b768;
        }
    }
    ctx->pc = 0x18B784u;
    // 0x18b784: 0x24047d05
    ctx->pc = 0x18b784u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 32005));
    // 0x18b788: 0x2403000f
    ctx->pc = 0x18b788u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 15));
    // 0x18b78c: 0x0
    ctx->pc = 0x18b78cu;
    // NOP
label_18b790:
    // 0x18b790: 0xa4440000
    ctx->pc = 0x18b790u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b794: 0x2463ffff
    ctx->pc = 0x18b794u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b798: 0x24420002
    ctx->pc = 0x18b798u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b79c: 0x0
    ctx->pc = 0x18b79cu;
    // NOP
    // 0x18b7a0: 0x0
    ctx->pc = 0x18b7a0u;
    // NOP
    // 0x18b7a4: 0x461fffa
    ctx->pc = 0x18B7A4u;
    {
        const bool branch_taken_0x18b7a4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b7a4) {
            ctx->pc = 0x18B790u;
            goto label_18b790;
        }
    }
    ctx->pc = 0x18B7ACu;
    // 0x18b7ac: 0x24044105
    ctx->pc = 0x18b7acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 16645));
    // 0x18b7b0: 0x2403000f
    ctx->pc = 0x18b7b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 15));
    // 0x18b7b4: 0x0
    ctx->pc = 0x18b7b4u;
    // NOP
label_18b7b8:
    // 0x18b7b8: 0xa4440000
    ctx->pc = 0x18b7b8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b7bc: 0x2463ffff
    ctx->pc = 0x18b7bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b7c0: 0x24420002
    ctx->pc = 0x18b7c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b7c4: 0x0
    ctx->pc = 0x18b7c4u;
    // NOP
    // 0x18b7c8: 0x0
    ctx->pc = 0x18b7c8u;
    // NOP
    // 0x18b7cc: 0x461fffa
    ctx->pc = 0x18B7CCu;
    {
        const bool branch_taken_0x18b7cc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b7cc) {
            ctx->pc = 0x18B7B8u;
            goto label_18b7b8;
        }
    }
    ctx->pc = 0x18B7D4u;
    // 0x18b7d4: 0x24043805
    ctx->pc = 0x18b7d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14341));
    // 0x18b7d8: 0x2403000f
    ctx->pc = 0x18b7d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 15));
    // 0x18b7dc: 0x0
    ctx->pc = 0x18b7dcu;
    // NOP
label_18b7e0:
    // 0x18b7e0: 0xa4440000
    ctx->pc = 0x18b7e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b7e4: 0x2463ffff
    ctx->pc = 0x18b7e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b7e8: 0x24420002
    ctx->pc = 0x18b7e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b7ec: 0x0
    ctx->pc = 0x18b7ecu;
    // NOP
    // 0x18b7f0: 0x0
    ctx->pc = 0x18b7f0u;
    // NOP
    // 0x18b7f4: 0x461fffa
    ctx->pc = 0x18B7F4u;
    {
        const bool branch_taken_0x18b7f4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b7f4) {
            ctx->pc = 0x18B7E0u;
            goto label_18b7e0;
        }
    }
    ctx->pc = 0x18B7FCu;
    // 0x18b7fc: 0x24043405
    ctx->pc = 0x18b7fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 13317));
    // 0x18b800: 0x2403000f
    ctx->pc = 0x18b800u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 15));
    // 0x18b804: 0x0
    ctx->pc = 0x18b804u;
    // NOP
label_18b808:
    // 0x18b808: 0xa4440000
    ctx->pc = 0x18b808u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b80c: 0x2463ffff
    ctx->pc = 0x18b80cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b810: 0x24420002
    ctx->pc = 0x18b810u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b814: 0x0
    ctx->pc = 0x18b814u;
    // NOP
    // 0x18b818: 0x0
    ctx->pc = 0x18b818u;
    // NOP
    // 0x18b81c: 0x461fffa
    ctx->pc = 0x18B81Cu;
    {
        const bool branch_taken_0x18b81c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b81c) {
            ctx->pc = 0x18B808u;
            goto label_18b808;
        }
    }
    ctx->pc = 0x18B824u;
    // 0x18b824: 0x24042c05
    ctx->pc = 0x18b824u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 11269));
    // 0x18b828: 0x2403000f
    ctx->pc = 0x18b828u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 15));
    // 0x18b82c: 0x0
    ctx->pc = 0x18b82cu;
    // NOP
label_18b830:
    // 0x18b830: 0xa4440000
    ctx->pc = 0x18b830u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b834: 0x2463ffff
    ctx->pc = 0x18b834u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b838: 0x24420002
    ctx->pc = 0x18b838u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b83c: 0x0
    ctx->pc = 0x18b83cu;
    // NOP
    // 0x18b840: 0x0
    ctx->pc = 0x18b840u;
    // NOP
    // 0x18b844: 0x461fffa
    ctx->pc = 0x18B844u;
    {
        const bool branch_taken_0x18b844 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b844) {
            ctx->pc = 0x18B830u;
            goto label_18b830;
        }
    }
    ctx->pc = 0x18B84Cu;
    // 0x18b84c: 0x24041c05
    ctx->pc = 0x18b84cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7173));
    // 0x18b850: 0x2403000f
    ctx->pc = 0x18b850u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 15));
    // 0x18b854: 0x0
    ctx->pc = 0x18b854u;
    // NOP
label_18b858:
    // 0x18b858: 0xa4440000
    ctx->pc = 0x18b858u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b85c: 0x2463ffff
    ctx->pc = 0x18b85cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b860: 0x24420002
    ctx->pc = 0x18b860u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b864: 0x0
    ctx->pc = 0x18b864u;
    // NOP
    // 0x18b868: 0x0
    ctx->pc = 0x18b868u;
    // NOP
    // 0x18b86c: 0x461fffa
    ctx->pc = 0x18B86Cu;
    {
        const bool branch_taken_0x18b86c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b86c) {
            ctx->pc = 0x18B858u;
            goto label_18b858;
        }
    }
    ctx->pc = 0x18B874u;
    // 0x18b874: 0x24042805
    ctx->pc = 0x18b874u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 10245));
    // 0x18b878: 0x2403000f
    ctx->pc = 0x18b878u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 15));
    // 0x18b87c: 0x0
    ctx->pc = 0x18b87cu;
    // NOP
label_18b880:
    // 0x18b880: 0xa4440000
    ctx->pc = 0x18b880u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b884: 0x2463ffff
    ctx->pc = 0x18b884u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b888: 0x24420002
    ctx->pc = 0x18b888u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b88c: 0x0
    ctx->pc = 0x18b88cu;
    // NOP
    // 0x18b890: 0x0
    ctx->pc = 0x18b890u;
    // NOP
    // 0x18b894: 0x461fffa
    ctx->pc = 0x18B894u;
    {
        const bool branch_taken_0x18b894 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b894) {
            ctx->pc = 0x18B880u;
            goto label_18b880;
        }
    }
    ctx->pc = 0x18B89Cu;
    // 0x18b89c: 0x24041405
    ctx->pc = 0x18b89cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5125));
    // 0x18b8a0: 0x2403000f
    ctx->pc = 0x18b8a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 15));
    // 0x18b8a4: 0x0
    ctx->pc = 0x18b8a4u;
    // NOP
label_18b8a8:
    // 0x18b8a8: 0xa4440000
    ctx->pc = 0x18b8a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b8ac: 0x2463ffff
    ctx->pc = 0x18b8acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b8b0: 0x24420002
    ctx->pc = 0x18b8b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b8b4: 0x0
    ctx->pc = 0x18b8b4u;
    // NOP
    // 0x18b8b8: 0x0
    ctx->pc = 0x18b8b8u;
    // NOP
    // 0x18b8bc: 0x461fffa
    ctx->pc = 0x18B8BCu;
    {
        const bool branch_taken_0x18b8bc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b8bc) {
            ctx->pc = 0x18B8A8u;
            goto label_18b8a8;
        }
    }
    ctx->pc = 0x18B8C4u;
    // 0x18b8c4: 0x24043005
    ctx->pc = 0x18b8c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 12293));
    // 0x18b8c8: 0x2403000f
    ctx->pc = 0x18b8c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 15));
    // 0x18b8cc: 0x0
    ctx->pc = 0x18b8ccu;
    // NOP
label_18b8d0:
    // 0x18b8d0: 0xa4440000
    ctx->pc = 0x18b8d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b8d4: 0x2463ffff
    ctx->pc = 0x18b8d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b8d8: 0x24420002
    ctx->pc = 0x18b8d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b8dc: 0x0
    ctx->pc = 0x18b8dcu;
    // NOP
    // 0x18b8e0: 0x0
    ctx->pc = 0x18b8e0u;
    // NOP
    // 0x18b8e4: 0x461fffa
    ctx->pc = 0x18B8E4u;
    {
        const bool branch_taken_0x18b8e4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b8e4) {
            ctx->pc = 0x18B8D0u;
            goto label_18b8d0;
        }
    }
    ctx->pc = 0x18B8ECu;
    // 0x18b8ec: 0x24040c05
    ctx->pc = 0x18b8ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3077));
    // 0x18b8f0: 0x2403000f
    ctx->pc = 0x18b8f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 15));
    // 0x18b8f4: 0x0
    ctx->pc = 0x18b8f4u;
    // NOP
label_18b8f8:
    // 0x18b8f8: 0xa4440000
    ctx->pc = 0x18b8f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b8fc: 0x2463ffff
    ctx->pc = 0x18b8fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b900: 0x24420002
    ctx->pc = 0x18b900u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b904: 0x0
    ctx->pc = 0x18b904u;
    // NOP
    // 0x18b908: 0x0
    ctx->pc = 0x18b908u;
    // NOP
    // 0x18b90c: 0x461fffa
    ctx->pc = 0x18B90Cu;
    {
        const bool branch_taken_0x18b90c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b90c) {
            ctx->pc = 0x18B8F8u;
            goto label_18b8f8;
        }
    }
    ctx->pc = 0x18B914u;
    // 0x18b914: 0x24042004
    ctx->pc = 0x18b914u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8196));
    // 0x18b918: 0x2403001f
    ctx->pc = 0x18b918u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 31));
    // 0x18b91c: 0x0
    ctx->pc = 0x18b91cu;
    // NOP
label_18b920:
    // 0x18b920: 0xa4440000
    ctx->pc = 0x18b920u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b924: 0x2463ffff
    ctx->pc = 0x18b924u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b928: 0x24420002
    ctx->pc = 0x18b928u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b92c: 0x0
    ctx->pc = 0x18b92cu;
    // NOP
    // 0x18b930: 0x0
    ctx->pc = 0x18b930u;
    // NOP
    // 0x18b934: 0x461fffa
    ctx->pc = 0x18B934u;
    {
        const bool branch_taken_0x18b934 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b934) {
            ctx->pc = 0x18B920u;
            goto label_18b920;
        }
    }
    ctx->pc = 0x18B93Cu;
    // 0x18b93c: 0x24041004
    ctx->pc = 0x18b93cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4100));
    // 0x18b940: 0x2403001f
    ctx->pc = 0x18b940u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 31));
    // 0x18b944: 0x0
    ctx->pc = 0x18b944u;
    // NOP
label_18b948:
    // 0x18b948: 0xa4440000
    ctx->pc = 0x18b948u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b94c: 0x2463ffff
    ctx->pc = 0x18b94cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b950: 0x24420002
    ctx->pc = 0x18b950u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b954: 0x0
    ctx->pc = 0x18b954u;
    // NOP
    // 0x18b958: 0x0
    ctx->pc = 0x18b958u;
    // NOP
    // 0x18b95c: 0x461fffa
    ctx->pc = 0x18B95Cu;
    {
        const bool branch_taken_0x18b95c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b95c) {
            ctx->pc = 0x18B948u;
            goto label_18b948;
        }
    }
    ctx->pc = 0x18B964u;
    // 0x18b964: 0x24040804
    ctx->pc = 0x18b964u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2052));
    // 0x18b968: 0x2403001f
    ctx->pc = 0x18b968u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 31));
    // 0x18b96c: 0x0
    ctx->pc = 0x18b96cu;
    // NOP
label_18b970:
    // 0x18b970: 0xa4440000
    ctx->pc = 0x18b970u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b974: 0x2463ffff
    ctx->pc = 0x18b974u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b978: 0x24420002
    ctx->pc = 0x18b978u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b97c: 0x0
    ctx->pc = 0x18b97cu;
    // NOP
    // 0x18b980: 0x0
    ctx->pc = 0x18b980u;
    // NOP
    // 0x18b984: 0x461fffa
    ctx->pc = 0x18B984u;
    {
        const bool branch_taken_0x18b984 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b984) {
            ctx->pc = 0x18B970u;
            goto label_18b970;
        }
    }
    ctx->pc = 0x18B98Cu;
    // 0x18b98c: 0x24040404
    ctx->pc = 0x18b98cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1028));
    // 0x18b990: 0x2403001f
    ctx->pc = 0x18b990u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 31));
    // 0x18b994: 0x0
    ctx->pc = 0x18b994u;
    // NOP
label_18b998:
    // 0x18b998: 0xa4440000
    ctx->pc = 0x18b998u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b99c: 0x2463ffff
    ctx->pc = 0x18b99cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b9a0: 0x24420002
    ctx->pc = 0x18b9a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b9a4: 0x0
    ctx->pc = 0x18b9a4u;
    // NOP
    // 0x18b9a8: 0x0
    ctx->pc = 0x18b9a8u;
    // NOP
    // 0x18b9ac: 0x461fffa
    ctx->pc = 0x18B9ACu;
    {
        const bool branch_taken_0x18b9ac = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b9ac) {
            ctx->pc = 0x18B998u;
            goto label_18b998;
        }
    }
    ctx->pc = 0x18B9B4u;
    // 0x18b9b4: 0x24043c03
    ctx->pc = 0x18b9b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 15363));
    // 0x18b9b8: 0x2403003f
    ctx->pc = 0x18b9b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 63));
    // 0x18b9bc: 0x0
    ctx->pc = 0x18b9bcu;
    // NOP
label_18b9c0:
    // 0x18b9c0: 0xa4440000
    ctx->pc = 0x18b9c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b9c4: 0x2463ffff
    ctx->pc = 0x18b9c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b9c8: 0x24420002
    ctx->pc = 0x18b9c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b9cc: 0x0
    ctx->pc = 0x18b9ccu;
    // NOP
    // 0x18b9d0: 0x0
    ctx->pc = 0x18b9d0u;
    // NOP
    // 0x18b9d4: 0x461fffa
    ctx->pc = 0x18B9D4u;
    {
        const bool branch_taken_0x18b9d4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b9d4) {
            ctx->pc = 0x18B9C0u;
            goto label_18b9c0;
        }
    }
    ctx->pc = 0x18B9DCu;
    // 0x18b9dc: 0x3e00008
    ctx->pc = 0x18B9DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18B560u: goto label_18b560;
            case 0x18B588u: goto label_18b588;
            case 0x18B5B0u: goto label_18b5b0;
            case 0x18B5D8u: goto label_18b5d8;
            case 0x18B600u: goto label_18b600;
            case 0x18B628u: goto label_18b628;
            case 0x18B650u: goto label_18b650;
            case 0x18B678u: goto label_18b678;
            case 0x18B6A0u: goto label_18b6a0;
            case 0x18B6C8u: goto label_18b6c8;
            case 0x18B6F0u: goto label_18b6f0;
            case 0x18B718u: goto label_18b718;
            case 0x18B740u: goto label_18b740;
            case 0x18B768u: goto label_18b768;
            case 0x18B790u: goto label_18b790;
            case 0x18B7B8u: goto label_18b7b8;
            case 0x18B7E0u: goto label_18b7e0;
            case 0x18B808u: goto label_18b808;
            case 0x18B830u: goto label_18b830;
            case 0x18B858u: goto label_18b858;
            case 0x18B880u: goto label_18b880;
            case 0x18B8A8u: goto label_18b8a8;
            case 0x18B8D0u: goto label_18b8d0;
            case 0x18B8F8u: goto label_18b8f8;
            case 0x18B920u: goto label_18b920;
            case 0x18B948u: goto label_18b948;
            case 0x18B970u: goto label_18b970;
            case 0x18B998u: goto label_18b998;
            case 0x18B9C0u: goto label_18b9c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18B9E4u;
}
