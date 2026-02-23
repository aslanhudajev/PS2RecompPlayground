#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvvlc_SetDflPtr
// Address: 0x18c0d0 - 0x18c274
void mpvvlc_SetDflPtr_0x18c0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvvlc_SetDflPtr");


    ctx->pc = 0x18c0d0u;

    // 0x18c0d0: 0x27bdff70
    ctx->pc = 0x18c0d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x18c0d4: 0x3c020024
    ctx->pc = 0x18c0d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x18c0d8: 0xffb60060
    ctx->pc = 0x18c0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x18c0dc: 0x24421a78
    ctx->pc = 0x18c0dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6776));
    // 0x18c0e0: 0x3c160024
    ctx->pc = 0x18c0e0u;
    SET_GPR_U32(ctx, 22, ((uint32_t)36 << 16));
    // 0x18c0e4: 0x3c180024
    ctx->pc = 0x18c0e4u;
    SET_GPR_U32(ctx, 24, ((uint32_t)36 << 16));
    // 0x18c0e8: 0xaec21a28
    ctx->pc = 0x18c0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 6696), GPR_U32(ctx, 2));
    // 0x18c0ec: 0x3c190024
    ctx->pc = 0x18c0ecu;
    SET_GPR_U32(ctx, 25, ((uint32_t)36 << 16));
    // 0x18c0f0: 0x3c020024
    ctx->pc = 0x18c0f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x18c0f4: 0xffbe0080
    ctx->pc = 0x18c0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x18c0f8: 0x24421cf8
    ctx->pc = 0x18c0f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7416));
    // 0x18c0fc: 0x3c1e002c
    ctx->pc = 0x18c0fcu;
    SET_GPR_U32(ctx, 30, ((uint32_t)44 << 16));
    // 0x18c100: 0xaf021a30
    ctx->pc = 0x18c100u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 6704), GPR_U32(ctx, 2));
    // 0x18c104: 0x3c1e0024
    ctx->pc = 0x18c104u;
    SET_GPR_U32(ctx, 30, ((uint32_t)36 << 16));
    // 0x18c108: 0x3c020024
    ctx->pc = 0x18c108u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x18c10c: 0xffb70070
    ctx->pc = 0x18c10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x18c110: 0x24421df8
    ctx->pc = 0x18c110u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7672));
    // 0x18c114: 0xffb50050
    ctx->pc = 0x18c114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x18c118: 0xaf221a34
    ctx->pc = 0x18c118u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 6708), GPR_U32(ctx, 2));
    // 0x18c11c: 0x3c150024
    ctx->pc = 0x18c11cu;
    SET_GPR_U32(ctx, 21, ((uint32_t)36 << 16));
    // 0x18c120: 0x3c020024
    ctx->pc = 0x18c120u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x18c124: 0xffb40040
    ctx->pc = 0x18c124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x18c128: 0xffb30030
    ctx->pc = 0x18c128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x18c12c: 0x24421e38
    ctx->pc = 0x18c12cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7736));
    // 0x18c130: 0xffb20020
    ctx->pc = 0x18c130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x18c134: 0x3c140024
    ctx->pc = 0x18c134u;
    SET_GPR_U32(ctx, 20, ((uint32_t)36 << 16));
    // 0x18c138: 0xffb10010
    ctx->pc = 0x18c138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x18c13c: 0x3c130024
    ctx->pc = 0x18c13cu;
    SET_GPR_U32(ctx, 19, ((uint32_t)36 << 16));
    // 0x18c140: 0xffb00000
    ctx->pc = 0x18c140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18c144: 0x3c120024
    ctx->pc = 0x18c144u;
    SET_GPR_U32(ctx, 18, ((uint32_t)36 << 16));
    // 0x18c148: 0xafc21a38
    ctx->pc = 0x18c148u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6712), GPR_U32(ctx, 2));
    // 0x18c14c: 0x3c110024
    ctx->pc = 0x18c14cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)36 << 16));
    // 0x18c150: 0x3c020024
    ctx->pc = 0x18c150u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x18c154: 0x3c100024
    ctx->pc = 0x18c154u;
    SET_GPR_U32(ctx, 16, ((uint32_t)36 << 16));
    // 0x18c158: 0x24421f38
    ctx->pc = 0x18c158u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7992));
    // 0x18c15c: 0x3c0f0024
    ctx->pc = 0x18c15cu;
    SET_GPR_U32(ctx, 15, ((uint32_t)36 << 16));
    // 0x18c160: 0xaea21a3c
    ctx->pc = 0x18c160u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6716), GPR_U32(ctx, 2));
    // 0x18c164: 0x3c0e0024
    ctx->pc = 0x18c164u;
    SET_GPR_U32(ctx, 14, ((uint32_t)36 << 16));
    // 0x18c168: 0x3c020024
    ctx->pc = 0x18c168u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x18c16c: 0x3c0d0024
    ctx->pc = 0x18c16cu;
    SET_GPR_U32(ctx, 13, ((uint32_t)36 << 16));
    // 0x18c170: 0x24421f78
    ctx->pc = 0x18c170u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8056));
    // 0x18c174: 0x3c0c0024
    ctx->pc = 0x18c174u;
    SET_GPR_U32(ctx, 12, ((uint32_t)36 << 16));
    // 0x18c178: 0xae821a40
    ctx->pc = 0x18c178u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6720), GPR_U32(ctx, 2));
    // 0x18c17c: 0x3c0b0024
    ctx->pc = 0x18c17cu;
    SET_GPR_U32(ctx, 11, ((uint32_t)36 << 16));
    // 0x18c180: 0x3c020024
    ctx->pc = 0x18c180u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x18c184: 0x3c0a0024
    ctx->pc = 0x18c184u;
    SET_GPR_U32(ctx, 10, ((uint32_t)36 << 16));
    // 0x18c188: 0x24421fb8
    ctx->pc = 0x18c188u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8120));
    // 0x18c18c: 0x3c08002c
    ctx->pc = 0x18c18cu;
    SET_GPR_U32(ctx, 8, ((uint32_t)44 << 16));
    // 0x18c190: 0xae621a44
    ctx->pc = 0x18c190u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6724), GPR_U32(ctx, 2));
    // 0x18c194: 0x3c090024
    ctx->pc = 0x18c194u;
    SET_GPR_U32(ctx, 9, ((uint32_t)36 << 16));
    // 0x18c198: 0x3c020024
    ctx->pc = 0x18c198u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x18c19c: 0x3c06002c
    ctx->pc = 0x18c19cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)44 << 16));
    // 0x18c1a0: 0x24422038
    ctx->pc = 0x18c1a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8248));
    // 0x18c1a4: 0x3c070024
    ctx->pc = 0x18c1a4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)36 << 16));
    // 0x18c1a8: 0xae421a48
    ctx->pc = 0x18c1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6728), GPR_U32(ctx, 2));
    // 0x18c1ac: 0x3c030024
    ctx->pc = 0x18c1acu;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x18c1b0: 0x3c020024
    ctx->pc = 0x18c1b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x18c1b4: 0x3c040024
    ctx->pc = 0x18c1b4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x18c1b8: 0x24422138
    ctx->pc = 0x18c1b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8504));
    // 0x18c1bc: 0x24631c78
    ctx->pc = 0x18c1bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7288));
    // 0x18c1c0: 0xae221a4c
    ctx->pc = 0x18c1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6732), GPR_U32(ctx, 2));
    // 0x18c1c4: 0x3c170024
    ctx->pc = 0x18c1c4u;
    SET_GPR_U32(ctx, 23, ((uint32_t)36 << 16));
    // 0x18c1c8: 0x3c020024
    ctx->pc = 0x18c1c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x18c1cc: 0xaee31a2c
    ctx->pc = 0x18c1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 6700), GPR_U32(ctx, 3));
    // 0x18c1d0: 0x24422178
    ctx->pc = 0x18c1d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8568));
    // 0x18c1d4: 0x3c050024
    ctx->pc = 0x18c1d4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x18c1d8: 0xae021a50
    ctx->pc = 0x18c1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6736), GPR_U32(ctx, 2));
    // 0x18c1dc: 0x3c020024
    ctx->pc = 0x18c1dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x18c1e0: 0xdfbe0080
    ctx->pc = 0x18c1e0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18c1e4: 0x24422578
    ctx->pc = 0x18c1e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9592));
    // 0x18c1e8: 0xdfb70070
    ctx->pc = 0x18c1e8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18c1ec: 0xade21a54
    ctx->pc = 0x18c1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 6740), GPR_U32(ctx, 2));
    // 0x18c1f0: 0x3c020024
    ctx->pc = 0x18c1f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x18c1f4: 0xdfb60060
    ctx->pc = 0x18c1f4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18c1f8: 0x244225f8
    ctx->pc = 0x18c1f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9720));
    // 0x18c1fc: 0xdfb50050
    ctx->pc = 0x18c1fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18c200: 0xadc21a58
    ctx->pc = 0x18c200u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 6744), GPR_U32(ctx, 2));
    // 0x18c204: 0x3c02002c
    ctx->pc = 0x18c204u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x18c208: 0xdfb40040
    ctx->pc = 0x18c208u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18c20c: 0x2442ca40
    ctx->pc = 0x18c20cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294953536));
    // 0x18c210: 0xdfb30030
    ctx->pc = 0x18c210u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18c214: 0xada21a5c
    ctx->pc = 0x18c214u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 6748), GPR_U32(ctx, 2));
    // 0x18c218: 0x3c02002c
    ctx->pc = 0x18c218u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x18c21c: 0xdfb20020
    ctx->pc = 0x18c21cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18c220: 0x2442ca60
    ctx->pc = 0x18c220u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294953568));
    // 0x18c224: 0xdfb10010
    ctx->pc = 0x18c224u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c228: 0xad821a60
    ctx->pc = 0x18c228u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 6752), GPR_U32(ctx, 2));
    // 0x18c22c: 0x3c02002c
    ctx->pc = 0x18c22cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x18c230: 0xdfb00000
    ctx->pc = 0x18c230u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c234: 0x2442ca80
    ctx->pc = 0x18c234u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294953600));
    // 0x18c238: 0xad621a64
    ctx->pc = 0x18c238u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 6756), GPR_U32(ctx, 2));
    // 0x18c23c: 0x3c02002c
    ctx->pc = 0x18c23cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x18c240: 0x2442caa0
    ctx->pc = 0x18c240u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294953632));
    // 0x18c244: 0xad421a68
    ctx->pc = 0x18c244u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 6760), GPR_U32(ctx, 2));
    // 0x18c248: 0x100102d
    ctx->pc = 0x18c248u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c24c: 0x2442cac0
    ctx->pc = 0x18c24cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294953664));
    // 0x18c250: 0xad221a6c
    ctx->pc = 0x18c250u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 6764), GPR_U32(ctx, 2));
    // 0x18c254: 0xc0102d
    ctx->pc = 0x18c254u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c258: 0x2442cae0
    ctx->pc = 0x18c258u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294953696));
    // 0x18c25c: 0xace21a70
    ctx->pc = 0x18c25cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6768), GPR_U32(ctx, 2));
    // 0x18c260: 0x80102d
    ctx->pc = 0x18c260u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c264: 0x24422678
    ctx->pc = 0x18c264u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9848));
    // 0x18c268: 0xaca21a74
    ctx->pc = 0x18c268u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6772), GPR_U32(ctx, 2));
    // 0x18c26c: 0x3e00008
    ctx->pc = 0x18C26Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C270u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18C274u;
}
