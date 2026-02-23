#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpsdec_DecPketHd
// Address: 0x181568 - 0x182190
void mpsdec_DecPketHd_0x181568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpsdec_DecPketHd");


    ctx->pc = 0x181568u;

    // 0x181568: 0x2403fffc
    ctx->pc = 0x181568u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x18156c: 0x24a20003
    ctx->pc = 0x18156cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 3));
    // 0x181570: 0x434824
    ctx->pc = 0x181570u;
    SET_GPR_U32(ctx, 9, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x181574: 0x80602d
    ctx->pc = 0x181574u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181578: 0x2522fffd
    ctx->pc = 0x181578u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 9), 4294967293));
    // 0x18157c: 0x812b0000
    ctx->pc = 0x18157cu;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181580: 0x25290001
    ctx->pc = 0x181580u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181584: 0xa21023
    ctx->pc = 0x181584u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x181588: 0x91230000
    ctx->pc = 0x181588u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x18158c: 0x250c0
    ctx->pc = 0x18158cu;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 2), 3));
    // 0x181590: 0x25290001
    ctx->pc = 0x181590u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181594: 0xb5a00
    ctx->pc = 0x181594u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), 8));
    // 0x181598: 0x91240000
    ctx->pc = 0x181598u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x18159c: 0x1635825
    ctx->pc = 0x18159cu;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x1815a0: 0x25290001
    ctx->pc = 0x1815a0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x1815a4: 0xb5a00
    ctx->pc = 0x1815a4u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), 8));
    // 0x1815a8: 0x91220000
    ctx->pc = 0x1815a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1815ac: 0x1645825
    ctx->pc = 0x1815acu;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x1815b0: 0x25290001
    ctx->pc = 0x1815b0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x1815b4: 0xb5a00
    ctx->pc = 0x1815b4u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), 8));
    // 0x1815b8: 0x81280000
    ctx->pc = 0x1815b8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1815bc: 0x1625825
    ctx->pc = 0x1815bcu;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x1815c0: 0x25290001
    ctx->pc = 0x1815c0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x1815c4: 0x14b5804
    ctx->pc = 0x1815c4u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 10) & 0x1F));
    // 0x1815c8: 0x91230000
    ctx->pc = 0x1815c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1815cc: 0x84200
    ctx->pc = 0x1815ccu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x1815d0: 0x25290001
    ctx->pc = 0x1815d0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x1815d4: 0x91220000
    ctx->pc = 0x1815d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1815d8: 0x1034025
    ctx->pc = 0x1815d8u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1815dc: 0x25290001
    ctx->pc = 0x1815dcu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x1815e0: 0x84200
    ctx->pc = 0x1815e0u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x1815e4: 0x1024025
    ctx->pc = 0x1815e4u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1815e8: 0x91230000
    ctx->pc = 0x1815e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1815ec: 0x84200
    ctx->pc = 0x1815ecu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x1815f0: 0x25290001
    ctx->pc = 0x1815f0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x1815f4: 0x29420018
    ctx->pc = 0x1815f4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), 24));
    // 0x1815f8: 0x1440001b
    ctx->pc = 0x1815F8u;
    {
        const bool branch_taken_0x1815f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1815FCu;
        SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
        if (branch_taken_0x1815f8) {
            ctx->pc = 0x181668u;
            goto label_181668;
        }
    }
    ctx->pc = 0x181600u;
    // 0x181600: 0x254affe8
    ctx->pc = 0x181600u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294967272));
    // 0x181604: 0x11400007
    ctx->pc = 0x181604u;
    {
        const bool branch_taken_0x181604 = (GPR_U32(ctx, 10) == GPR_U32(ctx, 0));
        ctx->pc = 0x181608u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x181604) {
            ctx->pc = 0x181624u;
            goto label_181624;
        }
    }
    ctx->pc = 0x18160Cu;
    // 0x18160c: 0x4a1023
    ctx->pc = 0x18160cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x181610: 0x481006
    ctx->pc = 0x181610u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x181614: 0x1625825
    ctx->pc = 0x181614u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x181618: 0xb2602
    ctx->pc = 0x181618u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 11), 24));
    // 0x18161c: 0x10000003
    ctx->pc = 0x18161Cu;
    {
        const bool branch_taken_0x18161c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x181620u;
        SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 10) & 0x1F));
        if (branch_taken_0x18161c) {
            ctx->pc = 0x18162Cu;
            goto label_18162c;
        }
    }
    ctx->pc = 0x181624u;
label_181624:
    // 0x181624: 0xb2602
    ctx->pc = 0x181624u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 11), 24));
    // 0x181628: 0x100582d
    ctx->pc = 0x181628u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_18162c:
    // 0x18162c: 0x81280000
    ctx->pc = 0x18162cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181630: 0x25290001
    ctx->pc = 0x181630u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181634: 0x91220000
    ctx->pc = 0x181634u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181638: 0x84200
    ctx->pc = 0x181638u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x18163c: 0x25290001
    ctx->pc = 0x18163cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181640: 0x1024025
    ctx->pc = 0x181640u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x181644: 0x91230000
    ctx->pc = 0x181644u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181648: 0x25290001
    ctx->pc = 0x181648u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x18164c: 0x84200
    ctx->pc = 0x18164cu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x181650: 0x91220000
    ctx->pc = 0x181650u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181654: 0x1034025
    ctx->pc = 0x181654u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x181658: 0x84200
    ctx->pc = 0x181658u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x18165c: 0x25290001
    ctx->pc = 0x18165cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181660: 0x10000004
    ctx->pc = 0x181660u;
    {
        const bool branch_taken_0x181660 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x181664u;
        SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        if (branch_taken_0x181660) {
            ctx->pc = 0x181674u;
            goto label_181674;
        }
    }
    ctx->pc = 0x181668u;
label_181668:
    // 0x181668: 0xb2602
    ctx->pc = 0x181668u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 11), 24));
    // 0x18166c: 0x254a0008
    ctx->pc = 0x18166cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 8));
    // 0x181670: 0xb5a00
    ctx->pc = 0x181670u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), 8));
label_181674:
    // 0x181674: 0x2483ff20
    ctx->pc = 0x181674u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4294967072));
    // 0x181678: 0x2c620010
    ctx->pc = 0x181678u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 16));
    // 0x18167c: 0x10400003
    ctx->pc = 0x18167Cu;
    {
        const bool branch_taken_0x18167c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x181680u;
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 4));
        if (branch_taken_0x18167c) {
            ctx->pc = 0x18168Cu;
            goto label_18168c;
        }
    }
    ctx->pc = 0x181684u;
    // 0x181684: 0x10000014
    ctx->pc = 0x181684u;
    {
        const bool branch_taken_0x181684 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x181688u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x181684) {
            ctx->pc = 0x1816D8u;
            goto label_1816d8;
        }
    }
    ctx->pc = 0x18168Cu;
label_18168c:
    // 0x18168c: 0x2483ff40
    ctx->pc = 0x18168cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4294967104));
    // 0x181690: 0x2c620020
    ctx->pc = 0x181690u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 32));
    // 0x181694: 0x14400010
    ctx->pc = 0x181694u;
    {
        const bool branch_taken_0x181694 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x181698u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x181694) {
            ctx->pc = 0x1816D8u;
            goto label_1816d8;
        }
    }
    ctx->pc = 0x18169Cu;
    // 0x18169c: 0x240200bd
    ctx->pc = 0x18169cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 189));
    // 0x1816a0: 0x14820004
    ctx->pc = 0x1816A0u;
    {
        const bool branch_taken_0x1816a0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x1816A4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 191));
        if (branch_taken_0x1816a0) {
            ctx->pc = 0x1816B4u;
            goto label_1816b4;
        }
    }
    ctx->pc = 0x1816A8u;
    // 0x1816a8: 0x24020002
    ctx->pc = 0x1816a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1816ac: 0x1000000a
    ctx->pc = 0x1816ACu;
    {
        const bool branch_taken_0x1816ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1816B0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1816ac) {
            ctx->pc = 0x1816D8u;
            goto label_1816d8;
        }
    }
    ctx->pc = 0x1816B4u;
label_1816b4:
    // 0x1816b4: 0x14820004
    ctx->pc = 0x1816B4u;
    {
        const bool branch_taken_0x1816b4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x1816B8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 190));
        if (branch_taken_0x1816b4) {
            ctx->pc = 0x1816C8u;
            goto label_1816c8;
        }
    }
    ctx->pc = 0x1816BCu;
    // 0x1816bc: 0x24020002
    ctx->pc = 0x1816bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1816c0: 0x10000005
    ctx->pc = 0x1816C0u;
    {
        const bool branch_taken_0x1816c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1816C4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1816c0) {
            ctx->pc = 0x1816D8u;
            goto label_1816d8;
        }
    }
    ctx->pc = 0x1816C8u;
label_1816c8:
    // 0x1816c8: 0x14820002
    ctx->pc = 0x1816C8u;
    {
        const bool branch_taken_0x1816c8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x1816CCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x1816c8) {
            ctx->pc = 0x1816D4u;
            goto label_1816d4;
        }
    }
    ctx->pc = 0x1816D0u;
    // 0x1816d0: 0x24020003
    ctx->pc = 0x1816d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_1816d4:
    // 0x1816d4: 0x182d
    ctx->pc = 0x1816d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1816d8:
    // 0x1816d8: 0xad820004
    ctx->pc = 0x1816d8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 2));
    // 0x1816dc: 0x24020002
    ctx->pc = 0x1816dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1816e0: 0x14e20025
    ctx->pc = 0x1816E0u;
    {
        const bool branch_taken_0x1816e0 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 2));
        ctx->pc = 0x1816E4u;
        WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 3));
        if (branch_taken_0x1816e0) {
            ctx->pc = 0x181778u;
            goto label_181778;
        }
    }
    ctx->pc = 0x1816E8u;
    // 0x1816e8: 0x29420010
    ctx->pc = 0x1816e8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), 16));
    // 0x1816ec: 0x1440001d
    ctx->pc = 0x1816ECu;
    {
        const bool branch_taken_0x1816ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1816F0u;
        SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 11), 16));
        if (branch_taken_0x1816ec) {
            ctx->pc = 0x181764u;
            goto label_181764;
        }
    }
    ctx->pc = 0x1816F4u;
    // 0x1816f4: 0x254afff0
    ctx->pc = 0x1816f4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294967280));
    // 0x1816f8: 0x11400008
    ctx->pc = 0x1816F8u;
    {
        const bool branch_taken_0x1816f8 = (GPR_U32(ctx, 10) == GPR_U32(ctx, 0));
        ctx->pc = 0x1816FCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
        if (branch_taken_0x1816f8) {
            ctx->pc = 0x18171Cu;
            goto label_18171c;
        }
    }
    ctx->pc = 0x181700u;
    // 0x181700: 0x4a1023
    ctx->pc = 0x181700u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x181704: 0x481006
    ctx->pc = 0x181704u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x181708: 0x1625825
    ctx->pc = 0x181708u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x18170c: 0xb1c02
    ctx->pc = 0x18170cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 11), 16));
    // 0x181710: 0xad83000c
    ctx->pc = 0x181710u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 3));
    // 0x181714: 0x10000004
    ctx->pc = 0x181714u;
    {
        const bool branch_taken_0x181714 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x181718u;
        SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 10) & 0x1F));
        if (branch_taken_0x181714) {
            ctx->pc = 0x181728u;
            goto label_181728;
        }
    }
    ctx->pc = 0x18171Cu;
