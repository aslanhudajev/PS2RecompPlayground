#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_DecodeHeaderAu
// Address: 0x167580 - 0x167684
void ADXB_DecodeHeaderAu_0x167580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_DecodeHeaderAu");


    ctx->pc = 0x167580u;

    // 0x167580: 0x27bdffb0
    ctx->pc = 0x167580u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x167584: 0x24070001
    ctx->pc = 0x167584u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x167588: 0xffb00030
    ctx->pc = 0x167588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x16758c: 0x27a80024
    ctx->pc = 0x16758cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 36));
    // 0x167590: 0x80802d
    ctx->pc = 0x167590u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167594: 0xffbf0040
    ctx->pc = 0x167594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x167598: 0xa6070002
    ctx->pc = 0x167598u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x16759c: 0xa0202d
    ctx->pc = 0x16759cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1675a0: 0x26020018
    ctx->pc = 0x1675a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 24));
    // 0x1675a4: 0xc0282d
    ctx->pc = 0x1675a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1675a8: 0x26030010
    ctx->pc = 0x1675a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 16));
    // 0x1675ac: 0xafa80010
    ctx->pc = 0x1675acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x1675b0: 0xafa20000
    ctx->pc = 0x1675b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1675b4: 0x27a60020
    ctx->pc = 0x1675b4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1675b8: 0xafa30008
    ctx->pc = 0x1675b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1675bc: 0x2607000c
    ctx->pc = 0x1675bcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 12));
    // 0x1675c0: 0x2608000d
    ctx->pc = 0x1675c0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 13));
    // 0x1675c4: 0x2609000f
    ctx->pc = 0x1675c4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 16), 15));
    // 0x1675c8: 0x260a000e
    ctx->pc = 0x1675c8u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 16), 14));
    // 0x1675cc: 0xc059d1c
    ctx->pc = 0x1675CCu;
    SET_GPR_U32(ctx, 31, 0x1675D4u);
    ctx->pc = 0x1675D0u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 16), 20));
    ctx->pc = 0x167470u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADX_DecodeInfoAu_0x167470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1675D4u; }
        else if (ctx->pc != 0x1675D4u) { ctx->pc = 0x1675D4u; }
    }
    if (ctx->pc != 0x1675D4u) { return; }
    ctx->pc = 0x1675D4u;
    // 0x1675d4: 0x4410003
    ctx->pc = 0x1675D4u;
    {
        const bool branch_taken_0x1675d4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1675D8u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 36)));
        if (branch_taken_0x1675d4) {
            ctx->pc = 0x1675E4u;
            goto label_1675e4;
        }
    }
    ctx->pc = 0x1675DCu;
    // 0x1675dc: 0x10000025
    ctx->pc = 0x1675DCu;
    {
        const bool branch_taken_0x1675dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1675E0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1675dc) {
            ctx->pc = 0x167674u;
            goto label_167674;
        }
    }
    ctx->pc = 0x1675E4u;
label_1675e4:
    // 0x1675e4: 0x2603004c
    ctx->pc = 0x1675e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 76));
    // 0x1675e8: 0x820c000e
    ctx->pc = 0x1675e8u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1675ec: 0x240d0004
    ctx->pc = 0x1675ecu;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1675f0: 0x820b000f
    ctx->pc = 0x1675f0u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
    // 0x1675f4: 0x60202d
    ctx->pc = 0x1675f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1675f8: 0x8e0a0010
    ctx->pc = 0x1675f8u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1675fc: 0x282d
    ctx->pc = 0x1675fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167600: 0x8e09003c
    ctx->pc = 0x167600u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x167604: 0x24060004
    ctx->pc = 0x167604u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x167608: 0x8e080040
    ctx->pc = 0x167608u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x16760c: 0x8e070044
    ctx->pc = 0x16760cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x167610: 0xa600001c
    ctx->pc = 0x167610u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x167614: 0xa600004a
    ctx->pc = 0x167614u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 74), (uint16_t)GPR_U32(ctx, 0));
    // 0x167618: 0xa6000048
    ctx->pc = 0x167618u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 72), (uint16_t)GPR_U32(ctx, 0));
    // 0x16761c: 0xa6000026
    ctx->pc = 0x16761cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x167620: 0xa6000024
    ctx->pc = 0x167620u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x167624: 0xae000034
    ctx->pc = 0x167624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x167628: 0xae000030
    ctx->pc = 0x167628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x16762c: 0xae00002c
    ctx->pc = 0x16762cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x167630: 0xae000028
    ctx->pc = 0x167630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x167634: 0xae000020
    ctx->pc = 0x167634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x167638: 0xa600007c
    ctx->pc = 0x167638u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
    // 0x16763c: 0xa600007e
    ctx->pc = 0x16763cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 126), (uint16_t)GPR_U32(ctx, 0));
    // 0x167640: 0xae00009c
    ctx->pc = 0x167640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x167644: 0xae000098
    ctx->pc = 0x167644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x167648: 0xa60200aa
    ctx->pc = 0x167648u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 170), (uint16_t)GPR_U32(ctx, 2));
    // 0x16764c: 0xae0c0058
    ctx->pc = 0x16764cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 12));
    // 0x167650: 0xae0b005c
    ctx->pc = 0x167650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 11));
    // 0x167654: 0xae0a0060
    ctx->pc = 0x167654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 10));
    // 0x167658: 0xae090064
    ctx->pc = 0x167658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 9));
    // 0x16765c: 0xae080068
    ctx->pc = 0x16765cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 8));
    // 0x167660: 0xae07006c
    ctx->pc = 0x167660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 7));
    // 0x167664: 0xa60d00a8
    ctx->pc = 0x167664u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 168), (uint16_t)GPR_U32(ctx, 13));
    // 0x167668: 0xc050cfe
    ctx->pc = 0x167668u;
    SET_GPR_U32(ctx, 31, 0x167670u);
    ctx->pc = 0x16766Cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167670u; }
        else if (ctx->pc != 0x167670u) { ctx->pc = 0x167670u; }
    }
    if (ctx->pc != 0x167670u) { return; }
    ctx->pc = 0x167670u;
    // 0x167670: 0x87a20020
    ctx->pc = 0x167670u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_167674:
    // 0x167674: 0xdfbf0040
    ctx->pc = 0x167674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x167678: 0xdfb00030
    ctx->pc = 0x167678u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16767c: 0x3e00008
    ctx->pc = 0x16767Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167680u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1675E4u: goto label_1675e4;
            case 0x167674u: goto label_167674;
            default: break;
        }
        return;
    }
    ctx->pc = 0x167684u;
}
