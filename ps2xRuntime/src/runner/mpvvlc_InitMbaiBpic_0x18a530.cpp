#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvvlc_InitMbaiBpic
// Address: 0x18a530 - 0x18a8b4
void mpvvlc_InitMbaiBpic_0x18a530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvvlc_InitMbaiBpic");


    ctx->pc = 0x18a530u;

    // 0x18a530: 0x3c020024
    ctx->pc = 0x18a530u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x18a534: 0x24030240
    ctx->pc = 0x18a534u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 576));
    // 0x18a538: 0x24481e38
    ctx->pc = 0x18a538u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 7736));
    // 0x18a53c: 0x24020007
    ctx->pc = 0x18a53cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
label_18a540:
    // 0x18a540: 0xa5030000
    ctx->pc = 0x18a540u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x18a544: 0x2442ffff
    ctx->pc = 0x18a544u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18a548: 0x25080002
    ctx->pc = 0x18a548u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 2));
    // 0x18a54c: 0x0
    ctx->pc = 0x18a54cu;
    // NOP
    // 0x18a550: 0x0
    ctx->pc = 0x18a550u;
    // NOP
    // 0x18a554: 0x441fffa
    ctx->pc = 0x18A554u;
    {
        const bool branch_taken_0x18a554 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x18a554) {
            ctx->pc = 0x18A540u;
            goto label_18a540;
        }
    }
    ctx->pc = 0x18A55Cu;
    // 0x18a55c: 0x2403023b
    ctx->pc = 0x18a55cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 571));
    // 0x18a560: 0x102d
    ctx->pc = 0x18a560u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a564: 0x0
    ctx->pc = 0x18a564u;
    // NOP
label_18a568:
    // 0x18a568: 0xa5030000
    ctx->pc = 0x18a568u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x18a56c: 0x2442ffff
    ctx->pc = 0x18a56cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18a570: 0x25080002
    ctx->pc = 0x18a570u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 2));
    // 0x18a574: 0x0
    ctx->pc = 0x18a574u;
    // NOP
    // 0x18a578: 0x0
    ctx->pc = 0x18a578u;
    // NOP
    // 0x18a57c: 0x441fffa
    ctx->pc = 0x18A57Cu;
    {
        const bool branch_taken_0x18a57c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x18a57c) {
            ctx->pc = 0x18A568u;
            goto label_18a568;
        }
    }
    ctx->pc = 0x18A584u;
    // 0x18a584: 0x24030240
    ctx->pc = 0x18a584u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 576));
    // 0x18a588: 0x24020005
    ctx->pc = 0x18a588u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x18a58c: 0x0
    ctx->pc = 0x18a58cu;
    // NOP
label_18a590:
    // 0x18a590: 0xa5030000
    ctx->pc = 0x18a590u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x18a594: 0x2442ffff
    ctx->pc = 0x18a594u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18a598: 0x25080002
    ctx->pc = 0x18a598u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 2));
    // 0x18a59c: 0x0
    ctx->pc = 0x18a59cu;
    // NOP
    // 0x18a5a0: 0x0
    ctx->pc = 0x18a5a0u;
    // NOP
    // 0x18a5a4: 0x441fffa
    ctx->pc = 0x18A5A4u;
    {
        const bool branch_taken_0x18a5a4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x18a5a4) {
            ctx->pc = 0x18A590u;
            goto label_18a590;
        }
    }
    ctx->pc = 0x18A5ACu;
    // 0x18a5ac: 0x2403022b
    ctx->pc = 0x18a5acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 555));
    // 0x18a5b0: 0x102d
    ctx->pc = 0x18a5b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a5b4: 0x0
    ctx->pc = 0x18a5b4u;
    // NOP