label_18171c:
    // 0x18171c: 0xb1402
    ctx->pc = 0x18171cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 11), 16));
    // 0x181720: 0xad82000c
    ctx->pc = 0x181720u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 2));
    // 0x181724: 0x100582d
    ctx->pc = 0x181724u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_181728:
    // 0x181728: 0x81280000
    ctx->pc = 0x181728u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x18172c: 0x25290001
    ctx->pc = 0x18172cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181730: 0x91220000
    ctx->pc = 0x181730u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181734: 0x84200
    ctx->pc = 0x181734u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x181738: 0x25290001
    ctx->pc = 0x181738u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x18173c: 0x1024025
    ctx->pc = 0x18173cu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x181740: 0x91230000
    ctx->pc = 0x181740u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181744: 0x25290001
    ctx->pc = 0x181744u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181748: 0x84200
    ctx->pc = 0x181748u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x18174c: 0x91220000
    ctx->pc = 0x18174cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181750: 0x1034025
    ctx->pc = 0x181750u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x181754: 0x84200
    ctx->pc = 0x181754u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x181758: 0x25290001
    ctx->pc = 0x181758u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x18175c: 0x10000004
    ctx->pc = 0x18175Cu;
    {
        const bool branch_taken_0x18175c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x181760u;
        SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        if (branch_taken_0x18175c) {
            ctx->pc = 0x181770u;
            goto label_181770;
        }
    }
    ctx->pc = 0x181764u;
label_181764:
    // 0x181764: 0x254a0010
    ctx->pc = 0x181764u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 16));
    // 0x181768: 0xad82000c
    ctx->pc = 0x181768u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 2));
    // 0x18176c: 0xb5c00
    ctx->pc = 0x18176cu;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), 16));
label_181770:
    // 0x181770: 0x10000019
    ctx->pc = 0x181770u;
    {
        const bool branch_taken_0x181770 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x181774u;
        SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x181770) {
            ctx->pc = 0x1817D8u;
            goto label_1817d8;
        }
    }
    ctx->pc = 0x181778u;
label_181778:
    // 0x181778: 0x11400006
    ctx->pc = 0x181778u;
    {
        const bool branch_taken_0x181778 = (GPR_U32(ctx, 10) == GPR_U32(ctx, 0));
        ctx->pc = 0x18177Cu;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 10)));
        if (branch_taken_0x181778) {
            ctx->pc = 0x181794u;
            goto label_181794;
        }
    }
    ctx->pc = 0x181780u;
    // 0x181780: 0x481006
    ctx->pc = 0x181780u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x181784: 0x1621025
    ctx->pc = 0x181784u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x181788: 0xad82000c
    ctx->pc = 0x181788u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 2));
    // 0x18178c: 0x10000003
    ctx->pc = 0x18178Cu;
    {
        const bool branch_taken_0x18178c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x181790u;
        SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 10) & 0x1F));
        if (branch_taken_0x18178c) {
            ctx->pc = 0x18179Cu;
            goto label_18179c;
        }
    }
    ctx->pc = 0x181794u;
label_181794:
    // 0x181794: 0xad8b000c
    ctx->pc = 0x181794u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 11));
    // 0x181798: 0x100582d
    ctx->pc = 0x181798u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_18179c:
    // 0x18179c: 0x81280000
    ctx->pc = 0x18179cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1817a0: 0x240e0008
    ctx->pc = 0x1817a0u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1817a4: 0x25290001
    ctx->pc = 0x1817a4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x1817a8: 0x91220000
    ctx->pc = 0x1817a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1817ac: 0x84200
    ctx->pc = 0x1817acu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x1817b0: 0x25290001
    ctx->pc = 0x1817b0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x1817b4: 0x1024025
    ctx->pc = 0x1817b4u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1817b8: 0x91230000
    ctx->pc = 0x1817b8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1817bc: 0x25290001
    ctx->pc = 0x1817bcu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x1817c0: 0x84200
    ctx->pc = 0x1817c0u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x1817c4: 0x91220000
    ctx->pc = 0x1817c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1817c8: 0x1034025
    ctx->pc = 0x1817c8u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1817cc: 0x84200
    ctx->pc = 0x1817ccu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x1817d0: 0x25290001
    ctx->pc = 0x1817d0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x1817d4: 0x1024025
    ctx->pc = 0x1817d4u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_1817d8:
    // 0x1817d8: 0x2482ff42
    ctx->pc = 0x1817d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967106));
    // 0x1817dc: 0x2c420002
    ctx->pc = 0x1817dcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x1817e0: 0x10400005
    ctx->pc = 0x1817E0u;
    {
        const bool branch_taken_0x1817e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1817E4u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 56));
        if (branch_taken_0x1817e0) {
            ctx->pc = 0x1817F8u;
            goto label_1817f8;
        }
    }
    ctx->pc = 0x1817E8u;
    // 0x1817e8: 0xacce0000
    ctx->pc = 0x1817e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 14));
    // 0x1817ec: 0x8d82000c
    ctx->pc = 0x1817ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x1817f0: 0x3e00008
    ctx->pc = 0x1817F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1817F4u;
        WRITE32(ADD32(GPR_U32(ctx, 12), 28), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x181624u: goto label_181624;
            case 0x18162Cu: goto label_18162c;
            case 0x181668u: goto label_181668;
            case 0x181674u: goto label_181674;
            case 0x18168Cu: goto label_18168c;
            case 0x1816B4u: goto label_1816b4;
            case 0x1816C8u: goto label_1816c8;
            case 0x1816D4u: goto label_1816d4;
            case 0x1816D8u: goto label_1816d8;
            case 0x18171Cu: goto label_18171c;
            case 0x181728u: goto label_181728;
            case 0x181764u: goto label_181764;
            case 0x181770u: goto label_181770;
            case 0x181778u: goto label_181778;
            case 0x181794u: goto label_181794;
            case 0x18179Cu: goto label_18179c;
            case 0x1817D8u: goto label_1817d8;
            case 0x1817F8u: goto label_1817f8;
            case 0x181800u: goto label_181800;
            case 0x181850u: goto label_181850;
            case 0x181868u: goto label_181868;
            case 0x181888u: goto label_181888;
            case 0x1818E4u: goto label_1818e4;
            case 0x181934u: goto label_181934;
            case 0x18193Cu: goto label_18193c;
            case 0x18196Cu: goto label_18196c;
            case 0x181970u: goto label_181970;
            case 0x1819ACu: goto label_1819ac;
            case 0x1819B4u: goto label_1819b4;
            case 0x1819C8u: goto label_1819c8;
            case 0x1819E0u: goto label_1819e0;
            case 0x181A3Cu: goto label_181a3c;
            case 0x181A6Cu: goto label_181a6c;
            case 0x181A70u: goto label_181a70;
            case 0x181AACu: goto label_181aac;
            case 0x181AB4u: goto label_181ab4;
            case 0x181B04u: goto label_181b04;
            case 0x181B34u: goto label_181b34;
            case 0x181B38u: goto label_181b38;
            case 0x181B74u: goto label_181b74;
            case 0x181B7Cu: goto label_181b7c;
            case 0x181BCCu: goto label_181bcc;
            case 0x181BF4u: goto label_181bf4;
            case 0x181BFCu: goto label_181bfc;
            case 0x181C00u: goto label_181c00;
            case 0x181C18u: goto label_181c18;
            case 0x181C38u: goto label_181c38;
            case 0x181C90u: goto label_181c90;
            case 0x181CC0u: goto label_181cc0;
            case 0x181CC4u: goto label_181cc4;
            case 0x181D00u: goto label_181d00;
            case 0x181D08u: goto label_181d08;
            case 0x181D58u: goto label_181d58;
            case 0x181D88u: goto label_181d88;
            case 0x181D8Cu: goto label_181d8c;
            case 0x181DC8u: goto label_181dc8;
            case 0x181DD0u: goto label_181dd0;
            case 0x181E20u: goto label_181e20;
            case 0x181E50u: goto label_181e50;
            case 0x181E54u: goto label_181e54;
            case 0x181E90u: goto label_181e90;
            case 0x181E98u: goto label_181e98;
            case 0x181EE8u: goto label_181ee8;
            case 0x181F50u: goto label_181f50;
            case 0x181F54u: goto label_181f54;
            case 0x181F84u: goto label_181f84;
            case 0x181F88u: goto label_181f88;
            case 0x181FC4u: goto label_181fc4;
            case 0x181FCCu: goto label_181fcc;
            case 0x18201Cu: goto label_18201c;
            case 0x18204Cu: goto label_18204c;
            case 0x182050u: goto label_182050;
            case 0x18208Cu: goto label_18208c;
            case 0x182094u: goto label_182094;
            case 0x1820E4u: goto label_1820e4;
            case 0x18210Cu: goto label_18210c;
            case 0x182114u: goto label_182114;
            case 0x182118u: goto label_182118;
            case 0x182130u: goto label_182130;
            case 0x182148u: goto label_182148;
            case 0x18215Cu: goto label_18215c;
            case 0x182164u: goto label_182164;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1817F8u;
label_1817f8:
    // 0x1817f8: 0x10000015
    ctx->pc = 0x1817F8u;
    {
        const bool branch_taken_0x1817f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1817FCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 255));
        if (branch_taken_0x1817f8) {
            ctx->pc = 0x181850u;
            goto label_181850;
        }
    }
    ctx->pc = 0x181800u;
