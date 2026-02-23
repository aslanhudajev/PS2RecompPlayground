#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_DecodeHeaderSpsd
// Address: 0x168840 - 0x16893c
void ADXB_DecodeHeaderSpsd_0x168840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_DecodeHeaderSpsd");


    ctx->pc = 0x168840u;

    // 0x168840: 0x27bdffb0
    ctx->pc = 0x168840u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x168844: 0x24070001
    ctx->pc = 0x168844u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x168848: 0xffb00030
    ctx->pc = 0x168848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x16884c: 0x80802d
    ctx->pc = 0x16884cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168850: 0xffbf0040
    ctx->pc = 0x168850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x168854: 0xa6070002
    ctx->pc = 0x168854u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x168858: 0x260800aa
    ctx->pc = 0x168858u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 170));
    // 0x16885c: 0xa0202d
    ctx->pc = 0x16885cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168860: 0x26020018
    ctx->pc = 0x168860u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 24));
    // 0x168864: 0xc0282d
    ctx->pc = 0x168864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168868: 0x26030010
    ctx->pc = 0x168868u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 16));
    // 0x16886c: 0xafa80010
    ctx->pc = 0x16886cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x168870: 0x27a60020
    ctx->pc = 0x168870u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 32));
    // 0x168874: 0xafa20000
    ctx->pc = 0x168874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x168878: 0x2607000c
    ctx->pc = 0x168878u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 12));
    // 0x16887c: 0xafa30008
    ctx->pc = 0x16887cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x168880: 0x2608000d
    ctx->pc = 0x168880u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 13));
    // 0x168884: 0x2609000f
    ctx->pc = 0x168884u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 16), 15));
    // 0x168888: 0x260a000e
    ctx->pc = 0x168888u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 16), 14));
    // 0x16888c: 0xc05a1cc
    ctx->pc = 0x16888Cu;
    SET_GPR_U32(ctx, 31, 0x168894u);
    ctx->pc = 0x168890u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 16), 20));
    ctx->pc = 0x168730u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADX_DecodeInfoSpsd_0x168730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168894u; }
        else if (ctx->pc != 0x168894u) { ctx->pc = 0x168894u; }
    }
    if (ctx->pc != 0x168894u) { return; }
    ctx->pc = 0x168894u;
    // 0x168894: 0x4430003
    ctx->pc = 0x168894u;
    {
        const bool branch_taken_0x168894 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x168894) {
            ctx->pc = 0x168898u;
            SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
            ctx->pc = 0x1688A4u;
            goto label_1688a4;
        }
    }
    ctx->pc = 0x16889Cu;
    // 0x16889c: 0x10000023
    ctx->pc = 0x16889Cu;
    {
        const bool branch_taken_0x16889c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1688A0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16889c) {
            ctx->pc = 0x16892Cu;
            goto label_16892c;
        }
    }
    ctx->pc = 0x1688A4u;
label_1688a4:
    // 0x1688a4: 0x2602004c
    ctx->pc = 0x1688a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 76));
    // 0x1688a8: 0x820b000f
    ctx->pc = 0x1688a8u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
    // 0x1688ac: 0x24070002
    ctx->pc = 0x1688acu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1688b0: 0x8e0a0010
    ctx->pc = 0x1688b0u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1688b4: 0x40202d
    ctx->pc = 0x1688b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1688b8: 0x8e09003c
    ctx->pc = 0x1688b8u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1688bc: 0x282d
    ctx->pc = 0x1688bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1688c0: 0x8e080040
    ctx->pc = 0x1688c0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1688c4: 0x24060004
    ctx->pc = 0x1688c4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1688c8: 0x8e030044
    ctx->pc = 0x1688c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1688cc: 0xa600001c
    ctx->pc = 0x1688ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x1688d0: 0xa600004a
    ctx->pc = 0x1688d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 74), (uint16_t)GPR_U32(ctx, 0));
    // 0x1688d4: 0xa6000048
    ctx->pc = 0x1688d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 72), (uint16_t)GPR_U32(ctx, 0));
    // 0x1688d8: 0xa6000026
    ctx->pc = 0x1688d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x1688dc: 0xa6000024
    ctx->pc = 0x1688dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x1688e0: 0xae000034
    ctx->pc = 0x1688e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1688e4: 0xae000030
    ctx->pc = 0x1688e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1688e8: 0xae00002c
    ctx->pc = 0x1688e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1688ec: 0xae000028
    ctx->pc = 0x1688ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1688f0: 0xae000020
    ctx->pc = 0x1688f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1688f4: 0xa600007c
    ctx->pc = 0x1688f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
    // 0x1688f8: 0xa600007e
    ctx->pc = 0x1688f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 126), (uint16_t)GPR_U32(ctx, 0));
    // 0x1688fc: 0xae00009c
    ctx->pc = 0x1688fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x168900: 0xae000098
    ctx->pc = 0x168900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x168904: 0xa60700a8
    ctx->pc = 0x168904u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 168), (uint16_t)GPR_U32(ctx, 7));
    // 0x168908: 0xae0c0058
    ctx->pc = 0x168908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 12));
    // 0x16890c: 0xae0b005c
    ctx->pc = 0x16890cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 11));
    // 0x168910: 0xae0a0060
    ctx->pc = 0x168910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 10));
    // 0x168914: 0xae090064
    ctx->pc = 0x168914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 9));
    // 0x168918: 0xae080068
    ctx->pc = 0x168918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 8));
    // 0x16891c: 0xae03006c
    ctx->pc = 0x16891cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
    // 0x168920: 0xc050cfe
    ctx->pc = 0x168920u;
    SET_GPR_U32(ctx, 31, 0x168928u);
    ctx->pc = 0x168924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168928u; }
        else if (ctx->pc != 0x168928u) { ctx->pc = 0x168928u; }
    }
    if (ctx->pc != 0x168928u) { return; }
    ctx->pc = 0x168928u;
    // 0x168928: 0x87a20020
    ctx->pc = 0x168928u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_16892c:
    // 0x16892c: 0xdfbf0040
    ctx->pc = 0x16892cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x168930: 0xdfb00030
    ctx->pc = 0x168930u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x168934: 0x3e00008
    ctx->pc = 0x168934u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168938u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1688A4u: goto label_1688a4;
            case 0x16892Cu: goto label_16892c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16893Cu;
}
