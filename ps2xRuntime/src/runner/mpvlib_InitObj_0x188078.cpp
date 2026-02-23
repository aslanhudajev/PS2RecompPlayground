#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvlib_InitObj
// Address: 0x188078 - 0x188188
void mpvlib_InitObj_0x188078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvlib_InitObj");


    ctx->pc = 0x188078u;

    // 0x188078: 0x3c020024
    ctx->pc = 0x188078u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x18807c: 0x3c030024
    ctx->pc = 0x18807cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x188080: 0x8c491a70
    ctx->pc = 0x188080u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 2), 6768)));
    // 0x188084: 0x27bdffa0
    ctx->pc = 0x188084u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x188088: 0x8c681a6c
    ctx->pc = 0x188088u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 3), 6764)));
    // 0x18808c: 0x3c070024
    ctx->pc = 0x18808cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)36 << 16));
    // 0x188090: 0x8cec15c0
    ctx->pc = 0x188090u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 7), 5568)));
    // 0x188094: 0x3c0d002e
    ctx->pc = 0x188094u;
    SET_GPR_U32(ctx, 13, ((uint32_t)46 << 16));
    // 0x188098: 0xffb50050
    ctx->pc = 0x188098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x18809c: 0x3c050024
    ctx->pc = 0x18809cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x1880a0: 0xffb30030
    ctx->pc = 0x1880a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1880a4: 0x3c0a0024
    ctx->pc = 0x1880a4u;
    SET_GPR_U32(ctx, 10, ((uint32_t)36 << 16));
    // 0x1880a8: 0xffb20020
    ctx->pc = 0x1880a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1880ac: 0x3c020024
    ctx->pc = 0x1880acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x1880b0: 0xffb10010
    ctx->pc = 0x1880b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1880b4: 0x3c030024
    ctx->pc = 0x1880b4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x1880b8: 0x3c0b0024
    ctx->pc = 0x1880b8u;
    SET_GPR_U32(ctx, 11, ((uint32_t)36 << 16));
    // 0x1880bc: 0x8ca61a68
    ctx->pc = 0x1880bcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 5), 6760)));
    // 0x1880c0: 0x8d511a74
    ctx->pc = 0x1880c0u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 10), 6772)));
    // 0x1880c4: 0x248500e8
    ctx->pc = 0x1880c4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 232));
    // 0x1880c8: 0x8c551a64
    ctx->pc = 0x1880c8u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 2), 6756)));
    // 0x1880cc: 0x2529fff0
    ctx->pc = 0x1880ccu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4294967280));
    // 0x1880d0: 0x8c731a60
    ctx->pc = 0x1880d0u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 3), 6752)));
    // 0x1880d4: 0x2508ffe0
    ctx->pc = 0x1880d4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294967264));
    // 0x1880d8: 0x8d721a5c
    ctx->pc = 0x1880d8u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 11), 6748)));
    // 0x1880dc: 0x24c6ffe0
    ctx->pc = 0x1880dcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x1880e0: 0xffb40040
    ctx->pc = 0x1880e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1880e4: 0x248f0660
    ctx->pc = 0x1880e4u;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 4), 1632));
    // 0x1880e8: 0xffb00000
    ctx->pc = 0x1880e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1880ec: 0x249402e0
    ctx->pc = 0x1880ecu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 4), 736));
    // 0x1880f0: 0x8da742c0
    ctx->pc = 0x1880f0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 13), 17088)));
    // 0x1880f4: 0x248307e0
    ctx->pc = 0x1880f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 2016));
    // 0x1880f8: 0xac8c00e8
    ctx->pc = 0x1880f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 12));
    // 0x1880fc: 0x248a03e0
    ctx->pc = 0x1880fcu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 4), 992));
    // 0x188100: 0xac8c0038
    ctx->pc = 0x188100u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 12));
    // 0x188104: 0x24f00060
    ctx->pc = 0x188104u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 7), 96));
    // 0x188108: 0xacb40004
    ctx->pc = 0x188108u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 20));
    // 0x18810c: 0x24ee0020
    ctx->pc = 0x18810cu;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 7), 32));
    // 0x188110: 0x248b0460
    ctx->pc = 0x188110u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 4), 1120));
    // 0x188114: 0x248c04e0
    ctx->pc = 0x188114u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 4), 1248));
    // 0x188118: 0x24820360
    ctx->pc = 0x188118u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 864));
    // 0x18811c: 0xac910010
    ctx->pc = 0x18811cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 17));
    // 0x188120: 0xac950020
    ctx->pc = 0x188120u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 21));
    // 0x188124: 0x248d0560
    ctx->pc = 0x188124u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 4), 1376));
    // 0x188128: 0xac930024
    ctx->pc = 0x188128u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 19));
    // 0x18812c: 0xac920028
    ctx->pc = 0x18812cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 18));
    // 0x188130: 0xac900034
    ctx->pc = 0x188130u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 16));
    // 0x188134: 0xaca3000c
    ctx->pc = 0x188134u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x188138: 0xac8202cc
    ctx->pc = 0x188138u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 716), GPR_U32(ctx, 2));
    // 0x18813c: 0xac890014
    ctx->pc = 0x18813cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 9));
    // 0x188140: 0xac880018
    ctx->pc = 0x188140u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 8));
    // 0x188144: 0xac86001c
    ctx->pc = 0x188144u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 6));
    // 0x188148: 0xac8e002c
    ctx->pc = 0x188148u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 14));
    // 0x18814c: 0xacaf0008
    ctx->pc = 0x18814cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 15));
    // 0x188150: 0xac8a02b8
    ctx->pc = 0x188150u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 696), GPR_U32(ctx, 10));
    // 0x188154: 0xac8b02bc
    ctx->pc = 0x188154u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 700), GPR_U32(ctx, 11));
    // 0x188158: 0xac8c02c0
    ctx->pc = 0x188158u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 704), GPR_U32(ctx, 12));
    // 0x18815c: 0xac8d02c4
    ctx->pc = 0x18815cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 708), GPR_U32(ctx, 13));
    // 0x188160: 0xac9402c8
    ctx->pc = 0x188160u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 712), GPR_U32(ctx, 20));
    // 0x188164: 0xdfb50050
    ctx->pc = 0x188164u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x188168: 0xdfb40040
    ctx->pc = 0x188168u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18816c: 0xdfb30030
    ctx->pc = 0x18816cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x188170: 0xdfb20020
    ctx->pc = 0x188170u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188174: 0xdfb10010
    ctx->pc = 0x188174u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188178: 0xdfb00000
    ctx->pc = 0x188178u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18817c: 0xac870030
    ctx->pc = 0x18817cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 7));
    // 0x188180: 0x3e00008
    ctx->pc = 0x188180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188184u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x188188u;
}