label_181800:
    // 0x181800: 0x254a0008
    ctx->pc = 0x181800u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 8));
    // 0x181804: 0x29420020
    ctx->pc = 0x181804u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), 32));
    // 0x181808: 0x14400011
    ctx->pc = 0x181808u;
    {
        const bool branch_taken_0x181808 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x18180Cu;
        SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), 8));
        if (branch_taken_0x181808) {
            ctx->pc = 0x181850u;
            goto label_181850;
        }
    }
    ctx->pc = 0x181810u;
    // 0x181810: 0x254affe0
    ctx->pc = 0x181810u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294967264));
    // 0x181814: 0x1485804
    ctx->pc = 0x181814u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 10) & 0x1F));
    // 0x181818: 0x81280000
    ctx->pc = 0x181818u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x18181c: 0x25290001
    ctx->pc = 0x18181cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181820: 0x91220000
    ctx->pc = 0x181820u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181824: 0x84200
    ctx->pc = 0x181824u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x181828: 0x25290001
    ctx->pc = 0x181828u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x18182c: 0x1024025
    ctx->pc = 0x18182cu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x181830: 0x91230000
    ctx->pc = 0x181830u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181834: 0x25290001
    ctx->pc = 0x181834u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181838: 0x84200
    ctx->pc = 0x181838u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x18183c: 0x91220000
    ctx->pc = 0x18183cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181840: 0x1034025
    ctx->pc = 0x181840u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x181844: 0x84200
    ctx->pc = 0x181844u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x181848: 0x25290001
    ctx->pc = 0x181848u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x18184c: 0x1024025
    ctx->pc = 0x18184cu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_181850:
    // 0x181850: 0x29420019
    ctx->pc = 0x181850u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), 25));
    // 0x181854: 0x14400004
    ctx->pc = 0x181854u;
    {
        const bool branch_taken_0x181854 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x181858u;
        SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 11), 24));
        if (branch_taken_0x181854) {
            ctx->pc = 0x181868u;
            goto label_181868;
        }
    }
    ctx->pc = 0x18185Cu;
    // 0x18185c: 0xea1023
    ctx->pc = 0x18185cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x181860: 0x481006
    ctx->pc = 0x181860u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x181864: 0x621825
    ctx->pc = 0x181864u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_181868:
    // 0x181868: 0x1064ffe5
    ctx->pc = 0x181868u;
    {
        const bool branch_taken_0x181868 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        ctx->pc = 0x18186Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), 31));
        if (branch_taken_0x181868) {
            ctx->pc = 0x181800u;
            goto label_181800;
        }
    }
    ctx->pc = 0x181870u;
    // 0x181870: 0x14400005
    ctx->pc = 0x181870u;
    {
        const bool branch_taken_0x181870 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x181874u;
        SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 11), 30));
        if (branch_taken_0x181870) {
            ctx->pc = 0x181888u;
            goto label_181888;
        }
    }
    ctx->pc = 0x181878u;
    // 0x181878: 0x2402003e
    ctx->pc = 0x181878u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 62));
    // 0x18187c: 0x4a1023
    ctx->pc = 0x18187cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x181880: 0x481006
    ctx->pc = 0x181880u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x181884: 0x621825
    ctx->pc = 0x181884u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_181888:
    // 0x181888: 0x24020001
    ctx->pc = 0x181888u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18188c: 0x1462004e
    ctx->pc = 0x18188Cu;
    {
        const bool branch_taken_0x18188c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x181890u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), 29));
        if (branch_taken_0x18188c) {
            ctx->pc = 0x1819C8u;
            goto label_1819c8;
        }
    }
    ctx->pc = 0x181894u;
    // 0x181894: 0x254a0002
    ctx->pc = 0x181894u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 2));
    // 0x181898: 0x29420020
    ctx->pc = 0x181898u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), 32));
    // 0x18189c: 0x14400011
    ctx->pc = 0x18189Cu;
    {
        const bool branch_taken_0x18189c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1818A0u;
        SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), 2));
        if (branch_taken_0x18189c) {
            ctx->pc = 0x1818E4u;
            goto label_1818e4;
        }
    }
    ctx->pc = 0x1818A4u;
    // 0x1818a4: 0x254affe0
    ctx->pc = 0x1818a4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294967264));
    // 0x1818a8: 0x1485804
    ctx->pc = 0x1818a8u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 10) & 0x1F));
    // 0x1818ac: 0x81280000
    ctx->pc = 0x1818acu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1818b0: 0x25290001
    ctx->pc = 0x1818b0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x1818b4: 0x91220000
    ctx->pc = 0x1818b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1818b8: 0x84200
    ctx->pc = 0x1818b8u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x1818bc: 0x25290001
    ctx->pc = 0x1818bcu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x1818c0: 0x1024025
    ctx->pc = 0x1818c0u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1818c4: 0x91230000
    ctx->pc = 0x1818c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1818c8: 0x25290001
    ctx->pc = 0x1818c8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x1818cc: 0x84200
    ctx->pc = 0x1818ccu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x1818d0: 0x91220000
    ctx->pc = 0x1818d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1818d4: 0x1034025
    ctx->pc = 0x1818d4u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1818d8: 0x84200
    ctx->pc = 0x1818d8u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x1818dc: 0x25290001
    ctx->pc = 0x1818dcu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x1818e0: 0x1024025
    ctx->pc = 0x1818e0u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_1818e4:
    // 0x1818e4: 0x2402001f
    ctx->pc = 0x1818e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 31));
    // 0x1818e8: 0x15420012
    ctx->pc = 0x1818E8u;
    {
        const bool branch_taken_0x1818e8 = (GPR_U32(ctx, 10) != GPR_U32(ctx, 2));
        ctx->pc = 0x1818ECu;
        SET_GPR_U32(ctx, 7, SRL32(GPR_U32(ctx, 11), 31));
        if (branch_taken_0x1818e8) {
            ctx->pc = 0x181934u;
            goto label_181934;
        }
    }
    ctx->pc = 0x1818F0u;
    // 0x1818f0: 0x100582d
    ctx->pc = 0x1818f0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1818f4: 0x502d
    ctx->pc = 0x1818f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1818f8: 0x81280000
    ctx->pc = 0x1818f8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1818fc: 0x25290001
    ctx->pc = 0x1818fcu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181900: 0x91220000
    ctx->pc = 0x181900u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181904: 0x84200
    ctx->pc = 0x181904u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x181908: 0x25290001
    ctx->pc = 0x181908u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x18190c: 0x1024025
    ctx->pc = 0x18190cu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x181910: 0x91230000
    ctx->pc = 0x181910u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181914: 0x25290001
    ctx->pc = 0x181914u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181918: 0x84200
    ctx->pc = 0x181918u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x18191c: 0x91220000
    ctx->pc = 0x18191cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181920: 0x1034025
    ctx->pc = 0x181920u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x181924: 0x84200
    ctx->pc = 0x181924u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x181928: 0x25290001
    ctx->pc = 0x181928u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x18192c: 0x10000003
    ctx->pc = 0x18192Cu;
    {
        const bool branch_taken_0x18192c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x181930u;
        SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        if (branch_taken_0x18192c) {
            ctx->pc = 0x18193Cu;
            goto label_18193c;
        }
    }
    ctx->pc = 0x181934u;
label_181934:
    // 0x181934: 0x254a0001
    ctx->pc = 0x181934u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
    // 0x181938: 0xb5840
    ctx->pc = 0x181938u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), 1));
label_18193c:
    // 0x18193c: 0x29420013
    ctx->pc = 0x18193cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), 19));
    // 0x181940: 0x1440001a
    ctx->pc = 0x181940u;
    {
        const bool branch_taken_0x181940 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x181944u;
        SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 11), 19));
        if (branch_taken_0x181940) {
            ctx->pc = 0x1819ACu;
            goto label_1819ac;
        }
    }
    ctx->pc = 0x181948u;
    // 0x181948: 0x254affed
    ctx->pc = 0x181948u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294967277));
    // 0x18194c: 0x11400007
    ctx->pc = 0x18194Cu;
    {
        const bool branch_taken_0x18194c = (GPR_U32(ctx, 10) == GPR_U32(ctx, 0));
        ctx->pc = 0x181950u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
        if (branch_taken_0x18194c) {
            ctx->pc = 0x18196Cu;
            goto label_18196c;
        }
    }
    ctx->pc = 0x181954u;
    // 0x181954: 0x4a1023
    ctx->pc = 0x181954u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x181958: 0x481006
    ctx->pc = 0x181958u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x18195c: 0x1625825
    ctx->pc = 0x18195cu;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x181960: 0xb24c2
    ctx->pc = 0x181960u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 11), 19));
    // 0x181964: 0x10000002
    ctx->pc = 0x181964u;
    {
        const bool branch_taken_0x181964 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x181968u;
        SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 10) & 0x1F));
        if (branch_taken_0x181964) {
            ctx->pc = 0x181970u;
            goto label_181970;
        }
    }
    ctx->pc = 0x18196Cu;
label_18196c:
    // 0x18196c: 0x100582d
    ctx->pc = 0x18196cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_181970:
    // 0x181970: 0x81280000
    ctx->pc = 0x181970u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181974: 0x25290001
    ctx->pc = 0x181974u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181978: 0x91220000
    ctx->pc = 0x181978u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x18197c: 0x84200
    ctx->pc = 0x18197cu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x181980: 0x25290001
    ctx->pc = 0x181980u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181984: 0x1024025
    ctx->pc = 0x181984u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x181988: 0x91230000
    ctx->pc = 0x181988u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x18198c: 0x25290001
    ctx->pc = 0x18198cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181990: 0x84200
    ctx->pc = 0x181990u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x181994: 0x91220000
    ctx->pc = 0x181994u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181998: 0x1034025
    ctx->pc = 0x181998u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x18199c: 0x84200
    ctx->pc = 0x18199cu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x1819a0: 0x25290001
    ctx->pc = 0x1819a0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x1819a4: 0x10000003
    ctx->pc = 0x1819A4u;
    {
        const bool branch_taken_0x1819a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1819A8u;
        SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        if (branch_taken_0x1819a4) {
            ctx->pc = 0x1819B4u;
            goto label_1819b4;
        }
    }
    ctx->pc = 0x1819ACu;
label_1819ac:
    // 0x1819ac: 0x254a000d
    ctx->pc = 0x1819acu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 13));
    // 0x1819b0: 0xb5b40
    ctx->pc = 0x1819b0u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), 13));
label_1819b4:
    // 0x1819b4: 0x421c0
    ctx->pc = 0x1819b4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 7));
    // 0x1819b8: 0x410c0
    ctx->pc = 0x1819b8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 3));
    // 0x1819bc: 0x47200b
    ctx->pc = 0x1819bcu;
    if (GPR_U32(ctx, 7) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 2));
    // 0x1819c0: 0xad840010
    ctx->pc = 0x1819c0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 16), GPR_U32(ctx, 4));
    // 0x1819c4: 0x2942001d
    ctx->pc = 0x1819c4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), 29));
