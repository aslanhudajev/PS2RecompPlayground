#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sub_001E5600
// Address: 0x1e5600 - 0x1e5810
void sub_001E5600_0x1e5600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sub_001E5600");


    ctx->pc = 0x1e5600u;

    // 0x1e5600: 0x3c0b0046
    ctx->pc = 0x1e5600u;
    SET_GPR_U32(ctx, 11, ((uint32_t)70 << 16));
    // 0x1e5604: 0x256b7cf0
    ctx->pc = 0x1e5604u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 31984));
    // 0x1e5608: 0x91680000
    ctx->pc = 0x1e5608u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1e560c: 0x1100007c
    ctx->pc = 0x1E560Cu;
    {
        const bool branch_taken_0x1e560c = (GPR_U32(ctx, 8) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E5610u;
        SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
        if (branch_taken_0x1e560c) {
            ctx->pc = 0x1E5800u;
            goto label_1e5800;
        }
    }
    ctx->pc = 0x1E5614u;
    // 0x1e5614: 0x11000057
    ctx->pc = 0x1E5614u;
    {
        const bool branch_taken_0x1e5614 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E5618u;
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 8), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
        if (branch_taken_0x1e5614) {
            ctx->pc = 0x1E5774u;
            goto label_1e5774;
        }
    }
    ctx->pc = 0x1E561Cu;
    // 0x1e561c: 0x15000066
    ctx->pc = 0x1E561Cu;
    {
        const bool branch_taken_0x1e561c = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E5620u;
        SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 11), 20)));
        if (branch_taken_0x1e561c) {
            ctx->pc = 0x1E57B8u;
            goto label_1e57b8;
        }
    }
    ctx->pc = 0x1E5624u;
    // 0x1e5624: 0x9d6d0018
    ctx->pc = 0x1e5624u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 11), 24)));
    // 0x1e5628: 0x9d6e0004
    ctx->pc = 0x1e5628u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x1e562c: 0x9d6f0008
    ctx->pc = 0x1e562cu;
    SET_GPR_U32(ctx, 15, READ32(ADD32(GPR_U32(ctx, 11), 8)));
label_1e5630:
    // 0x1e5630: 0x21efffff
    ctx->pc = 0x1e5630u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 15), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
    // 0x1e5634: 0x15e00004
    ctx->pc = 0x1E5634u;
    {
        const bool branch_taken_0x1e5634 = (GPR_U32(ctx, 15) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e5634) {
            ctx->pc = 0x1E5648u;
            goto label_1e5648;
        }
    }
    ctx->pc = 0x1E563Cu;
    // 0x1e563c: 0x918e0000
    ctx->pc = 0x1e563cu;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1e5640: 0x218c0001
    ctx->pc = 0x1e5640u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 12), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
    // 0x1e5644: 0x200f0008
    ctx->pc = 0x1e5644u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)8, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_1e5648:
    // 0x1e5648: 0x31c80001
    ctx->pc = 0x1e5648u;
    SET_GPR_U32(ctx, 8, AND32(GPR_U32(ctx, 14), 1));
    // 0x1e564c: 0xe7042
    ctx->pc = 0x1e564cu;
    SET_GPR_U32(ctx, 14, SRL32(GPR_U32(ctx, 14), 1));
    // 0x1e5650: 0x1100000a
    ctx->pc = 0x1E5650u;
    {
        const bool branch_taken_0x1e5650 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e5650) {
            ctx->pc = 0x1E567Cu;
            goto label_1e567c;
        }
    }
    ctx->pc = 0x1E5658u;
    // 0x1e5658: 0x91890000
    ctx->pc = 0x1e5658u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1e565c: 0x218c0001
    ctx->pc = 0x1e565cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 12), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
    // 0x1e5660: 0xad6c0014
    ctx->pc = 0x1e5660u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 12));
    // 0x1e5664: 0xa1a90000
    ctx->pc = 0x1e5664u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x1e5668: 0x21ad0001
    ctx->pc = 0x1e5668u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 13), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
    // 0x1e566c: 0xad6d0018
    ctx->pc = 0x1e566cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 24), GPR_U32(ctx, 13));
    // 0x1e5670: 0xad6e0004
    ctx->pc = 0x1e5670u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 14));
    // 0x1e5674: 0x3e00008
    ctx->pc = 0x1E5674u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5678u;
        WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 15));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E5630u: goto label_1e5630;
            case 0x1E5648u: goto label_1e5648;
            case 0x1E567Cu: goto label_1e567c;
            case 0x1E5694u: goto label_1e5694;
            case 0x1E56BCu: goto label_1e56bc;
            case 0x1E56E0u: goto label_1e56e0;
            case 0x1E56FCu: goto label_1e56fc;
            case 0x1E5700u: goto label_1e5700;
            case 0x1E5738u: goto label_1e5738;
            case 0x1E5774u: goto label_1e5774;
            case 0x1E57B8u: goto label_1e57b8;
            case 0x1E57ECu: goto label_1e57ec;
            case 0x1E57F8u: goto label_1e57f8;
            case 0x1E5800u: goto label_1e5800;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E567Cu;
