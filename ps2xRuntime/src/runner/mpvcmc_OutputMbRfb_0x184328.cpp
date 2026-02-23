#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvcmc_OutputMbRfb
// Address: 0x184328 - 0x184598
void mpvcmc_OutputMbRfb_0x184328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvcmc_OutputMbRfb");


    ctx->pc = 0x184328u;

    // 0x184328: 0x8ca80000
    ctx->pc = 0x184328u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18432c: 0x8cc20000
    ctx->pc = 0x18432cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x184330: 0xdc870000
    ctx->pc = 0x184330u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x184334: 0x84ca000c
    ctx->pc = 0x184334u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x184338: 0x484821
    ctx->pc = 0x184338u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x18433c: 0xfd270000
    ctx->pc = 0x18433cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 7));
    // 0x184340: 0xa18c2
    ctx->pc = 0x184340u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 10), 3));
    // 0x184344: 0x8cc70004
    ctx->pc = 0x184344u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x184348: 0x318c0
    ctx->pc = 0x184348u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x18434c: 0xdc820008
    ctx->pc = 0x18434cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x184350: 0x1234821
    ctx->pc = 0x184350u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x184354: 0xfd220000
    ctx->pc = 0x184354u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x184358: 0x1234821
    ctx->pc = 0x184358u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x18435c: 0xdc820010
    ctx->pc = 0x18435cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x184360: 0xfd220000
    ctx->pc = 0x184360u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x184364: 0x1234821
    ctx->pc = 0x184364u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x184368: 0xdc820018
    ctx->pc = 0x184368u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x18436c: 0xfd220000
    ctx->pc = 0x18436cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x184370: 0x1234821
    ctx->pc = 0x184370u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x184374: 0xdc820020
    ctx->pc = 0x184374u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x184378: 0xfd220000
    ctx->pc = 0x184378u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x18437c: 0x1234821
    ctx->pc = 0x18437cu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x184380: 0xdc820028
    ctx->pc = 0x184380u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x184384: 0xfd220000
    ctx->pc = 0x184384u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x184388: 0x1234821
    ctx->pc = 0x184388u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x18438c: 0xdc820030
    ctx->pc = 0x18438cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x184390: 0xfd220000
    ctx->pc = 0x184390u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x184394: 0x1234821
    ctx->pc = 0x184394u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x184398: 0xdc820038
    ctx->pc = 0x184398u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x18439c: 0xfd220000
    ctx->pc = 0x18439cu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x1843a0: 0xe84821
    ctx->pc = 0x1843a0u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1843a4: 0xdc820040
    ctx->pc = 0x1843a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1843a8: 0xfd220000
    ctx->pc = 0x1843a8u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x1843ac: 0x1234821
    ctx->pc = 0x1843acu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x1843b0: 0xdc820048
    ctx->pc = 0x1843b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1843b4: 0xfd220000
    ctx->pc = 0x1843b4u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x1843b8: 0x1234821
    ctx->pc = 0x1843b8u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x1843bc: 0xdc820050
    ctx->pc = 0x1843bcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x1843c0: 0xfd220000
    ctx->pc = 0x1843c0u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x1843c4: 0x1234821
    ctx->pc = 0x1843c4u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x1843c8: 0xdc820058
    ctx->pc = 0x1843c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x1843cc: 0xfd220000
    ctx->pc = 0x1843ccu;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x1843d0: 0x1234821
    ctx->pc = 0x1843d0u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x1843d4: 0xdc820060
    ctx->pc = 0x1843d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x1843d8: 0xfd220000
    ctx->pc = 0x1843d8u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x1843dc: 0x1234821
    ctx->pc = 0x1843dcu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x1843e0: 0xdc820068
    ctx->pc = 0x1843e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x1843e4: 0xfd220000
    ctx->pc = 0x1843e4u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x1843e8: 0x1234821
    ctx->pc = 0x1843e8u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x1843ec: 0xdc820070
    ctx->pc = 0x1843ecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x1843f0: 0xfd220000
    ctx->pc = 0x1843f0u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x1843f4: 0xdc870078
    ctx->pc = 0x1843f4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x1843f8: 0x1234821
    ctx->pc = 0x1843f8u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x1843fc: 0x8ca20004
    ctx->pc = 0x1843fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x184400: 0xfd270000
    ctx->pc = 0x184400u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 7));
    // 0x184404: 0x8cc80008
    ctx->pc = 0x184404u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x184408: 0xdc830080
    ctx->pc = 0x184408u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x18440c: 0x84ca000e
    ctx->pc = 0x18440cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x184410: 0x1024821
    ctx->pc = 0x184410u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x184414: 0xfd230000
    ctx->pc = 0x184414u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
    // 0x184418: 0x25220008
    ctx->pc = 0x184418u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 9), 8));
    // 0x18441c: 0xa28c2
    ctx->pc = 0x18441cu;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 10), 3));
    // 0x184420: 0xdc8300c0
    ctx->pc = 0x184420u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x184424: 0x528c0
    ctx->pc = 0x184424u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 3));
    // 0x184428: 0x1254821
    ctx->pc = 0x184428u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x18442c: 0xfc430000
    ctx->pc = 0x18442cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x184430: 0x451021
    ctx->pc = 0x184430u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x184434: 0xdc830088
    ctx->pc = 0x184434u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x184438: 0xfd230000
    ctx->pc = 0x184438u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
    // 0x18443c: 0x1254821
    ctx->pc = 0x18443cu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x184440: 0xdc8300c8
    ctx->pc = 0x184440u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 200)));
    // 0x184444: 0xfc430000
    ctx->pc = 0x184444u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x184448: 0x451021
    ctx->pc = 0x184448u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x18444c: 0xdc830090
    ctx->pc = 0x18444cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x184450: 0xfd230000
    ctx->pc = 0x184450u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
    // 0x184454: 0x1254821
    ctx->pc = 0x184454u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x184458: 0xdc8300d0
    ctx->pc = 0x184458u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x18445c: 0xfc430000
    ctx->pc = 0x18445cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x184460: 0x451021
    ctx->pc = 0x184460u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x184464: 0xdc830098
    ctx->pc = 0x184464u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x184468: 0xfd230000
    ctx->pc = 0x184468u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
    // 0x18446c: 0x1254821
    ctx->pc = 0x18446cu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x184470: 0xdc8300d8
    ctx->pc = 0x184470u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x184474: 0xfc430000
    ctx->pc = 0x184474u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x184478: 0x451021
    ctx->pc = 0x184478u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x18447c: 0xdc8300a0
    ctx->pc = 0x18447cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x184480: 0xfd230000
    ctx->pc = 0x184480u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
    // 0x184484: 0x1254821
    ctx->pc = 0x184484u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x184488: 0xdc8300e0
    ctx->pc = 0x184488u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x18448c: 0xfc430000
    ctx->pc = 0x18448cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x184490: 0x451021
    ctx->pc = 0x184490u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x184494: 0xdc8300a8
    ctx->pc = 0x184494u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x184498: 0xfd230000
    ctx->pc = 0x184498u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
    // 0x18449c: 0x1254821
    ctx->pc = 0x18449cu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x1844a0: 0xdc8300e8
    ctx->pc = 0x1844a0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 232)));
    // 0x1844a4: 0xfc430000
    ctx->pc = 0x1844a4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1844a8: 0x451021
    ctx->pc = 0x1844a8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1844ac: 0xdc8300b0
    ctx->pc = 0x1844acu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x1844b0: 0xfd230000
    ctx->pc = 0x1844b0u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
    // 0x1844b4: 0x1254821
    ctx->pc = 0x1844b4u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x1844b8: 0xdc8300f0
    ctx->pc = 0x1844b8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x1844bc: 0xfc430000
    ctx->pc = 0x1844bcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1844c0: 0x451021
    ctx->pc = 0x1844c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1844c4: 0xdc8300b8
    ctx->pc = 0x1844c4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x1844c8: 0xfd230000
    ctx->pc = 0x1844c8u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
    // 0x1844cc: 0xdc8600f8
    ctx->pc = 0x1844ccu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 248)));
    // 0x1844d0: 0x1254821
    ctx->pc = 0x1844d0u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x1844d4: 0xfc460000
    ctx->pc = 0x1844d4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 6));
    // 0x1844d8: 0x451021
    ctx->pc = 0x1844d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1844dc: 0xdc830100
    ctx->pc = 0x1844dcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x1844e0: 0xfd230000
    ctx->pc = 0x1844e0u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
    // 0x1844e4: 0x1254821
    ctx->pc = 0x1844e4u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x1844e8: 0xdc830140
    ctx->pc = 0x1844e8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 320)));
    // 0x1844ec: 0xfc430000
    ctx->pc = 0x1844ecu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1844f0: 0x451021
    ctx->pc = 0x1844f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1844f4: 0xdc830108
    ctx->pc = 0x1844f4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x1844f8: 0xfd230000
    ctx->pc = 0x1844f8u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
    // 0x1844fc: 0x1254821
    ctx->pc = 0x1844fcu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x184500: 0xdc830148
    ctx->pc = 0x184500u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x184504: 0xfc430000
    ctx->pc = 0x184504u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x184508: 0x451021
    ctx->pc = 0x184508u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x18450c: 0xdc830110
    ctx->pc = 0x18450cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 272)));
    // 0x184510: 0xfd230000
    ctx->pc = 0x184510u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
    // 0x184514: 0x1254821
    ctx->pc = 0x184514u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x184518: 0xdc830150
    ctx->pc = 0x184518u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x18451c: 0xfc430000
    ctx->pc = 0x18451cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x184520: 0x451021
    ctx->pc = 0x184520u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x184524: 0xdc830118
    ctx->pc = 0x184524u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x184528: 0xfd230000
    ctx->pc = 0x184528u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
    // 0x18452c: 0x1254821
    ctx->pc = 0x18452cu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x184530: 0xdc830158
    ctx->pc = 0x184530u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 344)));
    // 0x184534: 0xfc430000
    ctx->pc = 0x184534u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x184538: 0x451021
    ctx->pc = 0x184538u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x18453c: 0xdc830120
    ctx->pc = 0x18453cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 288)));
    // 0x184540: 0xfd230000
    ctx->pc = 0x184540u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
    // 0x184544: 0x1254821
    ctx->pc = 0x184544u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x184548: 0xdc830160
    ctx->pc = 0x184548u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x18454c: 0xfc430000
    ctx->pc = 0x18454cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x184550: 0x451021
    ctx->pc = 0x184550u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x184554: 0xdc830128
    ctx->pc = 0x184554u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 296)));
    // 0x184558: 0xfd230000
    ctx->pc = 0x184558u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
    // 0x18455c: 0x1254821
    ctx->pc = 0x18455cu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x184560: 0xdc830168
    ctx->pc = 0x184560u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 360)));
    // 0x184564: 0xfc430000
    ctx->pc = 0x184564u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x184568: 0x451021
    ctx->pc = 0x184568u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x18456c: 0xdc830130
    ctx->pc = 0x18456cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x184570: 0xfd230000
    ctx->pc = 0x184570u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
    // 0x184574: 0x1254821
    ctx->pc = 0x184574u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x184578: 0xdc830170
    ctx->pc = 0x184578u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 368)));
    // 0x18457c: 0xfc430000
    ctx->pc = 0x18457cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x184580: 0x451021
    ctx->pc = 0x184580u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x184584: 0xdc830138
    ctx->pc = 0x184584u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 312)));
    // 0x184588: 0xfd230000
    ctx->pc = 0x184588u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
    // 0x18458c: 0xdc850178
    ctx->pc = 0x18458cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 376)));
    // 0x184590: 0x3e00008
    ctx->pc = 0x184590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184594u;
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x184598u;
}
