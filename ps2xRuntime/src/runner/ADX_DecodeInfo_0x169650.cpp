#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADX_DecodeInfo
// Address: 0x169650 - 0x169754
void ADX_DecodeInfo_0x169650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADX_DecodeInfo");


    ctx->pc = 0x169650u;

    // 0x169650: 0x80602d
    ctx->pc = 0x169650u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169654: 0x28a50010
    ctx->pc = 0x169654u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 5), 16));
    // 0x169658: 0x10a00003
    ctx->pc = 0x169658u;
    {
        const bool branch_taken_0x169658 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x16965Cu;
        SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x169658) {
            ctx->pc = 0x169668u;
            goto label_169668;
        }
    }
    ctx->pc = 0x169660u;
    // 0x169660: 0x3e00008
    ctx->pc = 0x169660u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169664u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x169668u: goto label_169668;
            case 0x16968Cu: goto label_16968c;
            case 0x169730u: goto label_169730;
            case 0x169738u: goto label_169738;
            case 0x16974Cu: goto label_16974c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x169668u;
label_169668:
    // 0x169668: 0x91820000
    ctx->pc = 0x169668u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x16966c: 0x34048000
    ctx->pc = 0x16966cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 32768));
    // 0x169670: 0x91830001
    ctx->pc = 0x169670u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x169674: 0x21200
    ctx->pc = 0x169674u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
    // 0x169678: 0x621825
    ctx->pc = 0x169678u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16967c: 0x50640003
    ctx->pc = 0x16967Cu;
    {
        const bool branch_taken_0x16967c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x16967c) {
            ctx->pc = 0x169680u;
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 2)));
            ctx->pc = 0x16968Cu;
            goto label_16968c;
        }
    }
    ctx->pc = 0x169684u;
    // 0x169684: 0x3e00008
    ctx->pc = 0x169684u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169688u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x169668u: goto label_169668;
            case 0x16968Cu: goto label_16968c;
            case 0x169730u: goto label_169730;
            case 0x169738u: goto label_169738;
            case 0x16974Cu: goto label_16974c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16968Cu;
label_16968c:
    // 0x16968c: 0x91820003
    ctx->pc = 0x16968cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 3)));
    // 0x169690: 0x31a00
    ctx->pc = 0x169690u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
    // 0x169694: 0x431025
    ctx->pc = 0x169694u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x169698: 0x24420004
    ctx->pc = 0x169698u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x16969c: 0xa4c20000
    ctx->pc = 0x16969cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1696a0: 0x91830004
    ctx->pc = 0x1696a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x1696a4: 0xa0e30000
    ctx->pc = 0x1696a4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1696a8: 0x91820005
    ctx->pc = 0x1696a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 5)));
    // 0x1696ac: 0xa1220000
    ctx->pc = 0x1696acu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1696b0: 0x91830006
    ctx->pc = 0x1696b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 6)));
    // 0x1696b4: 0xa1030000
    ctx->pc = 0x1696b4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1696b8: 0x91840007
    ctx->pc = 0x1696b8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 7)));
    // 0x1696bc: 0xa1440000
    ctx->pc = 0x1696bcu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1696c0: 0x91820008
    ctx->pc = 0x1696c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x1696c4: 0x9183000a
    ctx->pc = 0x1696c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 10)));
    // 0x1696c8: 0x91840009
    ctx->pc = 0x1696c8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 9)));
    // 0x1696cc: 0x21600
    ctx->pc = 0x1696ccu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
    // 0x1696d0: 0x9185000b
    ctx->pc = 0x1696d0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 11)));
    // 0x1696d4: 0x31a00
    ctx->pc = 0x1696d4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
    // 0x1696d8: 0x42400
    ctx->pc = 0x1696d8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 16));
    // 0x1696dc: 0x641825
    ctx->pc = 0x1696dcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1696e0: 0x451025
    ctx->pc = 0x1696e0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1696e4: 0x431025
    ctx->pc = 0x1696e4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1696e8: 0xad620000
    ctx->pc = 0x1696e8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x1696ec: 0x9183000d
    ctx->pc = 0x1696ecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 13)));
    // 0x1696f0: 0x9184000e
    ctx->pc = 0x1696f0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 14)));
    // 0x1696f4: 0x9182000c
    ctx->pc = 0x1696f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x1696f8: 0x31c00
    ctx->pc = 0x1696f8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
    // 0x1696fc: 0x9185000f
    ctx->pc = 0x1696fcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 15)));
    // 0x169700: 0x42200
    ctx->pc = 0x169700u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 8));
    // 0x169704: 0x832025
    ctx->pc = 0x169704u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x169708: 0x21600
    ctx->pc = 0x169708u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
    // 0x16970c: 0x451025
    ctx->pc = 0x16970cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x169710: 0x8fa30000
    ctx->pc = 0x169710u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169714: 0x441025
    ctx->pc = 0x169714u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x169718: 0xac620000
    ctx->pc = 0x169718u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x16971c: 0x81080000
    ctx->pc = 0x16971cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x169720: 0x55000003
    ctx->pc = 0x169720u;
    {
        const bool branch_taken_0x169720 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        if (branch_taken_0x169720) {
            ctx->pc = 0x169724u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->pc = 0x169730u;
            goto label_169730;
        }
    }
    ctx->pc = 0x169728u;
    // 0x169728: 0x10000008
    ctx->pc = 0x169728u;
    {
        const bool branch_taken_0x169728 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16972Cu;
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x169728) {
            ctx->pc = 0x16974Cu;
            goto label_16974c;
        }
    }
    ctx->pc = 0x169730u;
label_169730:
    // 0x169730: 0x51000001
    ctx->pc = 0x169730u;
    {
        const bool branch_taken_0x169730 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 0));
        if (branch_taken_0x169730) {
            ctx->pc = 0x169734u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x169738u;
            goto label_169738;
        }
    }
    ctx->pc = 0x169738u;
label_169738:
    // 0x169738: 0x2442fffe
    ctx->pc = 0x169738u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x16973c: 0x210c0
    ctx->pc = 0x16973cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x169740: 0x48001a
    ctx->pc = 0x169740u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x169744: 0x1012
    ctx->pc = 0x169744u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x169748: 0xada20000
    ctx->pc = 0x169748u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
label_16974c:
    // 0x16974c: 0x3e00008
    ctx->pc = 0x16974Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169750u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x169668u: goto label_169668;
            case 0x16968Cu: goto label_16968c;
            case 0x169730u: goto label_169730;
            case 0x169738u: goto label_169738;
            case 0x16974Cu: goto label_16974c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x169754u;
}