label_1819c8:
    // 0x1819c8: 0x14400005
    ctx->pc = 0x1819C8u;
    {
        const bool branch_taken_0x1819c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1819CCu;
        SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 11), 28));
        if (branch_taken_0x1819c8) {
            ctx->pc = 0x1819E0u;
            goto label_1819e0;
        }
    }
    ctx->pc = 0x1819D0u;
    // 0x1819d0: 0x2402003c
    ctx->pc = 0x1819d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
    // 0x1819d4: 0x4a1023
    ctx->pc = 0x1819d4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1819d8: 0x481006
    ctx->pc = 0x1819d8u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x1819dc: 0x621825
    ctx->pc = 0x1819dcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1819e0:
    // 0x1819e0: 0x24020002
    ctx->pc = 0x1819e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1819e4: 0x14620094
    ctx->pc = 0x1819E4u;
    {
        const bool branch_taken_0x1819e4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1819E8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1819e4) {
            ctx->pc = 0x181C38u;
            goto label_181c38;
        }
    }
    ctx->pc = 0x1819ECu;
    // 0x1819ec: 0x254a0004
    ctx->pc = 0x1819ecu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4));
    // 0x1819f0: 0x29420020
    ctx->pc = 0x1819f0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), 32));
    // 0x1819f4: 0x14400011
    ctx->pc = 0x1819F4u;
    {
        const bool branch_taken_0x1819f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1819F8u;
        SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), 4));
        if (branch_taken_0x1819f4) {
            ctx->pc = 0x181A3Cu;
            goto label_181a3c;
        }
    }
    ctx->pc = 0x1819FCu;
    // 0x1819fc: 0x254affe0
    ctx->pc = 0x1819fcu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294967264));
    // 0x181a00: 0x1485804
    ctx->pc = 0x181a00u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 10) & 0x1F));
    // 0x181a04: 0x81280000
    ctx->pc = 0x181a04u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181a08: 0x25290001
    ctx->pc = 0x181a08u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181a0c: 0x91220000
    ctx->pc = 0x181a0cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181a10: 0x84200
    ctx->pc = 0x181a10u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x181a14: 0x25290001
    ctx->pc = 0x181a14u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181a18: 0x1024025
    ctx->pc = 0x181a18u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x181a1c: 0x91230000
    ctx->pc = 0x181a1cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181a20: 0x25290001
    ctx->pc = 0x181a20u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181a24: 0x84200
    ctx->pc = 0x181a24u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x181a28: 0x91220000
    ctx->pc = 0x181a28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181a2c: 0x1034025
    ctx->pc = 0x181a2cu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x181a30: 0x84200
    ctx->pc = 0x181a30u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x181a34: 0x25290001
    ctx->pc = 0x181a34u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181a38: 0x1024025
    ctx->pc = 0x181a38u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_181a3c:
    // 0x181a3c: 0x2942001d
    ctx->pc = 0x181a3cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), 29));
    // 0x181a40: 0x1440001a
    ctx->pc = 0x181A40u;
    {
        const bool branch_taken_0x181a40 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x181A44u;
        SET_GPR_U32(ctx, 13, SRL32(GPR_U32(ctx, 11), 29));
        if (branch_taken_0x181a40) {
            ctx->pc = 0x181AACu;
            goto label_181aac;
        }
    }
    ctx->pc = 0x181A48u;
    // 0x181a48: 0x254affe3
    ctx->pc = 0x181a48u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294967267));
    // 0x181a4c: 0x11400007
    ctx->pc = 0x181A4Cu;
    {
        const bool branch_taken_0x181a4c = (GPR_U32(ctx, 10) == GPR_U32(ctx, 0));
        ctx->pc = 0x181A50u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x181a4c) {
            ctx->pc = 0x181A6Cu;
            goto label_181a6c;
        }
    }
    ctx->pc = 0x181A54u;
    // 0x181a54: 0x4a1023
    ctx->pc = 0x181a54u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x181a58: 0x481006
    ctx->pc = 0x181a58u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x181a5c: 0x1625825
    ctx->pc = 0x181a5cu;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x181a60: 0xb6f42
    ctx->pc = 0x181a60u;
    SET_GPR_U32(ctx, 13, SRL32(GPR_U32(ctx, 11), 29));
    // 0x181a64: 0x10000002
    ctx->pc = 0x181A64u;
    {
        const bool branch_taken_0x181a64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x181A68u;
        SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 10) & 0x1F));
        if (branch_taken_0x181a64) {
            ctx->pc = 0x181A70u;
            goto label_181a70;
        }
    }
    ctx->pc = 0x181A6Cu;
label_181a6c:
    // 0x181a6c: 0x100582d
    ctx->pc = 0x181a6cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_181a70:
    // 0x181a70: 0x81280000
    ctx->pc = 0x181a70u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181a74: 0x25290001
    ctx->pc = 0x181a74u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181a78: 0x91220000
    ctx->pc = 0x181a78u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181a7c: 0x84200
    ctx->pc = 0x181a7cu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x181a80: 0x25290001
    ctx->pc = 0x181a80u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181a84: 0x1024025
    ctx->pc = 0x181a84u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x181a88: 0x91230000
    ctx->pc = 0x181a88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181a8c: 0x25290001
    ctx->pc = 0x181a8cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181a90: 0x84200
    ctx->pc = 0x181a90u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x181a94: 0x91220000
    ctx->pc = 0x181a94u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181a98: 0x1034025
    ctx->pc = 0x181a98u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x181a9c: 0x84200
    ctx->pc = 0x181a9cu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x181aa0: 0x25290001
    ctx->pc = 0x181aa0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181aa4: 0x10000003
    ctx->pc = 0x181AA4u;
    {
        const bool branch_taken_0x181aa4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x181AA8u;
        SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        if (branch_taken_0x181aa4) {
            ctx->pc = 0x181AB4u;
            goto label_181ab4;
        }
    }
    ctx->pc = 0x181AACu;
label_181aac:
    // 0x181aac: 0x254a0003
    ctx->pc = 0x181aacu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 3));
    // 0x181ab0: 0xb58c0
    ctx->pc = 0x181ab0u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), 3));
label_181ab4:
    // 0x181ab4: 0x254a0001
    ctx->pc = 0x181ab4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
    // 0x181ab8: 0x29420020
    ctx->pc = 0x181ab8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), 32));
    // 0x181abc: 0x14400011
    ctx->pc = 0x181ABCu;
    {
        const bool branch_taken_0x181abc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x181AC0u;
        SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), 1));
        if (branch_taken_0x181abc) {
            ctx->pc = 0x181B04u;
            goto label_181b04;
        }
    }
    ctx->pc = 0x181AC4u;
    // 0x181ac4: 0x254affe0
    ctx->pc = 0x181ac4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294967264));
    // 0x181ac8: 0x1485804
    ctx->pc = 0x181ac8u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 10) & 0x1F));
    // 0x181acc: 0x81280000
    ctx->pc = 0x181accu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181ad0: 0x25290001
    ctx->pc = 0x181ad0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181ad4: 0x91220000
    ctx->pc = 0x181ad4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181ad8: 0x84200
    ctx->pc = 0x181ad8u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x181adc: 0x25290001
    ctx->pc = 0x181adcu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181ae0: 0x1024025
    ctx->pc = 0x181ae0u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x181ae4: 0x91230000
    ctx->pc = 0x181ae4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181ae8: 0x25290001
    ctx->pc = 0x181ae8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181aec: 0x84200
    ctx->pc = 0x181aecu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x181af0: 0x91220000
    ctx->pc = 0x181af0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181af4: 0x1034025
    ctx->pc = 0x181af4u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x181af8: 0x84200
    ctx->pc = 0x181af8u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x181afc: 0x25290001
    ctx->pc = 0x181afcu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181b00: 0x1024025
    ctx->pc = 0x181b00u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_181b04:
    // 0x181b04: 0x29420011
    ctx->pc = 0x181b04u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), 17));
    // 0x181b08: 0x1440001a
    ctx->pc = 0x181B08u;
    {
        const bool branch_taken_0x181b08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x181B0Cu;
        SET_GPR_U32(ctx, 7, SRL32(GPR_U32(ctx, 11), 17));
        if (branch_taken_0x181b08) {
            ctx->pc = 0x181B74u;
            goto label_181b74;
        }
    }
    ctx->pc = 0x181B10u;
    // 0x181b10: 0x254affef
    ctx->pc = 0x181b10u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294967279));
    // 0x181b14: 0x11400007
    ctx->pc = 0x181B14u;
    {
        const bool branch_taken_0x181b14 = (GPR_U32(ctx, 10) == GPR_U32(ctx, 0));
        ctx->pc = 0x181B18u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
        if (branch_taken_0x181b14) {
            ctx->pc = 0x181B34u;
            goto label_181b34;
        }
    }
    ctx->pc = 0x181B1Cu;
    // 0x181b1c: 0x4a1023
    ctx->pc = 0x181b1cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x181b20: 0x481006
    ctx->pc = 0x181b20u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x181b24: 0x1625825
    ctx->pc = 0x181b24u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x181b28: 0xb3c42
    ctx->pc = 0x181b28u;
    SET_GPR_U32(ctx, 7, SRL32(GPR_U32(ctx, 11), 17));
    // 0x181b2c: 0x10000002
    ctx->pc = 0x181B2Cu;
    {
        const bool branch_taken_0x181b2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x181B30u;
        SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 10) & 0x1F));
        if (branch_taken_0x181b2c) {
            ctx->pc = 0x181B38u;
            goto label_181b38;
        }
    }
    ctx->pc = 0x181B34u;
label_181b34:
    // 0x181b34: 0x100582d
    ctx->pc = 0x181b34u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_181b38:
    // 0x181b38: 0x81280000
    ctx->pc = 0x181b38u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181b3c: 0x25290001
    ctx->pc = 0x181b3cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181b40: 0x91220000
    ctx->pc = 0x181b40u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181b44: 0x84200
    ctx->pc = 0x181b44u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x181b48: 0x25290001
    ctx->pc = 0x181b48u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181b4c: 0x1024025
    ctx->pc = 0x181b4cu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x181b50: 0x91230000
    ctx->pc = 0x181b50u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181b54: 0x25290001
    ctx->pc = 0x181b54u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181b58: 0x84200
    ctx->pc = 0x181b58u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x181b5c: 0x91220000
    ctx->pc = 0x181b5cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181b60: 0x1034025
    ctx->pc = 0x181b60u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x181b64: 0x84200
    ctx->pc = 0x181b64u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x181b68: 0x25290001
    ctx->pc = 0x181b68u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181b6c: 0x10000003
    ctx->pc = 0x181B6Cu;
    {
        const bool branch_taken_0x181b6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x181B70u;
        SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        if (branch_taken_0x181b6c) {
            ctx->pc = 0x181B7Cu;
            goto label_181b7c;
        }
    }
    ctx->pc = 0x181B74u;
label_181b74:
    // 0x181b74: 0x254a000f
    ctx->pc = 0x181b74u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 15));
    // 0x181b78: 0xb5bc0
    ctx->pc = 0x181b78u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), 15));
