#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADX_DecodeInfoExLoop
// Address: 0x1697d8 - 0x169964
void ADX_DecodeInfoExLoop_0x1697d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADX_DecodeInfoExLoop");


    ctx->pc = 0x1697d8u;

    // 0x1697d8: 0x80602d
    ctx->pc = 0x1697d8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1697dc: 0xc0702d
    ctx->pc = 0x1697dcu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1697e0: 0x100782d
    ctx->pc = 0x1697e0u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1697e4: 0x28a50030
    ctx->pc = 0x1697e4u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 5), 48));
    // 0x1697e8: 0x10a00003
    ctx->pc = 0x1697E8u;
    {
        const bool branch_taken_0x1697e8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x1697ECu;
        WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1697e8) {
            ctx->pc = 0x1697F8u;
            goto label_1697f8;
        }
    }
    ctx->pc = 0x1697F0u;
label_1697f0:
    // 0x1697f0: 0x3e00008
    ctx->pc = 0x1697F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1697F4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1697F0u: goto label_1697f0;
            case 0x1697F8u: goto label_1697f8;
            case 0x169818u: goto label_169818;
            case 0x169820u: goto label_169820;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1697F8u;
label_1697f8:
    // 0x1697f8: 0x95820000
    ctx->pc = 0x1697f8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1697fc: 0x34048000
    ctx->pc = 0x1697fcu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 32768));
    // 0x169800: 0x21a00
    ctx->pc = 0x169800u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 8));
    // 0x169804: 0x21202
    ctx->pc = 0x169804u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
    // 0x169808: 0x431025
    ctx->pc = 0x169808u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16980c: 0x3042ffff
    ctx->pc = 0x16980cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x169810: 0x10440003
    ctx->pc = 0x169810u;
    {
        const bool branch_taken_0x169810 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        ctx->pc = 0x169814u;
        SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 0), 4294967040));
        if (branch_taken_0x169810) {
            ctx->pc = 0x169820u;
            goto label_169820;
        }
    }
    ctx->pc = 0x169818u;
label_169818:
    // 0x169818: 0x3e00008
    ctx->pc = 0x169818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16981Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1697F0u: goto label_1697f0;
            case 0x1697F8u: goto label_1697f8;
            case 0x169818u: goto label_169818;
            case 0x169820u: goto label_169820;
            default: break;
        }
        return;
    }
    ctx->pc = 0x169820u;