label_1e567c:
    // 0x1e567c: 0x21efffff
    ctx->pc = 0x1e567cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 15), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
    // 0x1e5680: 0x15e00004
    ctx->pc = 0x1E5680u;
    {
        const bool branch_taken_0x1e5680 = (GPR_U32(ctx, 15) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e5680) {
            ctx->pc = 0x1E5694u;
            goto label_1e5694;
        }
    }
    ctx->pc = 0x1E5688u;
    // 0x1e5688: 0x918e0000
    ctx->pc = 0x1e5688u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1e568c: 0x218c0001
    ctx->pc = 0x1e568cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 12), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
    // 0x1e5690: 0x200f0008
    ctx->pc = 0x1e5690u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)8, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_1e5694:
    // 0x1e5694: 0x31c80001
    ctx->pc = 0x1e5694u;
    SET_GPR_U32(ctx, 8, AND32(GPR_U32(ctx, 14), 1));
    // 0x1e5698: 0xe7042
    ctx->pc = 0x1e5698u;
    SET_GPR_U32(ctx, 14, SRL32(GPR_U32(ctx, 14), 1));
    // 0x1e569c: 0x15000026
    ctx->pc = 0x1E569Cu;
    {
        const bool branch_taken_0x1e569c = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e569c) {
            ctx->pc = 0x1E5738u;
            goto label_1e5738;
        }
    }
    ctx->pc = 0x1E56A4u;
    // 0x1e56a4: 0x21efffff
    ctx->pc = 0x1e56a4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 15), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
    // 0x1e56a8: 0x15e00004
    ctx->pc = 0x1E56A8u;
    {
        const bool branch_taken_0x1e56a8 = (GPR_U32(ctx, 15) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e56a8) {
            ctx->pc = 0x1E56BCu;
            goto label_1e56bc;
        }
    }
    ctx->pc = 0x1E56B0u;
    // 0x1e56b0: 0x918e0000
    ctx->pc = 0x1e56b0u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1e56b4: 0x218c0001
    ctx->pc = 0x1e56b4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 12), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
    // 0x1e56b8: 0x200f0008
    ctx->pc = 0x1e56b8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)8, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_1e56bc:
    // 0x1e56bc: 0x31c80001
    ctx->pc = 0x1e56bcu;
    SET_GPR_U32(ctx, 8, AND32(GPR_U32(ctx, 14), 1));
    // 0x1e56c0: 0xe7042
    ctx->pc = 0x1e56c0u;
    SET_GPR_U32(ctx, 14, SRL32(GPR_U32(ctx, 14), 1));
    // 0x1e56c4: 0x84840
    ctx->pc = 0x1e56c4u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 8), 1));
    // 0x1e56c8: 0x21efffff
    ctx->pc = 0x1e56c8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 15), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
    // 0x1e56cc: 0x15e00004
    ctx->pc = 0x1E56CCu;
    {
        const bool branch_taken_0x1e56cc = (GPR_U32(ctx, 15) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e56cc) {
            ctx->pc = 0x1E56E0u;
            goto label_1e56e0;
        }
    }
    ctx->pc = 0x1E56D4u;
    // 0x1e56d4: 0x918e0000
    ctx->pc = 0x1e56d4u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1e56d8: 0x218c0001
    ctx->pc = 0x1e56d8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 12), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
    // 0x1e56dc: 0x200f0008
    ctx->pc = 0x1e56dcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)8, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_1e56e0:
    // 0x1e56e0: 0x31c80001
    ctx->pc = 0x1e56e0u;
    SET_GPR_U32(ctx, 8, AND32(GPR_U32(ctx, 14), 1));
    // 0x1e56e4: 0xe7042
    ctx->pc = 0x1e56e4u;
    SET_GPR_U32(ctx, 14, SRL32(GPR_U32(ctx, 14), 1));
    // 0x1e56e8: 0x1094025
    ctx->pc = 0x1e56e8u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x1e56ec: 0x918a0000
    ctx->pc = 0x1e56ecu;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1e56f0: 0x218c0001
    ctx->pc = 0x1e56f0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 12), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
    // 0x1e56f4: 0x2009ff00
    ctx->pc = 0x1e56f4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)4294967040, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
    // 0x1e56f8: 0x1495025
    ctx->pc = 0x1e56f8u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