label_181b7c:
    // 0x181b7c: 0x254a0001
    ctx->pc = 0x181b7cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
    // 0x181b80: 0x29420020
    ctx->pc = 0x181b80u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), 32));
    // 0x181b84: 0x14400011
    ctx->pc = 0x181B84u;
    {
        const bool branch_taken_0x181b84 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x181B88u;
        SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), 1));
        if (branch_taken_0x181b84) {
            ctx->pc = 0x181BCCu;
            goto label_181bcc;
        }
    }
    ctx->pc = 0x181B8Cu;
    // 0x181b8c: 0x254affe0
    ctx->pc = 0x181b8cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294967264));
    // 0x181b90: 0x1485804
    ctx->pc = 0x181b90u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 10) & 0x1F));
    // 0x181b94: 0x81280000
    ctx->pc = 0x181b94u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181b98: 0x25290001
    ctx->pc = 0x181b98u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181b9c: 0x91220000
    ctx->pc = 0x181b9cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181ba0: 0x84200
    ctx->pc = 0x181ba0u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x181ba4: 0x25290001
    ctx->pc = 0x181ba4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181ba8: 0x1024025
    ctx->pc = 0x181ba8u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x181bac: 0x91230000
    ctx->pc = 0x181bacu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181bb0: 0x25290001
    ctx->pc = 0x181bb0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181bb4: 0x84200
    ctx->pc = 0x181bb4u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x181bb8: 0x91220000
    ctx->pc = 0x181bb8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181bbc: 0x1034025
    ctx->pc = 0x181bbcu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x181bc0: 0x84200
    ctx->pc = 0x181bc0u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x181bc4: 0x25290001
    ctx->pc = 0x181bc4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181bc8: 0x1024025
    ctx->pc = 0x181bc8u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_181bcc:
    // 0x181bcc: 0x29420011
    ctx->pc = 0x181bccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), 17));
    // 0x181bd0: 0x1440000a
    ctx->pc = 0x181BD0u;
    {
        const bool branch_taken_0x181bd0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x181BD4u;
        SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 11), 17));
        if (branch_taken_0x181bd0) {
            ctx->pc = 0x181BFCu;
            goto label_181bfc;
        }
    }
    ctx->pc = 0x181BD8u;
    // 0x181bd8: 0x254affef
    ctx->pc = 0x181bd8u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294967279));
    // 0x181bdc: 0x11400005
    ctx->pc = 0x181BDCu;
    {
        const bool branch_taken_0x181bdc = (GPR_U32(ctx, 10) == GPR_U32(ctx, 0));
        ctx->pc = 0x181BE0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
        if (branch_taken_0x181bdc) {
            ctx->pc = 0x181BF4u;
            goto label_181bf4;
        }
    }
    ctx->pc = 0x181BE4u;
    // 0x181be4: 0x4a1023
    ctx->pc = 0x181be4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x181be8: 0x481006
    ctx->pc = 0x181be8u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x181bec: 0x1625825
    ctx->pc = 0x181becu;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x181bf0: 0xb2442
    ctx->pc = 0x181bf0u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 11), 17));
label_181bf4:
    // 0x181bf4: 0x10000002
    ctx->pc = 0x181BF4u;
    {
        const bool branch_taken_0x181bf4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x181BF8u;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4));
        if (branch_taken_0x181bf4) {
            ctx->pc = 0x181C00u;
            goto label_181c00;
        }
    }
    ctx->pc = 0x181BFCu;
label_181bfc:
    // 0x181bfc: 0x254a000f
    ctx->pc = 0x181bfcu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 15));
label_181c00:
    // 0x181c00: 0x254a0001
    ctx->pc = 0x181c00u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
    // 0x181c04: 0x29420020
    ctx->pc = 0x181c04u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), 32));
    // 0x181c08: 0x14400003
    ctx->pc = 0x181C08u;
    {
        const bool branch_taken_0x181c08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x181C0Cu;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 13));
        if (branch_taken_0x181c08) {
            ctx->pc = 0x181C18u;
            goto label_181c18;
        }
    }
    ctx->pc = 0x181C10u;
    // 0x181c10: 0x254affe0
    ctx->pc = 0x181c10u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294967264));
    // 0x181c14: 0x25290004
    ctx->pc = 0x181c14u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4));
label_181c18:
    // 0x181c18: 0xd1700
    ctx->pc = 0x181c18u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 13), 28));
    // 0x181c1c: 0x431025
    ctx->pc = 0x181c1cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x181c20: 0x42082
    ctx->pc = 0x181c20u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 4), 2));
    // 0x181c24: 0x441025
    ctx->pc = 0x181c24u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x181c28: 0x2403ffff
    ctx->pc = 0x181c28u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x181c2c: 0xad820014
    ctx->pc = 0x181c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 20), GPR_U32(ctx, 2));
    // 0x181c30: 0x1000014c
    ctx->pc = 0x181C30u;
    {
        const bool branch_taken_0x181c30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x181C34u;
        WRITE32(ADD32(GPR_U32(ctx, 12), 24), GPR_U32(ctx, 3));
        if (branch_taken_0x181c30) {
            ctx->pc = 0x182164u;
            goto label_182164;
        }
    }
    ctx->pc = 0x181C38u;
label_181c38:
    // 0x181c38: 0x54620143
    ctx->pc = 0x181C38u;
    {
        const bool branch_taken_0x181c38 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x181c38) {
            ctx->pc = 0x181C3Cu;
            SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 8));
            ctx->pc = 0x182148u;
            goto label_182148;
        }
    }
    ctx->pc = 0x181C40u;
    // 0x181c40: 0x254a0004
    ctx->pc = 0x181c40u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4));
    // 0x181c44: 0x29420020
    ctx->pc = 0x181c44u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), 32));
    // 0x181c48: 0x14400011
    ctx->pc = 0x181C48u;
    {
        const bool branch_taken_0x181c48 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x181C4Cu;
        SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), 4));
        if (branch_taken_0x181c48) {
            ctx->pc = 0x181C90u;
            goto label_181c90;
        }
    }
    ctx->pc = 0x181C50u;
    // 0x181c50: 0x254affe0
    ctx->pc = 0x181c50u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294967264));
    // 0x181c54: 0x1485804
    ctx->pc = 0x181c54u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 10) & 0x1F));
    // 0x181c58: 0x81280000
    ctx->pc = 0x181c58u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181c5c: 0x25290001
    ctx->pc = 0x181c5cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181c60: 0x91220000
    ctx->pc = 0x181c60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181c64: 0x84200
    ctx->pc = 0x181c64u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x181c68: 0x25290001
    ctx->pc = 0x181c68u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181c6c: 0x1024025
    ctx->pc = 0x181c6cu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x181c70: 0x91230000
    ctx->pc = 0x181c70u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181c74: 0x25290001
    ctx->pc = 0x181c74u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181c78: 0x84200
    ctx->pc = 0x181c78u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x181c7c: 0x91220000
    ctx->pc = 0x181c7cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181c80: 0x1034025
    ctx->pc = 0x181c80u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x181c84: 0x84200
    ctx->pc = 0x181c84u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x181c88: 0x25290001
    ctx->pc = 0x181c88u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181c8c: 0x1024025
    ctx->pc = 0x181c8cu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_181c90:
    // 0x181c90: 0x2942001d
    ctx->pc = 0x181c90u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), 29));
    // 0x181c94: 0x1440001a
    ctx->pc = 0x181C94u;
    {
        const bool branch_taken_0x181c94 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x181C98u;
        SET_GPR_U32(ctx, 13, SRL32(GPR_U32(ctx, 11), 29));
        if (branch_taken_0x181c94) {
            ctx->pc = 0x181D00u;
            goto label_181d00;
        }
    }
    ctx->pc = 0x181C9Cu;
    // 0x181c9c: 0x254affe3
    ctx->pc = 0x181c9cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294967267));
    // 0x181ca0: 0x11400007
    ctx->pc = 0x181CA0u;
    {
        const bool branch_taken_0x181ca0 = (GPR_U32(ctx, 10) == GPR_U32(ctx, 0));
        ctx->pc = 0x181CA4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x181ca0) {
            ctx->pc = 0x181CC0u;
            goto label_181cc0;
        }
    }
    ctx->pc = 0x181CA8u;
    // 0x181ca8: 0x4a1023
    ctx->pc = 0x181ca8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x181cac: 0x481006
    ctx->pc = 0x181cacu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x181cb0: 0x1625825
    ctx->pc = 0x181cb0u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x181cb4: 0xb6f42
    ctx->pc = 0x181cb4u;
    SET_GPR_U32(ctx, 13, SRL32(GPR_U32(ctx, 11), 29));
    // 0x181cb8: 0x10000002
    ctx->pc = 0x181CB8u;
    {
        const bool branch_taken_0x181cb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x181CBCu;
        SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 10) & 0x1F));
        if (branch_taken_0x181cb8) {
            ctx->pc = 0x181CC4u;
            goto label_181cc4;
        }
    }
    ctx->pc = 0x181CC0u;
label_181cc0:
    // 0x181cc0: 0x100582d
    ctx->pc = 0x181cc0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_181cc4:
    // 0x181cc4: 0x81280000
    ctx->pc = 0x181cc4u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181cc8: 0x25290001
    ctx->pc = 0x181cc8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181ccc: 0x91220000
    ctx->pc = 0x181cccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181cd0: 0x84200
    ctx->pc = 0x181cd0u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x181cd4: 0x25290001
    ctx->pc = 0x181cd4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181cd8: 0x1024025
    ctx->pc = 0x181cd8u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x181cdc: 0x91230000
    ctx->pc = 0x181cdcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181ce0: 0x25290001
    ctx->pc = 0x181ce0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181ce4: 0x84200
    ctx->pc = 0x181ce4u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x181ce8: 0x91220000
    ctx->pc = 0x181ce8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181cec: 0x1034025
    ctx->pc = 0x181cecu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x181cf0: 0x84200
    ctx->pc = 0x181cf0u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x181cf4: 0x25290001
    ctx->pc = 0x181cf4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181cf8: 0x10000003
    ctx->pc = 0x181CF8u;
    {
        const bool branch_taken_0x181cf8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x181CFCu;
        SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        if (branch_taken_0x181cf8) {
            ctx->pc = 0x181D08u;
            goto label_181d08;
        }
    }
    ctx->pc = 0x181D00u;
label_181d00:
    // 0x181d00: 0x254a0003
    ctx->pc = 0x181d00u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 3));
    // 0x181d04: 0xb58c0
    ctx->pc = 0x181d04u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), 3));