label_18a5b8:
    // 0x18a5b8: 0xa5030000
    ctx->pc = 0x18a5b8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x18a5bc: 0x2442ffff
    ctx->pc = 0x18a5bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18a5c0: 0x25080002
    ctx->pc = 0x18a5c0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 2));
    // 0x18a5c4: 0x0
    ctx->pc = 0x18a5c4u;
    // NOP
    // 0x18a5c8: 0x0
    ctx->pc = 0x18a5c8u;
    // NOP
    // 0x18a5cc: 0x441fffa
    ctx->pc = 0x18A5CCu;
    {
        const bool branch_taken_0x18a5cc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x18a5cc) {
            ctx->pc = 0x18A5B8u;
            goto label_18a5b8;
        }
    }
    ctx->pc = 0x18A5D4u;
    // 0x18a5d4: 0x24030240
    ctx->pc = 0x18a5d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 576));
    // 0x18a5d8: 0x24020007
    ctx->pc = 0x18a5d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
    // 0x18a5dc: 0x0
    ctx->pc = 0x18a5dcu;
    // NOP
label_18a5e0:
    // 0x18a5e0: 0xa5030000
    ctx->pc = 0x18a5e0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x18a5e4: 0x2442ffff
    ctx->pc = 0x18a5e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18a5e8: 0x25080002
    ctx->pc = 0x18a5e8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 2));
    // 0x18a5ec: 0x0
    ctx->pc = 0x18a5ecu;
    // NOP
    // 0x18a5f0: 0x0
    ctx->pc = 0x18a5f0u;
    // NOP
    // 0x18a5f4: 0x441fffa
    ctx->pc = 0x18A5F4u;
    {
        const bool branch_taken_0x18a5f4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x18a5f4) {
            ctx->pc = 0x18A5E0u;
            goto label_18a5e0;
        }
    }
    ctx->pc = 0x18A5FCu;
    // 0x18a5fc: 0x24040021
    ctx->pc = 0x18a5fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 33));
label_18a600:
    // 0x18a600: 0x41100
    ctx->pc = 0x18a600u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 4));
    // 0x18a604: 0x3442000b
    ctx->pc = 0x18a604u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 11));
    // 0x18a608: 0x2484ffff
    ctx->pc = 0x18a608u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18a60c: 0xa5020000
    ctx->pc = 0x18a60cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18a610: 0x28830016
    ctx->pc = 0x18a610u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 22));
    // 0x18a614: 0x25080002
    ctx->pc = 0x18a614u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 2));
    // 0x18a618: 0x1060fff9
    ctx->pc = 0x18A618u;
    {
        const bool branch_taken_0x18a618 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x18a618) {
            ctx->pc = 0x18A600u;
            goto label_18a600;
        }
    }
    ctx->pc = 0x18A620u;
    // 0x18a620: 0x24040015
    ctx->pc = 0x18a620u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 21));
    // 0x18a624: 0x0
    ctx->pc = 0x18a624u;
    // NOP
label_18a628:
    // 0x18a628: 0x41100
    ctx->pc = 0x18a628u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 4));
    // 0x18a62c: 0x3442000a
    ctx->pc = 0x18a62cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 10));
    // 0x18a630: 0x2484ffff
    ctx->pc = 0x18a630u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18a634: 0xa5020002
    ctx->pc = 0x18a634u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x18a638: 0x28830010
    ctx->pc = 0x18a638u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 16));
    // 0x18a63c: 0xa5020000
    ctx->pc = 0x18a63cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18a640: 0x1060fff9
    ctx->pc = 0x18A640u;
    {
        const bool branch_taken_0x18a640 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x18A644u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4));
        if (branch_taken_0x18a640) {
            ctx->pc = 0x18A628u;
            goto label_18a628;
        }
    }
    ctx->pc = 0x18A648u;
    // 0x18a648: 0x25070002
    ctx->pc = 0x18a648u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 8), 2));
    // 0x18a64c: 0x240a000f
    ctx->pc = 0x18a64cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 15));
    // 0x18a650: 0x240e900b
    ctx->pc = 0x18a650u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 0), 4294938635));
    // 0x18a654: 0x240d980b
    ctx->pc = 0x18a654u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 0), 4294940683));
    // 0x18a658: 0x240cb00a
    ctx->pc = 0x18a658u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 4294946826));
    // 0x18a65c: 0x240bb80a
    ctx->pc = 0x18a65cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 4294948874));
    // 0x18a660: 0xe0482d
    ctx->pc = 0x18a660u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a664: 0x0
    ctx->pc = 0x18a664u;
    // NOP