label_1e56fc:
    // 0x1e56fc: 0x21080001
    ctx->pc = 0x1e56fcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 8), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
label_1e5700:
    // 0x1e5700: 0x14d5020
    ctx->pc = 0x1e5700u;
    {     int32_t rs_val = GPR_S32(ctx, 10);     int32_t rt_val = GPR_S32(ctx, 13);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
    // 0x1e5704: 0x91490000
    ctx->pc = 0x1e5704u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1e5708: 0x214a0001
    ctx->pc = 0x1e5708u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 10), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 10, (int32_t)tmp); }
    // 0x1e570c: 0xad68000c
    ctx->pc = 0x1e570cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 8));
    // 0x1e5710: 0xa1a90000
    ctx->pc = 0x1e5710u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x1e5714: 0x21ad0001
    ctx->pc = 0x1e5714u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 13), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
    // 0x1e5718: 0xad6a0010
    ctx->pc = 0x1e5718u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 10));
    // 0x1e571c: 0xad6c0014
    ctx->pc = 0x1e571cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 12));
    // 0x1e5720: 0xad6d0018
    ctx->pc = 0x1e5720u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 24), GPR_U32(ctx, 13));
    // 0x1e5724: 0xad6e0004
    ctx->pc = 0x1e5724u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 14));
    // 0x1e5728: 0xad6f0008
    ctx->pc = 0x1e5728u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 15));
    // 0x1e572c: 0x20080002
    ctx->pc = 0x1e572cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)2, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
    // 0x1e5730: 0x3e00008
    ctx->pc = 0x1E5730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5734u;
        WRITE8(ADD32(GPR_U32(ctx, 11), 1), (uint8_t)GPR_U32(ctx, 8));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E5630u: goto label_1e5630;
            case 0x1E5648u: goto label_1e5648;
            case 0x1E567Cu: goto label_1e567c;
            case 0x1E5694u: goto label_1e5694;
            case 0x1E56BCu: goto label_1e56bc;
            case 0x1E56E0u: goto label_1e56e0;
            case 0x1E56FCu: goto label_1e56fc;
            case 0x1E5700u: goto label_1e5700;
            case 0x1E5738u: goto label_1e5738;
            case 0x1E5774u: goto label_1e5774;
            case 0x1E57B8u: goto label_1e57b8;
            case 0x1E57ECu: goto label_1e57ec;
            case 0x1E57F8u: goto label_1e57f8;
            case 0x1E5800u: goto label_1e5800;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E5738u;
label_1e5738:
    // 0x1e5738: 0x91880000
    ctx->pc = 0x1e5738u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1e573c: 0x91890001
    ctx->pc = 0x1e573cu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x1e5740: 0x218c0002
    ctx->pc = 0x1e5740u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 12), (int32_t)2, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
    // 0x1e5744: 0x94a00
    ctx->pc = 0x1e5744u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 8));
    // 0x1e5748: 0x1285025
    ctx->pc = 0x1e5748u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1e574c: 0x11400009
    ctx->pc = 0x1E574Cu;
    {
        const bool branch_taken_0x1e574c = (GPR_U32(ctx, 10) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e574c) {
            ctx->pc = 0x1E5774u;
            goto label_1e5774;
        }
    }
    ctx->pc = 0x1E5754u;
    // 0x1e5754: 0x2009e000
    ctx->pc = 0x1e5754u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)4294959104, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
    // 0x1e5758: 0xa50c2
    ctx->pc = 0x1e5758u;
    SET_GPR_U32(ctx, 10, SRL32(GPR_U32(ctx, 10), 3));
    // 0x1e575c: 0x31080007
    ctx->pc = 0x1e575cu;
    SET_GPR_U32(ctx, 8, AND32(GPR_U32(ctx, 8), 7));
    // 0x1e5760: 0x1500ffe6
    ctx->pc = 0x1E5760u;
    {
        const bool branch_taken_0x1e5760 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 0));
        ctx->pc = 0x1E5764u;
        SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
        if (branch_taken_0x1e5760) {
            ctx->pc = 0x1E56FCu;
            goto label_1e56fc;
        }
    }
    ctx->pc = 0x1E5768u;
    // 0x1e5768: 0x91880000
    ctx->pc = 0x1e5768u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1e576c: 0x80795c0
    ctx->pc = 0x1E576Cu;
    ctx->pc = 0x1E5770u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 12), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
    ctx->pc = 0x1E5700u;
    goto label_1e5700;
    ctx->pc = 0x1E5774u;