label_181d08:
    // 0x181d08: 0x254a0001
    ctx->pc = 0x181d08u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
    // 0x181d0c: 0x29420020
    ctx->pc = 0x181d0cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), 32));
    // 0x181d10: 0x14400011
    ctx->pc = 0x181D10u;
    {
        const bool branch_taken_0x181d10 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x181D14u;
        SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), 1));
        if (branch_taken_0x181d10) {
            ctx->pc = 0x181D58u;
            goto label_181d58;
        }
    }
    ctx->pc = 0x181D18u;
    // 0x181d18: 0x254affe0
    ctx->pc = 0x181d18u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294967264));
    // 0x181d1c: 0x1485804
    ctx->pc = 0x181d1cu;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 10) & 0x1F));
    // 0x181d20: 0x81280000
    ctx->pc = 0x181d20u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181d24: 0x25290001
    ctx->pc = 0x181d24u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181d28: 0x91220000
    ctx->pc = 0x181d28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181d2c: 0x84200
    ctx->pc = 0x181d2cu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x181d30: 0x25290001
    ctx->pc = 0x181d30u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181d34: 0x1024025
    ctx->pc = 0x181d34u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x181d38: 0x91230000
    ctx->pc = 0x181d38u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181d3c: 0x25290001
    ctx->pc = 0x181d3cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181d40: 0x84200
    ctx->pc = 0x181d40u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x181d44: 0x91220000
    ctx->pc = 0x181d44u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181d48: 0x1034025
    ctx->pc = 0x181d48u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x181d4c: 0x84200
    ctx->pc = 0x181d4cu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x181d50: 0x25290001
    ctx->pc = 0x181d50u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181d54: 0x1024025
    ctx->pc = 0x181d54u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_181d58:
    // 0x181d58: 0x29420011
    ctx->pc = 0x181d58u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), 17));
    // 0x181d5c: 0x1440001a
    ctx->pc = 0x181D5Cu;
    {
        const bool branch_taken_0x181d5c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x181D60u;
        SET_GPR_U32(ctx, 7, SRL32(GPR_U32(ctx, 11), 17));
        if (branch_taken_0x181d5c) {
            ctx->pc = 0x181DC8u;
            goto label_181dc8;
        }
    }
    ctx->pc = 0x181D64u;
    // 0x181d64: 0x254affef
    ctx->pc = 0x181d64u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294967279));
    // 0x181d68: 0x11400007
    ctx->pc = 0x181D68u;
    {
        const bool branch_taken_0x181d68 = (GPR_U32(ctx, 10) == GPR_U32(ctx, 0));
        ctx->pc = 0x181D6Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
        if (branch_taken_0x181d68) {
            ctx->pc = 0x181D88u;
            goto label_181d88;
        }
    }
    ctx->pc = 0x181D70u;
    // 0x181d70: 0x4a1023
    ctx->pc = 0x181d70u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x181d74: 0x481006
    ctx->pc = 0x181d74u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x181d78: 0x1625825
    ctx->pc = 0x181d78u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x181d7c: 0xb3c42
    ctx->pc = 0x181d7cu;
    SET_GPR_U32(ctx, 7, SRL32(GPR_U32(ctx, 11), 17));
    // 0x181d80: 0x10000002
    ctx->pc = 0x181D80u;
    {
        const bool branch_taken_0x181d80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x181D84u;
        SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 10) & 0x1F));
        if (branch_taken_0x181d80) {
            ctx->pc = 0x181D8Cu;
            goto label_181d8c;
        }
    }
    ctx->pc = 0x181D88u;
label_181d88:
    // 0x181d88: 0x100582d
    ctx->pc = 0x181d88u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_181d8c:
    // 0x181d8c: 0x81280000
    ctx->pc = 0x181d8cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181d90: 0x25290001
    ctx->pc = 0x181d90u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181d94: 0x91220000
    ctx->pc = 0x181d94u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181d98: 0x84200
    ctx->pc = 0x181d98u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x181d9c: 0x25290001
    ctx->pc = 0x181d9cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181da0: 0x1024025
    ctx->pc = 0x181da0u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x181da4: 0x91230000
    ctx->pc = 0x181da4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181da8: 0x25290001
    ctx->pc = 0x181da8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181dac: 0x84200
    ctx->pc = 0x181dacu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x181db0: 0x91220000
    ctx->pc = 0x181db0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181db4: 0x1034025
    ctx->pc = 0x181db4u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x181db8: 0x84200
    ctx->pc = 0x181db8u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x181dbc: 0x25290001
    ctx->pc = 0x181dbcu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181dc0: 0x10000003
    ctx->pc = 0x181DC0u;
    {
        const bool branch_taken_0x181dc0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x181DC4u;
        SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        if (branch_taken_0x181dc0) {
            ctx->pc = 0x181DD0u;
            goto label_181dd0;
        }
    }
    ctx->pc = 0x181DC8u;
label_181dc8:
    // 0x181dc8: 0x254a000f
    ctx->pc = 0x181dc8u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 15));
    // 0x181dcc: 0xb5bc0
    ctx->pc = 0x181dccu;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), 15));
label_181dd0:
    // 0x181dd0: 0x254a0001
    ctx->pc = 0x181dd0u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
    // 0x181dd4: 0x29420020
    ctx->pc = 0x181dd4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), 32));
    // 0x181dd8: 0x14400011
    ctx->pc = 0x181DD8u;
    {
        const bool branch_taken_0x181dd8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x181DDCu;
        SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), 1));
        if (branch_taken_0x181dd8) {
            ctx->pc = 0x181E20u;
            goto label_181e20;
        }
    }
    ctx->pc = 0x181DE0u;
    // 0x181de0: 0x254affe0
    ctx->pc = 0x181de0u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294967264));
    // 0x181de4: 0x1485804
    ctx->pc = 0x181de4u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 10) & 0x1F));
    // 0x181de8: 0x81280000
    ctx->pc = 0x181de8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181dec: 0x25290001
    ctx->pc = 0x181decu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181df0: 0x91220000
    ctx->pc = 0x181df0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181df4: 0x84200
    ctx->pc = 0x181df4u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x181df8: 0x25290001
    ctx->pc = 0x181df8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181dfc: 0x1024025
    ctx->pc = 0x181dfcu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x181e00: 0x91230000
    ctx->pc = 0x181e00u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181e04: 0x25290001
    ctx->pc = 0x181e04u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181e08: 0x84200
    ctx->pc = 0x181e08u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x181e0c: 0x91220000
    ctx->pc = 0x181e0cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181e10: 0x1034025
    ctx->pc = 0x181e10u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x181e14: 0x84200
    ctx->pc = 0x181e14u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x181e18: 0x25290001
    ctx->pc = 0x181e18u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181e1c: 0x1024025
    ctx->pc = 0x181e1cu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_181e20:
    // 0x181e20: 0x29420011
    ctx->pc = 0x181e20u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), 17));
    // 0x181e24: 0x1440001a
    ctx->pc = 0x181E24u;
    {
        const bool branch_taken_0x181e24 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x181E28u;
        SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 11), 17));
        if (branch_taken_0x181e24) {
            ctx->pc = 0x181E90u;
            goto label_181e90;
        }
    }
    ctx->pc = 0x181E2Cu;
    // 0x181e2c: 0x254affef
    ctx->pc = 0x181e2cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294967279));
    // 0x181e30: 0x11400007
    ctx->pc = 0x181E30u;
    {
        const bool branch_taken_0x181e30 = (GPR_U32(ctx, 10) == GPR_U32(ctx, 0));
        ctx->pc = 0x181E34u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
        if (branch_taken_0x181e30) {
            ctx->pc = 0x181E50u;
            goto label_181e50;
        }
    }
    ctx->pc = 0x181E38u;
    // 0x181e38: 0x4a1023
    ctx->pc = 0x181e38u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x181e3c: 0x481006
    ctx->pc = 0x181e3cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x181e40: 0x1625825
    ctx->pc = 0x181e40u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x181e44: 0xb2442
    ctx->pc = 0x181e44u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 11), 17));
    // 0x181e48: 0x10000002
    ctx->pc = 0x181E48u;
    {
        const bool branch_taken_0x181e48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x181E4Cu;
        SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 10) & 0x1F));
        if (branch_taken_0x181e48) {
            ctx->pc = 0x181E54u;
            goto label_181e54;
        }
    }
    ctx->pc = 0x181E50u;
label_181e50:
    // 0x181e50: 0x100582d
    ctx->pc = 0x181e50u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_181e54:
    // 0x181e54: 0x81280000
    ctx->pc = 0x181e54u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181e58: 0x25290001
    ctx->pc = 0x181e58u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181e5c: 0x91220000
    ctx->pc = 0x181e5cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181e60: 0x84200
    ctx->pc = 0x181e60u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x181e64: 0x25290001
    ctx->pc = 0x181e64u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181e68: 0x1024025
    ctx->pc = 0x181e68u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x181e6c: 0x91230000
    ctx->pc = 0x181e6cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181e70: 0x25290001
    ctx->pc = 0x181e70u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181e74: 0x84200
    ctx->pc = 0x181e74u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x181e78: 0x91220000
    ctx->pc = 0x181e78u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181e7c: 0x1034025
    ctx->pc = 0x181e7cu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x181e80: 0x84200
    ctx->pc = 0x181e80u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x181e84: 0x25290001
    ctx->pc = 0x181e84u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181e88: 0x10000003
    ctx->pc = 0x181E88u;
    {
        const bool branch_taken_0x181e88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x181E8Cu;
        SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        if (branch_taken_0x181e88) {
            ctx->pc = 0x181E98u;
            goto label_181e98;
        }
    }
    ctx->pc = 0x181E90u;
label_181e90:
    // 0x181e90: 0x254a000f
    ctx->pc = 0x181e90u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 15));
    // 0x181e94: 0xb5bc0
    ctx->pc = 0x181e94u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), 15));