label_18a668:
    // 0x18a668: 0xa1100
    ctx->pc = 0x18a668u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 10), 4));
    // 0x18a66c: 0x25080010
    ctx->pc = 0x18a66cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 16));
    // 0x18a670: 0x34430008
    ctx->pc = 0x18a670u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), 8));
    // 0x18a674: 0x4b3025
    ctx->pc = 0x18a674u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x18a678: 0x4c2825
    ctx->pc = 0x18a678u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x18a67c: 0x4e2025
    ctx->pc = 0x18a67cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x18a680: 0xa523fffe
    ctx->pc = 0x18a680u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 4294967294), (uint16_t)GPR_U32(ctx, 3));
    // 0x18a684: 0x4d1025
    ctx->pc = 0x18a684u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x18a688: 0xa4e30000
    ctx->pc = 0x18a688u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x18a68c: 0x254affff
    ctx->pc = 0x18a68cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x18a690: 0xa4e40002
    ctx->pc = 0x18a690u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x18a694: 0x2943000a
    ctx->pc = 0x18a694u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 10), 10));
    // 0x18a698: 0xa4e20004
    ctx->pc = 0x18a698u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x18a69c: 0xa4e50008
    ctx->pc = 0x18a69cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 8), (uint16_t)GPR_U32(ctx, 5));
    // 0x18a6a0: 0xa4e6000a
    ctx->pc = 0x18a6a0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 10), (uint16_t)GPR_U32(ctx, 6));
    // 0x18a6a4: 0xa4e50006
    ctx->pc = 0x18a6a4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 6), (uint16_t)GPR_U32(ctx, 5));
    // 0x18a6a8: 0xa526000c
    ctx->pc = 0x18a6a8u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 12), (uint16_t)GPR_U32(ctx, 6));
    // 0x18a6ac: 0x25290010
    ctx->pc = 0x18a6acu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 16));
    // 0x18a6b0: 0x1060ffed
    ctx->pc = 0x18A6B0u;
    {
        const bool branch_taken_0x18a6b0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x18A6B4u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18a6b0) {
            ctx->pc = 0x18A668u;
            goto label_18a668;
        }
    }
    ctx->pc = 0x18A6B8u;
    // 0x18a6b8: 0x25090002
    ctx->pc = 0x18a6b8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 8), 2));
    // 0x18a6bc: 0x240b0009
    ctx->pc = 0x18a6bcu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 9));
    // 0x18a6c0: 0x2419a00b
    ctx->pc = 0x18a6c0u;
    SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 0), 4294942731));
    // 0x18a6c4: 0x2418a80b
    ctx->pc = 0x18a6c4u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 0), 4294944779));
    // 0x18a6c8: 0x240f900a
    ctx->pc = 0x18a6c8u;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 0), 4294938634));
    // 0x18a6cc: 0x240e980a
    ctx->pc = 0x18a6ccu;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 0), 4294940682));
    // 0x18a6d0: 0x240db009
    ctx->pc = 0x18a6d0u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 0), 4294946825));
    // 0x18a6d4: 0x240cb809
    ctx->pc = 0x18a6d4u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 4294948873));
    // 0x18a6d8: 0x120502d
    ctx->pc = 0x18a6d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a6dc: 0x0
    ctx->pc = 0x18a6dcu;
    // NOP