label_1e5774:
    // 0x1e5774: 0x91680003
    ctx->pc = 0x1e5774u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
    // 0x1e5778: 0x91690002
    ctx->pc = 0x1e5778u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x1e577c: 0x1109001e
    ctx->pc = 0x1E577Cu;
    {
        const bool branch_taken_0x1e577c = (GPR_U32(ctx, 8) == GPR_U32(ctx, 9));
        ctx->pc = 0x1E5780u;
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 9), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
        if (branch_taken_0x1e577c) {
            ctx->pc = 0x1E57F8u;
            goto label_1e57f8;
        }
    }
    ctx->pc = 0x1E5784u;
    // 0x1e5784: 0x310800ff
    ctx->pc = 0x1e5784u;
    SET_GPR_U32(ctx, 8, AND32(GPR_U32(ctx, 8), 255));
    // 0x1e5788: 0xa1680002
    ctx->pc = 0x1e5788u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 2), (uint8_t)GPR_U32(ctx, 8));
    // 0x1e578c: 0x948c0
    ctx->pc = 0x1e578cu;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 9), 3));
    // 0x1e5790: 0x2129001c
    ctx->pc = 0x1e5790u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 9), (int32_t)28, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
    // 0x1e5794: 0x12b4820
    ctx->pc = 0x1e5794u;
    {     int32_t rs_val = GPR_S32(ctx, 9);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
    // 0x1e5798: 0x9d2c0000
    ctx->pc = 0x1e5798u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1e579c: 0x9d2d0004
    ctx->pc = 0x1e579cu;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1e57a0: 0x918e0000
    ctx->pc = 0x1e57a0u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1e57a4: 0x218c0001
    ctx->pc = 0x1e57a4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 12), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
    // 0x1e57a8: 0x200f0009
    ctx->pc = 0x1e57a8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)9, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
    // 0x1e57ac: 0x20080001
    ctx->pc = 0x1e57acu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
    // 0x1e57b0: 0x807958c
    ctx->pc = 0x1E57B0u;
    ctx->pc = 0x1E57B4u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 1), (uint8_t)GPR_U32(ctx, 8));
    ctx->pc = 0x1E5630u;
    goto label_1e5630;
    ctx->pc = 0x1E57B8u;