label_181e98:
    // 0x181e98: 0x254a0001
    ctx->pc = 0x181e98u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
    // 0x181e9c: 0x29420020
    ctx->pc = 0x181e9cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), 32));
    // 0x181ea0: 0x14400011
    ctx->pc = 0x181EA0u;
    {
        const bool branch_taken_0x181ea0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x181EA4u;
        SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), 1));
        if (branch_taken_0x181ea0) {
            ctx->pc = 0x181EE8u;
            goto label_181ee8;
        }
    }
    ctx->pc = 0x181EA8u;
    // 0x181ea8: 0x254affe0
    ctx->pc = 0x181ea8u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294967264));
    // 0x181eac: 0x1485804
    ctx->pc = 0x181eacu;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 10) & 0x1F));
    // 0x181eb0: 0x81280000
    ctx->pc = 0x181eb0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181eb4: 0x25290001
    ctx->pc = 0x181eb4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181eb8: 0x91220000
    ctx->pc = 0x181eb8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181ebc: 0x84200
    ctx->pc = 0x181ebcu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x181ec0: 0x25290001
    ctx->pc = 0x181ec0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181ec4: 0x1024025
    ctx->pc = 0x181ec4u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x181ec8: 0x91230000
    ctx->pc = 0x181ec8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181ecc: 0x25290001
    ctx->pc = 0x181eccu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181ed0: 0x84200
    ctx->pc = 0x181ed0u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x181ed4: 0x91220000
    ctx->pc = 0x181ed4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181ed8: 0x1034025
    ctx->pc = 0x181ed8u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x181edc: 0x84200
    ctx->pc = 0x181edcu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x181ee0: 0x25290001
    ctx->pc = 0x181ee0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181ee4: 0x1024025
    ctx->pc = 0x181ee4u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_181ee8:
    // 0x181ee8: 0x71b40
    ctx->pc = 0x181ee8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 13));
    // 0x181eec: 0xd1700
    ctx->pc = 0x181eecu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 13), 28));
    // 0x181ef0: 0x431025
    ctx->pc = 0x181ef0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x181ef4: 0x42082
    ctx->pc = 0x181ef4u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 4), 2));
    // 0x181ef8: 0x441025
    ctx->pc = 0x181ef8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x181efc: 0x254a0004
    ctx->pc = 0x181efcu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4));
    // 0x181f00: 0x29430020
    ctx->pc = 0x181f00u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 10), 32));
    // 0x181f04: 0x14600012
    ctx->pc = 0x181F04u;
    {
        const bool branch_taken_0x181f04 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x181F08u;
        WRITE32(ADD32(GPR_U32(ctx, 12), 20), GPR_U32(ctx, 2));
        if (branch_taken_0x181f04) {
            ctx->pc = 0x181F50u;
            goto label_181f50;
        }
    }
    ctx->pc = 0x181F0Cu;
    // 0x181f0c: 0x254affe0
    ctx->pc = 0x181f0cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294967264));
    // 0x181f10: 0x1485804
    ctx->pc = 0x181f10u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 10) & 0x1F));
    // 0x181f14: 0x81280000
    ctx->pc = 0x181f14u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181f18: 0x25290001
    ctx->pc = 0x181f18u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181f1c: 0x91220000
    ctx->pc = 0x181f1cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181f20: 0x84200
    ctx->pc = 0x181f20u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x181f24: 0x25290001
    ctx->pc = 0x181f24u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181f28: 0x1024025
    ctx->pc = 0x181f28u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x181f2c: 0x91230000
    ctx->pc = 0x181f2cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181f30: 0x25290001
    ctx->pc = 0x181f30u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181f34: 0x84200
    ctx->pc = 0x181f34u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x181f38: 0x91220000
    ctx->pc = 0x181f38u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181f3c: 0x1034025
    ctx->pc = 0x181f3cu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x181f40: 0x84200
    ctx->pc = 0x181f40u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x181f44: 0x25290001
    ctx->pc = 0x181f44u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181f48: 0x10000002
    ctx->pc = 0x181F48u;
    {
        const bool branch_taken_0x181f48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x181F4Cu;
        SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        if (branch_taken_0x181f48) {
            ctx->pc = 0x181F54u;
            goto label_181f54;
        }
    }
    ctx->pc = 0x181F50u;
label_181f50:
    // 0x181f50: 0xb5900
    ctx->pc = 0x181f50u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), 4));
label_181f54:
    // 0x181f54: 0x2942001d
    ctx->pc = 0x181f54u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), 29));
    // 0x181f58: 0x1440001a
    ctx->pc = 0x181F58u;
    {
        const bool branch_taken_0x181f58 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x181F5Cu;
        SET_GPR_U32(ctx, 13, SRL32(GPR_U32(ctx, 11), 29));
        if (branch_taken_0x181f58) {
            ctx->pc = 0x181FC4u;
            goto label_181fc4;
        }
    }
    ctx->pc = 0x181F60u;
    // 0x181f60: 0x254affe3
    ctx->pc = 0x181f60u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294967267));
    // 0x181f64: 0x11400007
    ctx->pc = 0x181F64u;
    {
        const bool branch_taken_0x181f64 = (GPR_U32(ctx, 10) == GPR_U32(ctx, 0));
        ctx->pc = 0x181F68u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x181f64) {
            ctx->pc = 0x181F84u;
            goto label_181f84;
        }
    }
    ctx->pc = 0x181F6Cu;
    // 0x181f6c: 0x4a1023
    ctx->pc = 0x181f6cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x181f70: 0x481006
    ctx->pc = 0x181f70u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x181f74: 0x1625825
    ctx->pc = 0x181f74u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x181f78: 0xb6f42
    ctx->pc = 0x181f78u;
    SET_GPR_U32(ctx, 13, SRL32(GPR_U32(ctx, 11), 29));
    // 0x181f7c: 0x10000002
    ctx->pc = 0x181F7Cu;
    {
        const bool branch_taken_0x181f7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x181F80u;
        SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 10) & 0x1F));
        if (branch_taken_0x181f7c) {
            ctx->pc = 0x181F88u;
            goto label_181f88;
        }
    }
    ctx->pc = 0x181F84u;
label_181f84:
    // 0x181f84: 0x100582d
    ctx->pc = 0x181f84u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_181f88:
    // 0x181f88: 0x81280000
    ctx->pc = 0x181f88u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181f8c: 0x25290001
    ctx->pc = 0x181f8cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181f90: 0x91220000
    ctx->pc = 0x181f90u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181f94: 0x84200
    ctx->pc = 0x181f94u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x181f98: 0x25290001
    ctx->pc = 0x181f98u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181f9c: 0x1024025
    ctx->pc = 0x181f9cu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x181fa0: 0x91230000
    ctx->pc = 0x181fa0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181fa4: 0x25290001
    ctx->pc = 0x181fa4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181fa8: 0x84200
    ctx->pc = 0x181fa8u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x181fac: 0x91220000
    ctx->pc = 0x181facu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181fb0: 0x1034025
    ctx->pc = 0x181fb0u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x181fb4: 0x84200
    ctx->pc = 0x181fb4u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x181fb8: 0x25290001
    ctx->pc = 0x181fb8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181fbc: 0x10000003
    ctx->pc = 0x181FBCu;
    {
        const bool branch_taken_0x181fbc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x181FC0u;
        SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        if (branch_taken_0x181fbc) {
            ctx->pc = 0x181FCCu;
            goto label_181fcc;
        }
    }
    ctx->pc = 0x181FC4u;
label_181fc4:
    // 0x181fc4: 0x254a0003
    ctx->pc = 0x181fc4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 3));
    // 0x181fc8: 0xb58c0
    ctx->pc = 0x181fc8u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), 3));
label_181fcc:
    // 0x181fcc: 0x254a0001
    ctx->pc = 0x181fccu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
    // 0x181fd0: 0x29420020
    ctx->pc = 0x181fd0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), 32));
    // 0x181fd4: 0x14400011
    ctx->pc = 0x181FD4u;
    {
        const bool branch_taken_0x181fd4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x181FD8u;
        SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), 1));
        if (branch_taken_0x181fd4) {
            ctx->pc = 0x18201Cu;
            goto label_18201c;
        }
    }
    ctx->pc = 0x181FDCu;
    // 0x181fdc: 0x254affe0
    ctx->pc = 0x181fdcu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294967264));
    // 0x181fe0: 0x1485804
    ctx->pc = 0x181fe0u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 10) & 0x1F));
    // 0x181fe4: 0x81280000
    ctx->pc = 0x181fe4u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181fe8: 0x25290001
    ctx->pc = 0x181fe8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181fec: 0x91220000
    ctx->pc = 0x181fecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x181ff0: 0x84200
    ctx->pc = 0x181ff0u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x181ff4: 0x25290001
    ctx->pc = 0x181ff4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x181ff8: 0x1024025
    ctx->pc = 0x181ff8u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x181ffc: 0x91230000
    ctx->pc = 0x181ffcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x182000: 0x25290001
    ctx->pc = 0x182000u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x182004: 0x84200
    ctx->pc = 0x182004u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x182008: 0x91220000
    ctx->pc = 0x182008u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x18200c: 0x1034025
    ctx->pc = 0x18200cu;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x182010: 0x84200
    ctx->pc = 0x182010u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x182014: 0x25290001
    ctx->pc = 0x182014u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x182018: 0x1024025
    ctx->pc = 0x182018u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_18201c:
    // 0x18201c: 0x29420011
    ctx->pc = 0x18201cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), 17));
    // 0x182020: 0x1440001a
    ctx->pc = 0x182020u;
    {
        const bool branch_taken_0x182020 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x182024u;
        SET_GPR_U32(ctx, 7, SRL32(GPR_U32(ctx, 11), 17));
        if (branch_taken_0x182020) {
            ctx->pc = 0x18208Cu;
            goto label_18208c;
        }
    }
    ctx->pc = 0x182028u;
    // 0x182028: 0x254affef
    ctx->pc = 0x182028u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294967279));
    // 0x18202c: 0x11400007
    ctx->pc = 0x18202Cu;
    {
        const bool branch_taken_0x18202c = (GPR_U32(ctx, 10) == GPR_U32(ctx, 0));
        ctx->pc = 0x182030u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
        if (branch_taken_0x18202c) {
            ctx->pc = 0x18204Cu;
            goto label_18204c;
        }
    }
    ctx->pc = 0x182034u;
    // 0x182034: 0x4a1023
    ctx->pc = 0x182034u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x182038: 0x481006
    ctx->pc = 0x182038u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x18203c: 0x1625825
    ctx->pc = 0x18203cu;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x182040: 0xb3c42
    ctx->pc = 0x182040u;
    SET_GPR_U32(ctx, 7, SRL32(GPR_U32(ctx, 11), 17));
    // 0x182044: 0x10000002
    ctx->pc = 0x182044u;
    {
        const bool branch_taken_0x182044 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x182048u;
        SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 10) & 0x1F));
        if (branch_taken_0x182044) {
            ctx->pc = 0x182050u;
            goto label_182050;
        }
    }
    ctx->pc = 0x18204Cu;
label_18204c:
    // 0x18204c: 0x100582d
    ctx->pc = 0x18204cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_182050:
    // 0x182050: 0x81280000
    ctx->pc = 0x182050u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x182054: 0x25290001
    ctx->pc = 0x182054u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x182058: 0x91220000
    ctx->pc = 0x182058u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x18205c: 0x84200
    ctx->pc = 0x18205cu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x182060: 0x25290001
    ctx->pc = 0x182060u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x182064: 0x1024025
    ctx->pc = 0x182064u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x182068: 0x91230000
    ctx->pc = 0x182068u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x18206c: 0x25290001
    ctx->pc = 0x18206cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x182070: 0x84200
    ctx->pc = 0x182070u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x182074: 0x91220000
    ctx->pc = 0x182074u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x182078: 0x1034025
    ctx->pc = 0x182078u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x18207c: 0x84200
    ctx->pc = 0x18207cu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x182080: 0x25290001
    ctx->pc = 0x182080u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x182084: 0x10000003
    ctx->pc = 0x182084u;
    {
        const bool branch_taken_0x182084 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x182088u;
        SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        if (branch_taken_0x182084) {
            ctx->pc = 0x182094u;
            goto label_182094;
        }
    }
    ctx->pc = 0x18208Cu;
