#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: draw24bitFSImage
// Address: 0x1040a8 - 0x104318
void draw24bitFSImage_0x1040a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1040a8u;

    // 0x1040a8: 0x27bdff80
    ctx->pc = 0x1040a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1040ac: 0x24052b00
    ctx->pc = 0x1040acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x1040b0: 0xffb60060
    ctx->pc = 0x1040b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1040b4: 0x24060280
    ctx->pc = 0x1040b4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 640));
    // 0x1040b8: 0xffb50050
    ctx->pc = 0x1040b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1040bc: 0xffb40040
    ctx->pc = 0x1040bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1040c0: 0xffb30030
    ctx->pc = 0x1040c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1040c4: 0xffb20020
    ctx->pc = 0x1040c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1040c8: 0xffb10010
    ctx->pc = 0x1040c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1040cc: 0xffb00000
    ctx->pc = 0x1040ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1040d0: 0xffbf0070
    ctx->pc = 0x1040d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1040d4: 0xc040d1c
    ctx->pc = 0x1040D4u;
    SET_GPR_U32(ctx, 31, 0x1040DCu);
    ctx->pc = 0x1040D8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 512));
    ctx->pc = 0x103470u;
    {
        const uint32_t __entryPc = ctx->pc;
        load24bitImage_0x103470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1040DCu; }
    }
    if (ctx->pc != 0x1040DCu) { return; }
    ctx->pc = 0x1040DCu;
    // 0x1040dc: 0x8f8882b8
    ctx->pc = 0x1040dcu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x1040e0: 0x700014a9
    ctx->pc = 0x1040e0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1040e4: 0x3c051000
    ctx->pc = 0x1040e4u;
    SET_GPR_S32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x1040e8: 0x3c061000
    ctx->pc = 0x1040e8u;
    SET_GPR_S32(ctx, 6, ((uint32_t)4096 << 16));
    // 0x1040ec: 0x6303c
    ctx->pc = 0x1040ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1040f0: 0x34c60007
    ctx->pc = 0x1040f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)7);
    // 0x1040f4: 0x7d020000
    ctx->pc = 0x1040f4u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x1040f8: 0x2407000e
    ctx->pc = 0x1040f8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1040fc: 0x2402003f
    ctx->pc = 0x1040fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 63));
    // 0x104100: 0xad050000
    ctx->pc = 0x104100u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x104104: 0xfd020028
    ctx->pc = 0x104104u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 40), GPR_U64(ctx, 2));
    // 0x104108: 0x24040200
    ctx->pc = 0x104108u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 512));
    // 0x10410c: 0x24050002
    ctx->pc = 0x10410cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x104110: 0xfd060010
    ctx->pc = 0x104110u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 6));
    // 0x104114: 0xfd070018
    ctx->pc = 0x104114u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 7));
    // 0x104118: 0xc040a92
    ctx->pc = 0x104118u;
    SET_GPR_U32(ctx, 31, 0x104120u);
    ctx->pc = 0x10411Cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 32), GPR_U64(ctx, 0));
    ctx->pc = 0x102A48u;
    {
        const uint32_t __entryPc = ctx->pc;
        power_0x102a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104120u; }
    }
    if (ctx->pc != 0x104120u) { return; }
    ctx->pc = 0x104120u;
    // 0x104120: 0x40802d
    ctx->pc = 0x104120u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104124: 0x24040280
    ctx->pc = 0x104124u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 640));
    // 0x104128: 0xc040a92
    ctx->pc = 0x104128u;
    SET_GPR_U32(ctx, 31, 0x104130u);
    ctx->pc = 0x10412Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x102A48u;
    {
        const uint32_t __entryPc = ctx->pc;
        power_0x102a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104130u; }
    }
    if (ctx->pc != 0x104130u) { return; }
    ctx->pc = 0x104130u;
    // 0x104130: 0x216b8
    ctx->pc = 0x104130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
    // 0x104134: 0x1087b8
    ctx->pc = 0x104134u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 30);
    // 0x104138: 0x2028025
    ctx->pc = 0x104138u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x10413c: 0x8f9882b8
    ctx->pc = 0x10413cu;
    SET_GPR_U32(ctx, 24, READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x104140: 0x3c022000
    ctx->pc = 0x104140u;
    SET_GPR_S32(ctx, 2, ((uint32_t)8192 << 16));
    // 0x104144: 0x21438
    ctx->pc = 0x104144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x104148: 0x34420002
    ctx->pc = 0x104148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)2);
    // 0x10414c: 0x21438
    ctx->pc = 0x10414cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x104150: 0x34428000
    ctx->pc = 0x104150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)32768);
    // 0x104154: 0x24090008
    ctx->pc = 0x104154u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 8));
    // 0x104158: 0x2028025
    ctx->pc = 0x104158u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x10415c: 0x24166bf8
    ctx->pc = 0x10415cu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 27640));
    // 0x104160: 0x24020004
    ctx->pc = 0x104160u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x104164: 0x21438
    ctx->pc = 0x104164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x104168: 0x34420010
    ctx->pc = 0x104168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)16);
    // 0x10416c: 0x21438
    ctx->pc = 0x10416cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x104170: 0x34422b00
    ctx->pc = 0x104170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)11008);
    // 0x104174: 0x24040154
    ctx->pc = 0x104174u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 340));
    // 0x104178: 0x2028025
    ctx->pc = 0x104178u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x10417c: 0x24050048
    ctx->pc = 0x10417cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 72));
    // 0x104180: 0x24020006
    ctx->pc = 0x104180u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x104184: 0x24070042
    ctx->pc = 0x104184u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 66));
    // 0x104188: 0x3c0a7f7f
    ctx->pc = 0x104188u;
    SET_GPR_S32(ctx, 10, ((uint32_t)32639 << 16));
    // 0x10418c: 0x354a7f7f
    ctx->pc = 0x10418cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)32639);
    // 0x104190: 0x240b0001
    ctx->pc = 0x104190u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 1));
    // 0x104194: 0x3c0c0002
    ctx->pc = 0x104194u;
    SET_GPR_S32(ctx, 12, ((uint32_t)2 << 16));
    // 0x104198: 0x240e0047
    ctx->pc = 0x104198u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 0), 71));
    // 0x10419c: 0x2411007f
    ctx->pc = 0x10419cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 127));
    // 0x1041a0: 0x11883c
    ctx->pc = 0x1041a0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1041a4: 0x3631807f
    ctx->pc = 0x1041a4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)32895);
    // 0x1041a8: 0x2412003b
    ctx->pc = 0x1041a8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 59));
    // 0x1041ac: 0x3c138000
    ctx->pc = 0x1041acu;
    SET_GPR_S32(ctx, 19, ((uint32_t)32768 << 16));
    // 0x1041b0: 0x13983c
    ctx->pc = 0x1041b0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1041b4: 0x36738001
    ctx->pc = 0x1041b4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)32769);
    // 0x1041b8: 0x3c154343
    ctx->pc = 0x1041b8u;
    SET_GPR_S32(ctx, 21, ((uint32_t)17219 << 16));
    // 0x1041bc: 0x36b54343
    ctx->pc = 0x1041bcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)17219);
    // 0x1041c0: 0xff100030
    ctx->pc = 0x1041c0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 48), GPR_U64(ctx, 16));
    // 0x1041c4: 0x3c080010
    ctx->pc = 0x1041c4u;
    SET_GPR_S32(ctx, 8, ((uint32_t)16 << 16));
    // 0x1041c8: 0xff020038
    ctx->pc = 0x1041c8u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 56), GPR_U64(ctx, 2));
    // 0x1041cc: 0x270600b0
    ctx->pc = 0x1041ccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 24), 176));
    // 0x1041d0: 0xff040040
    ctx->pc = 0x1041d0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 64), GPR_U64(ctx, 4));
    // 0x1041d4: 0x240d6ff8
    ctx->pc = 0x1041d4u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 0), 28664));
    // 0x1041d8: 0xff050050
    ctx->pc = 0x1041d8u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 80), GPR_U64(ctx, 5));
    // 0x1041dc: 0x241027f8
    ctx->pc = 0x1041dcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 10232));
    // 0x1041e0: 0xff070058
    ctx->pc = 0x1041e0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 88), GPR_U64(ctx, 7));
    // 0x1041e4: 0x34149408
    ctx->pc = 0x1041e4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)37896);
    // 0x1041e8: 0xff0a0060
    ctx->pc = 0x1041e8u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 96), GPR_U64(ctx, 10));
    // 0x1041ec: 0x270200d0
    ctx->pc = 0x1041ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 24), 208));
    // 0x1041f0: 0xff0b0068
    ctx->pc = 0x1041f0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 104), GPR_U64(ctx, 11));
    // 0x1041f4: 0x240f1ff8
    ctx->pc = 0x1041f4u;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 0), 8184));
    // 0x1041f8: 0xff110080
    ctx->pc = 0x1041f8u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 128), GPR_U64(ctx, 17));
    // 0x1041fc: 0x270500f0
    ctx->pc = 0x1041fcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 24), 240));
    // 0x104200: 0xff120088
    ctx->pc = 0x104200u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 136), GPR_U64(ctx, 18));
    // 0x104204: 0x340a9008
    ctx->pc = 0x104204u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)36872);
    // 0x104208: 0xff130090
    ctx->pc = 0x104208u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 144), GPR_U64(ctx, 19));
    // 0x10420c: 0x27070110
    ctx->pc = 0x10420cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 24), 272));
    // 0x104210: 0xff150098
    ctx->pc = 0x104210u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 152), GPR_U64(ctx, 21));
    // 0x104214: 0x3c0b7000
    ctx->pc = 0x104214u;
    SET_GPR_S32(ctx, 11, ((uint32_t)28672 << 16));
    // 0x104218: 0xaf1600b0
    ctx->pc = 0x104218u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 176), GPR_U32(ctx, 22));
    // 0x10421c: 0x202d
    ctx->pc = 0x10421cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104220: 0xff0c0070
    ctx->pc = 0x104220u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 112), GPR_U64(ctx, 12));
    // 0x104224: 0xff0e0078
    ctx->pc = 0x104224u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 120), GPR_U64(ctx, 14));
    // 0x104228: 0xff000048
    ctx->pc = 0x104228u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 72), GPR_U64(ctx, 0));
    // 0x10422c: 0xaf0900a0
    ctx->pc = 0x10422cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 160), GPR_U32(ctx, 9));
    // 0x104230: 0xaf0900a4
    ctx->pc = 0x104230u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 164), GPR_U32(ctx, 9));
    // 0x104234: 0xacc0000c
    ctx->pc = 0x104234u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x104238: 0xaccd0004
    ctx->pc = 0x104238u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 13));
    // 0x10423c: 0xacc80008
    ctx->pc = 0x10423cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x104240: 0xaf1000c0
    ctx->pc = 0x104240u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 192), GPR_U32(ctx, 16));
    // 0x104244: 0xaf1400d0
    ctx->pc = 0x104244u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 208), GPR_U32(ctx, 20));
    // 0x104248: 0xaf0900c4
    ctx->pc = 0x104248u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 196), GPR_U32(ctx, 9));
    // 0x10424c: 0xac4d0004
    ctx->pc = 0x10424cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 13));
    // 0x104250: 0xac40000c
    ctx->pc = 0x104250u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x104254: 0xac480008
    ctx->pc = 0x104254u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 8));
    // 0x104258: 0xaf1600f0
    ctx->pc = 0x104258u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 240), GPR_U32(ctx, 22));
    // 0x10425c: 0x700014a9
    ctx->pc = 0x10425cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x104260: 0xaf0900e0
    ctx->pc = 0x104260u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 224), GPR_U32(ctx, 9));
    // 0x104264: 0xaf0f00e4
    ctx->pc = 0x104264u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 228), GPR_U32(ctx, 15));
    // 0x104268: 0xaca0000c
    ctx->pc = 0x104268u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x10426c: 0xacaa0004
    ctx->pc = 0x10426cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 10));
    // 0x104270: 0xaca80008
    ctx->pc = 0x104270u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 8));
    // 0x104274: 0xaf100100
    ctx->pc = 0x104274u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 256), GPR_U32(ctx, 16));
    // 0x104278: 0xaf140110
    ctx->pc = 0x104278u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 272), GPR_U32(ctx, 20));
    // 0x10427c: 0xaf0f0104
    ctx->pc = 0x10427cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 260), GPR_U32(ctx, 15));
    // 0x104280: 0xacea0004
    ctx->pc = 0x104280u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 10));
    // 0x104284: 0xace80008
    ctx->pc = 0x104284u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 8));
    // 0x104288: 0xace0000c
    ctx->pc = 0x104288u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x10428c: 0x7f020120
    ctx->pc = 0x10428cu;
    WRITE128(ADD32(GPR_U32(ctx, 24), 288), GPR_VEC(ctx, 2));
    // 0x104290: 0x8f020000
    ctx->pc = 0x104290u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x104294: 0xaf0b0120
    ctx->pc = 0x104294u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 288), GPR_U32(ctx, 11));
    // 0x104298: 0x34420011
    ctx->pc = 0x104298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)17);
    // 0x10429c: 0xc043948
    ctx->pc = 0x10429Cu;
    SET_GPR_U32(ctx, 31, 0x1042A4u);
    ctx->pc = 0x1042A0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x10E520u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x10e520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1042A4u; }
    }
    if (ctx->pc != 0x1042A4u) { return; }
    ctx->pc = 0x1042A4u;
    // 0x1042a4: 0x202d
    ctx->pc = 0x1042a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1042a8: 0xc043322
    ctx->pc = 0x1042A8u;
    SET_GPR_U32(ctx, 31, 0x1042B0u);
    ctx->pc = 0x1042ACu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10CC88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1042B0u; }
    }
    if (ctx->pc != 0x1042B0u) { return; }
    ctx->pc = 0x1042B0u;
    // 0x1042b0: 0x8f848490
    ctx->pc = 0x1042b0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x1042b4: 0x282d
    ctx->pc = 0x1042b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1042b8: 0xc04372a
    ctx->pc = 0x1042B8u;
    SET_GPR_U32(ctx, 31, 0x1042C0u);
    ctx->pc = 0x1042BCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10DCA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSync_0x10dca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1042C0u; }
    }
    if (ctx->pc != 0x1042C0u) { return; }
    ctx->pc = 0x1042C0u;
    // 0x1042c0: 0x8f8382b8
    ctx->pc = 0x1042c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x1042c4: 0x3c050fff
    ctx->pc = 0x1042c4u;
    SET_GPR_S32(ctx, 5, ((uint32_t)4095 << 16));
    // 0x1042c8: 0x34a5ffff
    ctx->pc = 0x1042c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)65535);
    // 0x1042cc: 0x8f848490
    ctx->pc = 0x1042ccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x1042d0: 0xc0435d6
    ctx->pc = 0x1042D0u;
    SET_GPR_U32(ctx, 31, 0x1042D8u);
    ctx->pc = 0x1042D4u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->pc = 0x10D758u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSend_0x10d758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1042D8u; }
    }
    if (ctx->pc != 0x1042D8u) { return; }
    ctx->pc = 0x1042D8u;
    // 0x1042d8: 0x202d
    ctx->pc = 0x1042d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1042dc: 0xc043322
    ctx->pc = 0x1042DCu;
    SET_GPR_U32(ctx, 31, 0x1042E4u);
    ctx->pc = 0x1042E0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10CC88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1042E4u; }
    }
    if (ctx->pc != 0x1042E4u) { return; }
    ctx->pc = 0x1042E4u;
    // 0x1042e4: 0x8f848490
    ctx->pc = 0x1042e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x1042e8: 0x282d
    ctx->pc = 0x1042e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1042ec: 0xdfbf0070
    ctx->pc = 0x1042ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1042f0: 0x302d
    ctx->pc = 0x1042f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1042f4: 0xdfb60060
    ctx->pc = 0x1042f4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1042f8: 0xdfb50050
    ctx->pc = 0x1042f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1042fc: 0xdfb40040
    ctx->pc = 0x1042fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x104300: 0xdfb30030
    ctx->pc = 0x104300u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x104304: 0xdfb20020
    ctx->pc = 0x104304u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x104308: 0xdfb10010
    ctx->pc = 0x104308u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10430c: 0xdfb00000
    ctx->pc = 0x10430cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104310: 0x804372a
    ctx->pc = 0x104310u;
    ctx->pc = 0x104314u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
    ctx->pc = 0x10DCA8u;
    sceDmaSync_0x10dca8(rdram, ctx, runtime); return;
    ctx->pc = 0x104318u;
}