label_18a6e0:
    // 0x18a6e0: 0xb1100
    ctx->pc = 0x18a6e0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 11), 4));
    // 0x18a6e4: 0x4c3025
    ctx->pc = 0x18a6e4u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x18a6e8: 0x4d2025
    ctx->pc = 0x18a6e8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x18a6ec: 0x34450007
    ctx->pc = 0x18a6ecu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 7));
    // 0x18a6f0: 0x4f3825
    ctx->pc = 0x18a6f0u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x18a6f4: 0x4e4025
    ctx->pc = 0x18a6f4u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x18a6f8: 0x591825
    ctx->pc = 0x18a6f8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
    // 0x18a6fc: 0xa545fffe
    ctx->pc = 0x18a6fcu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 4294967294), (uint16_t)GPR_U32(ctx, 5));
    // 0x18a700: 0x581025
    ctx->pc = 0x18a700u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x18a704: 0xa5250000
    ctx->pc = 0x18a704u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x18a708: 0x256bffff
    ctx->pc = 0x18a708u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x18a70c: 0xa5230002
    ctx->pc = 0x18a70cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x18a710: 0x29650008
    ctx->pc = 0x18a710u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 11), 8));
    // 0x18a714: 0xa5220004
    ctx->pc = 0x18a714u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x18a718: 0xa5270008
    ctx->pc = 0x18a718u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 8), (uint16_t)GPR_U32(ctx, 7));
    // 0x18a71c: 0xa528000c
    ctx->pc = 0x18a71cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 12), (uint16_t)GPR_U32(ctx, 8));
    // 0x18a720: 0xa5240014
    ctx->pc = 0x18a720u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 20), (uint16_t)GPR_U32(ctx, 4));
    // 0x18a724: 0xa526001a
    ctx->pc = 0x18a724u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 26), (uint16_t)GPR_U32(ctx, 6));
    // 0x18a728: 0xa5270006
    ctx->pc = 0x18a728u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 6), (uint16_t)GPR_U32(ctx, 7));
    // 0x18a72c: 0xa528000a
    ctx->pc = 0x18a72cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 10), (uint16_t)GPR_U32(ctx, 8));
    // 0x18a730: 0xa524000e
    ctx->pc = 0x18a730u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x18a734: 0xa5240010
    ctx->pc = 0x18a734u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 16), (uint16_t)GPR_U32(ctx, 4));
    // 0x18a738: 0xa5240012
    ctx->pc = 0x18a738u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 18), (uint16_t)GPR_U32(ctx, 4));
    // 0x18a73c: 0xa5260016
    ctx->pc = 0x18a73cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 22), (uint16_t)GPR_U32(ctx, 6));
    // 0x18a740: 0xa5260018
    ctx->pc = 0x18a740u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 24), (uint16_t)GPR_U32(ctx, 6));
    // 0x18a744: 0xa546001c
    ctx->pc = 0x18a744u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 28), (uint16_t)GPR_U32(ctx, 6));
    // 0x18a748: 0x254a0020
    ctx->pc = 0x18a748u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 32));
    // 0x18a74c: 0x10a0ffe4
    ctx->pc = 0x18A74Cu;
    {
        const bool branch_taken_0x18a74c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x18A750u;
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18a74c) {
            ctx->pc = 0x18A6E0u;
            goto label_18a6e0;
        }
    }
    ctx->pc = 0x18A754u;
    // 0x18a754: 0x3c020024
    ctx->pc = 0x18a754u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x18a758: 0x24030240
    ctx->pc = 0x18a758u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 576));
    // 0x18a75c: 0x24481f38
    ctx->pc = 0x18a75cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 7992));
    // 0x18a760: 0x24020001
    ctx->pc = 0x18a760u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a764: 0x0
    ctx->pc = 0x18a764u;
    // NOP
label_18a768:
    // 0x18a768: 0xa5030000
    ctx->pc = 0x18a768u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x18a76c: 0x2442ffff
    ctx->pc = 0x18a76cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18a770: 0x25080002
    ctx->pc = 0x18a770u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 2));
    // 0x18a774: 0x0
    ctx->pc = 0x18a774u;
    // NOP
    // 0x18a778: 0x0
    ctx->pc = 0x18a778u;
    // NOP
    // 0x18a77c: 0x441fffa
    ctx->pc = 0x18A77Cu;
    {
        const bool branch_taken_0x18a77c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x18a77c) {
            ctx->pc = 0x18A768u;
            goto label_18a768;
        }
    }
    ctx->pc = 0x18A784u;
    // 0x18a784: 0x24040007
    ctx->pc = 0x18a784u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7));
label_18a788:
    // 0x18a788: 0x41100
    ctx->pc = 0x18a788u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 4));
    // 0x18a78c: 0x34420005
    ctx->pc = 0x18a78cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 5));
    // 0x18a790: 0x2484ffff
    ctx->pc = 0x18a790u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18a794: 0xa5020000
    ctx->pc = 0x18a794u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18a798: 0x28830006
    ctx->pc = 0x18a798u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 6));
    // 0x18a79c: 0x25080002
    ctx->pc = 0x18a79cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 2));
    // 0x18a7a0: 0x1060fff9
    ctx->pc = 0x18A7A0u;
    {
        const bool branch_taken_0x18a7a0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x18a7a0) {
            ctx->pc = 0x18A788u;
            goto label_18a788;
        }
    }
    ctx->pc = 0x18A7A8u;
    // 0x18a7a8: 0x24040005
    ctx->pc = 0x18a7a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    // 0x18a7ac: 0x0
    ctx->pc = 0x18a7acu;
    // NOP