label_169820:
    // 0x169820: 0x95820002
    ctx->pc = 0x169820u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x169824: 0x21a00
    ctx->pc = 0x169824u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 8));
    // 0x169828: 0x21202
    ctx->pc = 0x169828u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
    // 0x16982c: 0x6d1824
    ctx->pc = 0x16982cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x169830: 0x431025
    ctx->pc = 0x169830u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x169834: 0x21400
    ctx->pc = 0x169834u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x169838: 0x21403
    ctx->pc = 0x169838u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x16983c: 0x2842002c
    ctx->pc = 0x16983cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 44));
    // 0x169840: 0x1440ffeb
    ctx->pc = 0x169840u;
    {
        const bool branch_taken_0x169840 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x169844u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x169840) {
            ctx->pc = 0x1697F0u;
            goto label_1697f0;
        }
    }
    ctx->pc = 0x169848u;
    // 0x169848: 0x95820014
    ctx->pc = 0x169848u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 20)));
    // 0x16984c: 0x95840016
    ctx->pc = 0x16984cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 22)));
    // 0x169850: 0x21a00
    ctx->pc = 0x169850u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 8));
    // 0x169854: 0x6d1824
    ctx->pc = 0x169854u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x169858: 0x42a00
    ctx->pc = 0x169858u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 4), 8));
    // 0x16985c: 0x21202
    ctx->pc = 0x16985cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
    // 0x169860: 0xad2824
    ctx->pc = 0x169860u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
    // 0x169864: 0x431025
    ctx->pc = 0x169864u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x169868: 0x42202
    ctx->pc = 0x169868u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 4), 8));
    // 0x16986c: 0x852025
    ctx->pc = 0x16986cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x169870: 0x21400
    ctx->pc = 0x169870u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x169874: 0x21403
    ctx->pc = 0x169874u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x169878: 0x41c00
    ctx->pc = 0x169878u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 16));
    // 0x16987c: 0xadc20000
    ctx->pc = 0x16987cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x169880: 0x31c03
    ctx->pc = 0x169880u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x169884: 0x1466ffe4
    ctx->pc = 0x169884u;
    {
        const bool branch_taken_0x169884 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 6));
        ctx->pc = 0x169888u;
        WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 4));
        if (branch_taken_0x169884) {
            ctx->pc = 0x169818u;
            goto label_169818;
        }
    }
    ctx->pc = 0x16988Cu;
    // 0x16988c: 0x8d85001c
    ctx->pc = 0x16988cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 12), 28)));
    // 0x169890: 0x3c0800ff
    ctx->pc = 0x169890u;
    SET_GPR_U32(ctx, 8, ((uint32_t)255 << 16));
    // 0x169894: 0x9587001a
    ctx->pc = 0x169894u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 26)));
    // 0x169898: 0x102d
    ctx->pc = 0x169898u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16989c: 0x53203
    ctx->pc = 0x16989cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 5), 8));
    // 0x1698a0: 0x52200
    ctx->pc = 0x1698a0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 8));
    // 0x1698a4: 0x51e02
    ctx->pc = 0x1698a4u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 5), 24));
    // 0x1698a8: 0x30c6ff00
    ctx->pc = 0x1698a8u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), 65280));
    // 0x1698ac: 0x52e00
    ctx->pc = 0x1698acu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 24));
    // 0x1698b0: 0x882024
    ctx->pc = 0x1698b0u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x1698b4: 0x862025
    ctx->pc = 0x1698b4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1698b8: 0x651825
    ctx->pc = 0x1698b8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1698bc: 0x641825
    ctx->pc = 0x1698bcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1698c0: 0x72a00
    ctx->pc = 0x1698c0u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 7), 8));
    // 0x1698c4: 0xad230000
    ctx->pc = 0x1698c4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x1698c8: 0xad2824
    ctx->pc = 0x1698c8u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
    // 0x1698cc: 0x73a02
    ctx->pc = 0x1698ccu;
    SET_GPR_U32(ctx, 7, SRL32(GPR_U32(ctx, 7), 8));
    // 0x1698d0: 0x8d860020
    ctx->pc = 0x1698d0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 12), 32)));
    // 0x1698d4: 0xe53825
    ctx->pc = 0x1698d4u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1698d8: 0xa5e70000
    ctx->pc = 0x1698d8u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x1698dc: 0x62a03
    ctx->pc = 0x1698dcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 8));
    // 0x1698e0: 0x62200
    ctx->pc = 0x1698e0u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 6), 8));
    // 0x1698e4: 0x61e02
    ctx->pc = 0x1698e4u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 6), 24));
    // 0x1698e8: 0x30a5ff00
    ctx->pc = 0x1698e8u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 65280));
    // 0x1698ec: 0x63600
    ctx->pc = 0x1698ecu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 24));
    // 0x1698f0: 0x882024
    ctx->pc = 0x1698f0u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x1698f4: 0x852025
    ctx->pc = 0x1698f4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1698f8: 0x661825
    ctx->pc = 0x1698f8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1698fc: 0x641825
    ctx->pc = 0x1698fcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x169900: 0xad430000
    ctx->pc = 0x169900u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x169904: 0x8d840024
    ctx->pc = 0x169904u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 12), 36)));
    // 0x169908: 0x43203
    ctx->pc = 0x169908u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 8));
    // 0x16990c: 0x42a00
    ctx->pc = 0x16990cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 4), 8));
    // 0x169910: 0x41e02
    ctx->pc = 0x169910u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 4), 24));
    // 0x169914: 0x30c6ff00
    ctx->pc = 0x169914u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), 65280));
    // 0x169918: 0x42600
    ctx->pc = 0x169918u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 24));
    // 0x16991c: 0xa82824
    ctx->pc = 0x16991cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x169920: 0xa62825
    ctx->pc = 0x169920u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x169924: 0x641825
    ctx->pc = 0x169924u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x169928: 0x651825
    ctx->pc = 0x169928u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x16992c: 0xad630000
    ctx->pc = 0x16992cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x169930: 0x8d840028
    ctx->pc = 0x169930u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 12), 40)));
    // 0x169934: 0x43203
    ctx->pc = 0x169934u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 8));
    // 0x169938: 0x42a00
    ctx->pc = 0x169938u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 4), 8));
    // 0x16993c: 0x41e02
    ctx->pc = 0x16993cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 4), 24));
    // 0x169940: 0xa82824
    ctx->pc = 0x169940u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x169944: 0x42600
    ctx->pc = 0x169944u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 24));
    // 0x169948: 0x30c6ff00
    ctx->pc = 0x169948u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), 65280));
    // 0x16994c: 0x641825
    ctx->pc = 0x16994cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x169950: 0xa62825
    ctx->pc = 0x169950u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x169954: 0x8fa40000
    ctx->pc = 0x169954u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169958: 0x651825
    ctx->pc = 0x169958u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x16995c: 0x3e00008
    ctx->pc = 0x16995Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169960u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1697F0u: goto label_1697f0;
            case 0x1697F8u: goto label_1697f8;
            case 0x169818u: goto label_169818;
            case 0x169820u: goto label_169820;
            default: break;
        }
        return;
    }
    ctx->pc = 0x169964u;
}