label_1e57b8:
    // 0x1e57b8: 0x9d6a0010
    ctx->pc = 0x1e57b8u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x1e57bc: 0x9d6d0018
    ctx->pc = 0x1e57bcu;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 11), 24)));
    // 0x1e57c0: 0x9d68000c
    ctx->pc = 0x1e57c0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 11), 12)));
    // 0x1e57c4: 0x91490000
    ctx->pc = 0x1e57c4u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1e57c8: 0x214a0001
    ctx->pc = 0x1e57c8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 10), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 10, (int32_t)tmp); }
    // 0x1e57cc: 0x2108ffff
    ctx->pc = 0x1e57ccu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 8), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
    // 0x1e57d0: 0xa1a90000
    ctx->pc = 0x1e57d0u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x1e57d4: 0x21ad0001
    ctx->pc = 0x1e57d4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 13), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
    // 0x1e57d8: 0xad6a0010
    ctx->pc = 0x1e57d8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 10));
    // 0x1e57dc: 0x11000003
    ctx->pc = 0x1E57DCu;
    {
        const bool branch_taken_0x1e57dc = (GPR_U32(ctx, 8) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E57E0u;
        WRITE32(ADD32(GPR_U32(ctx, 11), 24), GPR_U32(ctx, 13));
        if (branch_taken_0x1e57dc) {
            ctx->pc = 0x1E57ECu;
            goto label_1e57ec;
        }
    }
    ctx->pc = 0x1E57E4u;
    // 0x1e57e4: 0x3e00008
    ctx->pc = 0x1E57E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E57E8u;
        WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 8));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E5630u: goto label_1e5630;
            case 0x1E5648u: goto label_1e5648;
            case 0x1E567Cu: goto label_1e567c;
            case 0x1E5694u: goto label_1e5694;
            case 0x1E56BCu: goto label_1e56bc;
            case 0x1E56E0u: goto label_1e56e0;
            case 0x1E56FCu: goto label_1e56fc;
            case 0x1E5700u: goto label_1e5700;
            case 0x1E5738u: goto label_1e5738;
            case 0x1E5774u: goto label_1e5774;
            case 0x1E57B8u: goto label_1e57b8;
            case 0x1E57ECu: goto label_1e57ec;
            case 0x1E57F8u: goto label_1e57f8;
            case 0x1E5800u: goto label_1e5800;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E57ECu;
label_1e57ec:
    // 0x1e57ec: 0x20080001
    ctx->pc = 0x1e57ecu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
    // 0x1e57f0: 0x3e00008
    ctx->pc = 0x1E57F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E57F4u;
        WRITE8(ADD32(GPR_U32(ctx, 11), 1), (uint8_t)GPR_U32(ctx, 8));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E5630u: goto label_1e5630;
            case 0x1E5648u: goto label_1e5648;
            case 0x1E567Cu: goto label_1e567c;
            case 0x1E5694u: goto label_1e5694;
            case 0x1E56BCu: goto label_1e56bc;
            case 0x1E56E0u: goto label_1e56e0;
            case 0x1E56FCu: goto label_1e56fc;
            case 0x1E5700u: goto label_1e5700;
            case 0x1E5738u: goto label_1e5738;
            case 0x1E5774u: goto label_1e5774;
            case 0x1E57B8u: goto label_1e57b8;
            case 0x1E57ECu: goto label_1e57ec;
            case 0x1E57F8u: goto label_1e57f8;
            case 0x1E5800u: goto label_1e5800;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E57F8u;
label_1e57f8:
    // 0x1e57f8: 0x3e00008
    ctx->pc = 0x1E57F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E57FCu;
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E5630u: goto label_1e5630;
            case 0x1E5648u: goto label_1e5648;
            case 0x1E567Cu: goto label_1e567c;
            case 0x1E5694u: goto label_1e5694;
            case 0x1E56BCu: goto label_1e56bc;
            case 0x1E56E0u: goto label_1e56e0;
            case 0x1E56FCu: goto label_1e56fc;
            case 0x1E5700u: goto label_1e5700;
            case 0x1E5738u: goto label_1e5738;
            case 0x1E5774u: goto label_1e5774;
            case 0x1E57B8u: goto label_1e57b8;
            case 0x1E57ECu: goto label_1e57ec;
            case 0x1E57F8u: goto label_1e57f8;
            case 0x1E5800u: goto label_1e5800;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E5800u;
label_1e5800:
    // 0x1e5800: 0x3e00008
    ctx->pc = 0x1E5800u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E5630u: goto label_1e5630;
            case 0x1E5648u: goto label_1e5648;
            case 0x1E567Cu: goto label_1e567c;
            case 0x1E5694u: goto label_1e5694;
            case 0x1E56BCu: goto label_1e56bc;
            case 0x1E56E0u: goto label_1e56e0;
            case 0x1E56FCu: goto label_1e56fc;
            case 0x1E5700u: goto label_1e5700;
            case 0x1E5738u: goto label_1e5738;
            case 0x1E5774u: goto label_1e5774;
            case 0x1E57B8u: goto label_1e57b8;
            case 0x1E57ECu: goto label_1e57ec;
            case 0x1E57F8u: goto label_1e57f8;
            case 0x1E5800u: goto label_1e5800;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E5808u;
    // 0x1e5808: 0x0
    ctx->pc = 0x1e5808u;
    // NOP
    // 0x1e580c: 0x0
    ctx->pc = 0x1e580cu;
    // NOP
}