label_18a7b0:
    // 0x18a7b0: 0x41100
    ctx->pc = 0x18a7b0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 4));
    // 0x18a7b4: 0x34420004
    ctx->pc = 0x18a7b4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 4));
    // 0x18a7b8: 0x2484ffff
    ctx->pc = 0x18a7b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18a7bc: 0xa5020002
    ctx->pc = 0x18a7bcu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x18a7c0: 0x28830004
    ctx->pc = 0x18a7c0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 4));
    // 0x18a7c4: 0xa5020000
    ctx->pc = 0x18a7c4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18a7c8: 0x1060fff9
    ctx->pc = 0x18A7C8u;
    {
        const bool branch_taken_0x18a7c8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x18A7CCu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4));
        if (branch_taken_0x18a7c8) {
            ctx->pc = 0x18A7B0u;
            goto label_18a7b0;
        }
    }
    ctx->pc = 0x18A7D0u;
    // 0x18a7d0: 0x24070003
    ctx->pc = 0x18a7d0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 3));
    // 0x18a7d4: 0x240ab005
    ctx->pc = 0x18a7d4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 4294946821));
    // 0x18a7d8: 0x2409b805
    ctx->pc = 0x18a7d8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 4294948869));
    // 0x18a7dc: 0x25060006
    ctx->pc = 0x18a7dcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 8), 6));
    // 0x18a7e0: 0x25050002
    ctx->pc = 0x18a7e0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 8), 2));
    // 0x18a7e4: 0x0
    ctx->pc = 0x18a7e4u;
    // NOP
label_18a7e8:
    // 0x18a7e8: 0x71100
    ctx->pc = 0x18a7e8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 4));
    // 0x18a7ec: 0x25080008
    ctx->pc = 0x18a7ecu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 8));
    // 0x18a7f0: 0x34440003
    ctx->pc = 0x18a7f0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), 3));
    // 0x18a7f4: 0x4a1825
    ctx->pc = 0x18a7f4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x18a7f8: 0xa4c4fffa
    ctx->pc = 0x18a7f8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4294967290), (uint16_t)GPR_U32(ctx, 4));
    // 0x18a7fc: 0x491025
    ctx->pc = 0x18a7fcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x18a800: 0xa4a30002
    ctx->pc = 0x18a800u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x18a804: 0x24e7ffff
    ctx->pc = 0x18a804u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x18a808: 0xa4a40000
    ctx->pc = 0x18a808u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18a80c: 0x28e30002
    ctx->pc = 0x18a80cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 7), 2));
    // 0x18a810: 0xa4c20000
    ctx->pc = 0x18a810u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18a814: 0x25050002
    ctx->pc = 0x18a814u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 8), 2));
    // 0x18a818: 0x1060fff3
    ctx->pc = 0x18A818u;
    {
        const bool branch_taken_0x18a818 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x18A81Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
        if (branch_taken_0x18a818) {
            ctx->pc = 0x18A7E8u;
            goto label_18a7e8;
        }
    }
    ctx->pc = 0x18A820u;
    // 0x18a820: 0xa0482d
    ctx->pc = 0x18a820u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a824: 0x240a0001
    ctx->pc = 0x18a824u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a828: 0x2418a005
    ctx->pc = 0x18a828u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 0), 4294942725));
    // 0x18a82c: 0x240fa805
    ctx->pc = 0x18a82cu;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 0), 4294944773));
    // 0x18a830: 0x240e9004
    ctx->pc = 0x18a830u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 0), 4294938628));
    // 0x18a834: 0x240d9804
    ctx->pc = 0x18a834u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 0), 4294940676));
    // 0x18a838: 0x240cb003
    ctx->pc = 0x18a838u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 4294946819));
    // 0x18a83c: 0x240bb803
    ctx->pc = 0x18a83cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 4294948867));