label_18208c:
    // 0x18208c: 0x254a000f
    ctx->pc = 0x18208cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 15));
    // 0x182090: 0xb5bc0
    ctx->pc = 0x182090u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), 15));
label_182094:
    // 0x182094: 0x254a0001
    ctx->pc = 0x182094u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
    // 0x182098: 0x29420020
    ctx->pc = 0x182098u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), 32));
    // 0x18209c: 0x14400011
    ctx->pc = 0x18209Cu;
    {
        const bool branch_taken_0x18209c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1820A0u;
        SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), 1));
        if (branch_taken_0x18209c) {
            ctx->pc = 0x1820E4u;
            goto label_1820e4;
        }
    }
    ctx->pc = 0x1820A4u;
    // 0x1820a4: 0x254affe0
    ctx->pc = 0x1820a4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294967264));
    // 0x1820a8: 0x1485804
    ctx->pc = 0x1820a8u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 10) & 0x1F));
    // 0x1820ac: 0x81280000
    ctx->pc = 0x1820acu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1820b0: 0x25290001
    ctx->pc = 0x1820b0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x1820b4: 0x91220000
    ctx->pc = 0x1820b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1820b8: 0x84200
    ctx->pc = 0x1820b8u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x1820bc: 0x25290001
    ctx->pc = 0x1820bcu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x1820c0: 0x1024025
    ctx->pc = 0x1820c0u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1820c4: 0x91230000
    ctx->pc = 0x1820c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1820c8: 0x25290001
    ctx->pc = 0x1820c8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x1820cc: 0x84200
    ctx->pc = 0x1820ccu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x1820d0: 0x91220000
    ctx->pc = 0x1820d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1820d4: 0x1034025
    ctx->pc = 0x1820d4u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1820d8: 0x84200
    ctx->pc = 0x1820d8u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x1820dc: 0x25290001
    ctx->pc = 0x1820dcu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x1820e0: 0x1024025
    ctx->pc = 0x1820e0u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_1820e4:
    // 0x1820e4: 0x29420011
    ctx->pc = 0x1820e4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), 17));
    // 0x1820e8: 0x1440000a
    ctx->pc = 0x1820E8u;
    {
        const bool branch_taken_0x1820e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1820ECu;
        SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 11), 17));
        if (branch_taken_0x1820e8) {
            ctx->pc = 0x182114u;
            goto label_182114;
        }
    }
    ctx->pc = 0x1820F0u;
    // 0x1820f0: 0x254affef
    ctx->pc = 0x1820f0u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294967279));
    // 0x1820f4: 0x11400005
    ctx->pc = 0x1820F4u;
    {
        const bool branch_taken_0x1820f4 = (GPR_U32(ctx, 10) == GPR_U32(ctx, 0));
        ctx->pc = 0x1820F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
        if (branch_taken_0x1820f4) {
            ctx->pc = 0x18210Cu;
            goto label_18210c;
        }
    }
    ctx->pc = 0x1820FCu;
    // 0x1820fc: 0x4a1023
    ctx->pc = 0x1820fcu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x182100: 0x481006
    ctx->pc = 0x182100u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x182104: 0x1625825
    ctx->pc = 0x182104u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x182108: 0xb2442
    ctx->pc = 0x182108u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 11), 17));
label_18210c:
    // 0x18210c: 0x10000002
    ctx->pc = 0x18210Cu;
    {
        const bool branch_taken_0x18210c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x182110u;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4));
        if (branch_taken_0x18210c) {
            ctx->pc = 0x182118u;
            goto label_182118;
        }
    }
    ctx->pc = 0x182114u;
label_182114:
    // 0x182114: 0x254a000f
    ctx->pc = 0x182114u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 15));
label_182118:
    // 0x182118: 0x254a0001
    ctx->pc = 0x182118u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
    // 0x18211c: 0x29420020
    ctx->pc = 0x18211cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), 32));
    // 0x182120: 0x14400003
    ctx->pc = 0x182120u;
    {
        const bool branch_taken_0x182120 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x182124u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 13), 28));
        if (branch_taken_0x182120) {
            ctx->pc = 0x182130u;
            goto label_182130;
        }
    }
    ctx->pc = 0x182128u;
    // 0x182128: 0x254affe0
    ctx->pc = 0x182128u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294967264));
    // 0x18212c: 0x25290004
    ctx->pc = 0x18212cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4));
label_182130:
    // 0x182130: 0x71b40
    ctx->pc = 0x182130u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 13));
    // 0x182134: 0x431025
    ctx->pc = 0x182134u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182138: 0x42082
    ctx->pc = 0x182138u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 4), 2));
    // 0x18213c: 0x441025
    ctx->pc = 0x18213cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x182140: 0x10000008
    ctx->pc = 0x182140u;
    {
        const bool branch_taken_0x182140 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x182144u;
        WRITE32(ADD32(GPR_U32(ctx, 12), 24), GPR_U32(ctx, 2));
        if (branch_taken_0x182140) {
            ctx->pc = 0x182164u;
            goto label_182164;
        }
    }
    ctx->pc = 0x182148u;
label_182148:
    // 0x182148: 0x29420020
    ctx->pc = 0x182148u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 10), 32));
    // 0x18214c: 0x14400003
    ctx->pc = 0x18214Cu;
    {
        const bool branch_taken_0x18214c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x182150u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x18214c) {
            ctx->pc = 0x18215Cu;
            goto label_18215c;
        }
    }
    ctx->pc = 0x182154u;
    // 0x182154: 0x254affe0
    ctx->pc = 0x182154u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294967264));
    // 0x182158: 0x25290004
    ctx->pc = 0x182158u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4));
label_18215c:
    // 0x18215c: 0xad820018
    ctx->pc = 0x18215cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 24), GPR_U32(ctx, 2));
    // 0x182160: 0xad820014
    ctx->pc = 0x182160u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 20), GPR_U32(ctx, 2));
label_182164:
    // 0x182164: 0x25420007
    ctx->pc = 0x182164u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 10), 7));
    // 0x182168: 0x210c3
    ctx->pc = 0x182168u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x18216c: 0x2442fff8
    ctx->pc = 0x18216cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x182170: 0x1221021
    ctx->pc = 0x182170u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x182174: 0x451023
    ctx->pc = 0x182174u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x182178: 0xacc20000
    ctx->pc = 0x182178u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x18217c: 0x8d83000c
    ctx->pc = 0x18217cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x182180: 0x6e1821
    ctx->pc = 0x182180u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x182184: 0x621823
    ctx->pc = 0x182184u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x182188: 0x3e00008
    ctx->pc = 0x182188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18218Cu;
        WRITE32(ADD32(GPR_U32(ctx, 12), 28), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x181624u: goto label_181624;
            case 0x18162Cu: goto label_18162c;
            case 0x181668u: goto label_181668;
            case 0x181674u: goto label_181674;
            case 0x18168Cu: goto label_18168c;
            case 0x1816B4u: goto label_1816b4;
            case 0x1816C8u: goto label_1816c8;
            case 0x1816D4u: goto label_1816d4;
            case 0x1816D8u: goto label_1816d8;
            case 0x18171Cu: goto label_18171c;
            case 0x181728u: goto label_181728;
            case 0x181764u: goto label_181764;
            case 0x181770u: goto label_181770;
            case 0x181778u: goto label_181778;
            case 0x181794u: goto label_181794;
            case 0x18179Cu: goto label_18179c;
            case 0x1817D8u: goto label_1817d8;
            case 0x1817F8u: goto label_1817f8;
            case 0x181800u: goto label_181800;
            case 0x181850u: goto label_181850;
            case 0x181868u: goto label_181868;
            case 0x181888u: goto label_181888;
            case 0x1818E4u: goto label_1818e4;
            case 0x181934u: goto label_181934;
            case 0x18193Cu: goto label_18193c;
            case 0x18196Cu: goto label_18196c;
            case 0x181970u: goto label_181970;
            case 0x1819ACu: goto label_1819ac;
            case 0x1819B4u: goto label_1819b4;
            case 0x1819C8u: goto label_1819c8;
            case 0x1819E0u: goto label_1819e0;
            case 0x181A3Cu: goto label_181a3c;
            case 0x181A6Cu: goto label_181a6c;
            case 0x181A70u: goto label_181a70;
            case 0x181AACu: goto label_181aac;
            case 0x181AB4u: goto label_181ab4;
            case 0x181B04u: goto label_181b04;
            case 0x181B34u: goto label_181b34;
            case 0x181B38u: goto label_181b38;
            case 0x181B74u: goto label_181b74;
            case 0x181B7Cu: goto label_181b7c;
            case 0x181BCCu: goto label_181bcc;
            case 0x181BF4u: goto label_181bf4;
            case 0x181BFCu: goto label_181bfc;
            case 0x181C00u: goto label_181c00;
            case 0x181C18u: goto label_181c18;
            case 0x181C38u: goto label_181c38;
            case 0x181C90u: goto label_181c90;
            case 0x181CC0u: goto label_181cc0;
            case 0x181CC4u: goto label_181cc4;
            case 0x181D00u: goto label_181d00;
            case 0x181D08u: goto label_181d08;
            case 0x181D58u: goto label_181d58;
            case 0x181D88u: goto label_181d88;
            case 0x181D8Cu: goto label_181d8c;
            case 0x181DC8u: goto label_181dc8;
            case 0x181DD0u: goto label_181dd0;
            case 0x181E20u: goto label_181e20;
            case 0x181E50u: goto label_181e50;
            case 0x181E54u: goto label_181e54;
            case 0x181E90u: goto label_181e90;
            case 0x181E98u: goto label_181e98;
            case 0x181EE8u: goto label_181ee8;
            case 0x181F50u: goto label_181f50;
            case 0x181F54u: goto label_181f54;
            case 0x181F84u: goto label_181f84;
            case 0x181F88u: goto label_181f88;
            case 0x181FC4u: goto label_181fc4;
            case 0x181FCCu: goto label_181fcc;
            case 0x18201Cu: goto label_18201c;
            case 0x18204Cu: goto label_18204c;
            case 0x182050u: goto label_182050;
            case 0x18208Cu: goto label_18208c;
            case 0x182094u: goto label_182094;
            case 0x1820E4u: goto label_1820e4;
            case 0x18210Cu: goto label_18210c;
            case 0x182114u: goto label_182114;
            case 0x182118u: goto label_182118;
            case 0x182130u: goto label_182130;
            case 0x182148u: goto label_182148;
            case 0x18215Cu: goto label_18215c;
            case 0x182164u: goto label_182164;
            default: break;
        }
        return;
    }
    ctx->pc = 0x182190u;
}