label_18a840:
    // 0x18a840: 0xa1100
    ctx->pc = 0x18a840u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 10), 4));
    // 0x18a844: 0x4b2825
    ctx->pc = 0x18a844u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x18a848: 0x4c2025
    ctx->pc = 0x18a848u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x18a84c: 0x34460001
    ctx->pc = 0x18a84cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 2), 1));
    // 0x18a850: 0x4e3825
    ctx->pc = 0x18a850u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x18a854: 0x4d4025
    ctx->pc = 0x18a854u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x18a858: 0x581825
    ctx->pc = 0x18a858u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x18a85c: 0x4f1025
    ctx->pc = 0x18a85cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x18a860: 0xa5260000
    ctx->pc = 0x18a860u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x18a864: 0xa5230002
    ctx->pc = 0x18a864u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x18a868: 0x254affff
    ctx->pc = 0x18a868u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x18a86c: 0xa5220004
    ctx->pc = 0x18a86cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x18a870: 0xa5270008
    ctx->pc = 0x18a870u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 8), (uint16_t)GPR_U32(ctx, 7));
    // 0x18a874: 0xa528000c
    ctx->pc = 0x18a874u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 12), (uint16_t)GPR_U32(ctx, 8));
    // 0x18a878: 0xa5240014
    ctx->pc = 0x18a878u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 20), (uint16_t)GPR_U32(ctx, 4));
    // 0x18a87c: 0xa525001c
    ctx->pc = 0x18a87cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 28), (uint16_t)GPR_U32(ctx, 5));
    // 0x18a880: 0xa526fffe
    ctx->pc = 0x18a880u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 4294967294), (uint16_t)GPR_U32(ctx, 6));
    // 0x18a884: 0xa5270006
    ctx->pc = 0x18a884u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 6), (uint16_t)GPR_U32(ctx, 7));
    // 0x18a888: 0xa528000a
    ctx->pc = 0x18a888u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 10), (uint16_t)GPR_U32(ctx, 8));
    // 0x18a88c: 0xa524000e
    ctx->pc = 0x18a88cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x18a890: 0xa5240010
    ctx->pc = 0x18a890u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 16), (uint16_t)GPR_U32(ctx, 4));
    // 0x18a894: 0xa5240012
    ctx->pc = 0x18a894u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 18), (uint16_t)GPR_U32(ctx, 4));
    // 0x18a898: 0xa5250016
    ctx->pc = 0x18a898u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 22), (uint16_t)GPR_U32(ctx, 5));
    // 0x18a89c: 0xa5250018
    ctx->pc = 0x18a89cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 24), (uint16_t)GPR_U32(ctx, 5));
    // 0x18a8a0: 0xa525001a
    ctx->pc = 0x18a8a0u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 26), (uint16_t)GPR_U32(ctx, 5));
    // 0x18a8a4: 0x1d40ffe6
    ctx->pc = 0x18A8A4u;
    {
        const bool branch_taken_0x18a8a4 = (GPR_S32(ctx, 10) > 0);
        ctx->pc = 0x18A8A8u;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 32));
        if (branch_taken_0x18a8a4) {
            ctx->pc = 0x18A840u;
            goto label_18a840;
        }
    }
    ctx->pc = 0x18A8ACu;
    // 0x18a8ac: 0x3e00008
    ctx->pc = 0x18A8ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18A540u: goto label_18a540;
            case 0x18A568u: goto label_18a568;
            case 0x18A590u: goto label_18a590;
            case 0x18A5B8u: goto label_18a5b8;
            case 0x18A5E0u: goto label_18a5e0;
            case 0x18A600u: goto label_18a600;
            case 0x18A628u: goto label_18a628;
            case 0x18A668u: goto label_18a668;
            case 0x18A6E0u: goto label_18a6e0;
            case 0x18A768u: goto label_18a768;
            case 0x18A788u: goto label_18a788;
            case 0x18A7B0u: goto label_18a7b0;
            case 0x18A7E8u: goto label_18a7e8;
            case 0x18A840u: goto label_18a840;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18A8B4u;
}
