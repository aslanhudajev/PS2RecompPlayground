#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvumc_OneMakeMb
// Address: 0x1893c8 - 0x189578
void mpvumc_OneMakeMb_0x1893c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvumc_OneMakeMb");


    ctx->pc = 0x1893c8u;

    // 0x1893c8: 0x27bdfff0
    ctx->pc = 0x1893c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1893cc: 0x24ae0008
    ctx->pc = 0x1893ccu;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 5), 8));
    // 0x1893d0: 0xffb00000
    ctx->pc = 0x1893d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1893d4: 0x682d
    ctx->pc = 0x1893d4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1893d8: 0x24b00004
    ctx->pc = 0x1893d8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 5), 4));
    // 0x1893dc: 0x8c8c0000
    ctx->pc = 0x1893dcu;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1893e0: 0x8c8b0004
    ctx->pc = 0x1893e0u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1893e4: 0x8c890008
    ctx->pc = 0x1893e4u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1893e8:
    // 0x1893e8: 0x8e0a0000
    ctx->pc = 0x1893e8u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1893ec: 0x8dcf0000
    ctx->pc = 0x1893ecu;
    SET_GPR_U32(ctx, 15, READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1893f0: 0x4c00020
    ctx->pc = 0x1893F0u;
    {
        const bool branch_taken_0x1893f0 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1893F4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 14), 4));
        if (branch_taken_0x1893f0) {
            ctx->pc = 0x189474u;
            goto label_189474;
        }
    }
    ctx->pc = 0x1893F8u;
    // 0x1893f8: 0xdd240000
    ctx->pc = 0x1893f8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1893fc: 0xf18c2
    ctx->pc = 0x1893fcu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 15), 3));
    // 0x189400: 0xdd250008
    ctx->pc = 0x189400u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x189404: 0x318c0
    ctx->pc = 0x189404u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x189408: 0xdd270010
    ctx->pc = 0x189408u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x18940c: 0x1431021
    ctx->pc = 0x18940cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x189410: 0xdd280018
    ctx->pc = 0x189410u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x189414: 0x6c840
    ctx->pc = 0x189414u;
    SET_GPR_U32(ctx, 25, SLL32(GPR_U32(ctx, 6), 1));
    // 0x189418: 0xfd440000
    ctx->pc = 0x189418u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 4));
    // 0x18941c: 0x25b80001
    ctx->pc = 0x18941cu;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 13), 1));
    // 0x189420: 0xfc450000
    ctx->pc = 0x189420u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
    // 0x189424: 0x256b0080
    ctx->pc = 0x189424u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 128));
    // 0x189428: 0x431021
    ctx->pc = 0x189428u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18942c: 0x25ce0008
    ctx->pc = 0x18942cu;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 8));
    // 0x189430: 0xfc470000
    ctx->pc = 0x189430u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 7));
    // 0x189434: 0x431021
    ctx->pc = 0x189434u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x189438: 0xfc480000
    ctx->pc = 0x189438u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 8));
    // 0x18943c: 0xdd280038
    ctx->pc = 0x18943cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 9), 56)));
    // 0x189440: 0x431021
    ctx->pc = 0x189440u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x189444: 0xdd240020
    ctx->pc = 0x189444u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x189448: 0xdd250028
    ctx->pc = 0x189448u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 9), 40)));
    // 0x18944c: 0xdd270030
    ctx->pc = 0x18944cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x189450: 0xfc440000
    ctx->pc = 0x189450u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x189454: 0x25290040
    ctx->pc = 0x189454u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 64));
    // 0x189458: 0x431021
    ctx->pc = 0x189458u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18945c: 0xfc450000
    ctx->pc = 0x18945cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
    // 0x189460: 0x431021
    ctx->pc = 0x189460u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x189464: 0xfc470000
    ctx->pc = 0x189464u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 7));
    // 0x189468: 0x431021
    ctx->pc = 0x189468u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18946c: 0x1000003b
    ctx->pc = 0x18946Cu;
    {
        const bool branch_taken_0x18946c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x189470u;
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 8));
        if (branch_taken_0x18946c) {
            ctx->pc = 0x18955Cu;
            goto label_18955c;
        }
    }
    ctx->pc = 0x189474u;
label_189474:
    // 0x189474: 0x25b80001
    ctx->pc = 0x189474u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 13), 1));
    // 0x189478: 0x6c840
    ctx->pc = 0x189478u;
    SET_GPR_U32(ctx, 25, SLL32(GPR_U32(ctx, 6), 1));
    // 0x18947c: 0x25ce0008
    ctx->pc = 0x18947cu;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 8));
    // 0x189480: 0x240d0007
    ctx->pc = 0x189480u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 0), 7));
    // 0x189484: 0x0
    ctx->pc = 0x189484u;
    // NOP
label_189488:
    // 0x189488: 0x85620000
    ctx->pc = 0x189488u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x18948c: 0x25adffff
    ctx->pc = 0x18948cu;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x189490: 0x85660002
    ctx->pc = 0x189490u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x189494: 0x91250000
    ctx->pc = 0x189494u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x189498: 0x91240001
    ctx->pc = 0x189498u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x18949c: 0xa22821
    ctx->pc = 0x18949cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1894a0: 0x85670004
    ctx->pc = 0x1894a0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x1894a4: 0x862021
    ctx->pc = 0x1894a4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1894a8: 0x91230002
    ctx->pc = 0x1894a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x1894ac: 0x85660006
    ctx->pc = 0x1894acu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x1894b0: 0x1852821
    ctx->pc = 0x1894b0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1894b4: 0x91220003
    ctx->pc = 0x1894b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
    // 0x1894b8: 0x1842021
    ctx->pc = 0x1894b8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x1894bc: 0x671821
    ctx->pc = 0x1894bcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1894c0: 0x90a80000
    ctx->pc = 0x1894c0u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1894c4: 0x461021
    ctx->pc = 0x1894c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1894c8: 0x90870000
    ctx->pc = 0x1894c8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1894cc: 0x1831821
    ctx->pc = 0x1894ccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x1894d0: 0x1821021
    ctx->pc = 0x1894d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x1894d4: 0x90640000
    ctx->pc = 0x1894d4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1894d8: 0x90450000
    ctx->pc = 0x1894d8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1894dc: 0xa1480000
    ctx->pc = 0x1894dcu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x1894e0: 0xa1470001
    ctx->pc = 0x1894e0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x1894e4: 0xa1440002
    ctx->pc = 0x1894e4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1894e8: 0xa1450003
    ctx->pc = 0x1894e8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x1894ec: 0x85620008
    ctx->pc = 0x1894ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x1894f0: 0x8566000a
    ctx->pc = 0x1894f0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 10)));
    // 0x1894f4: 0x91240004
    ctx->pc = 0x1894f4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1894f8: 0x91250005
    ctx->pc = 0x1894f8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 5)));
    // 0x1894fc: 0x822021
    ctx->pc = 0x1894fcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x189500: 0x8567000c
    ctx->pc = 0x189500u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 12)));
    // 0x189504: 0xa62821
    ctx->pc = 0x189504u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x189508: 0x91230006
    ctx->pc = 0x189508u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 6)));
    // 0x18950c: 0x91220007
    ctx->pc = 0x18950cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 7)));
    // 0x189510: 0x1842021
    ctx->pc = 0x189510u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x189514: 0x8566000e
    ctx->pc = 0x189514u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 14)));
    // 0x189518: 0x1852821
    ctx->pc = 0x189518u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x18951c: 0x671821
    ctx->pc = 0x18951cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x189520: 0x90a80000
    ctx->pc = 0x189520u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x189524: 0x461021
    ctx->pc = 0x189524u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x189528: 0x90870000
    ctx->pc = 0x189528u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18952c: 0x1831821
    ctx->pc = 0x18952cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x189530: 0x1821021
    ctx->pc = 0x189530u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x189534: 0x90640000
    ctx->pc = 0x189534u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x189538: 0x25290008
    ctx->pc = 0x189538u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 8));
    // 0x18953c: 0x90450000
    ctx->pc = 0x18953cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189540: 0x256b0010
    ctx->pc = 0x189540u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 16));
    // 0x189544: 0xa1470004
    ctx->pc = 0x189544u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 4), (uint8_t)GPR_U32(ctx, 7));
    // 0x189548: 0xa1480005
    ctx->pc = 0x189548u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 5), (uint8_t)GPR_U32(ctx, 8));
    // 0x18954c: 0xa1440006
    ctx->pc = 0x18954cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 6), (uint8_t)GPR_U32(ctx, 4));
    // 0x189550: 0xa1450007
    ctx->pc = 0x189550u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 7), (uint8_t)GPR_U32(ctx, 5));
    // 0x189554: 0x5a1ffcc
    ctx->pc = 0x189554u;
    {
        const bool branch_taken_0x189554 = (GPR_S32(ctx, 13) >= 0);
        ctx->pc = 0x189558u;
        SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 15)));
        if (branch_taken_0x189554) {
            ctx->pc = 0x189488u;
            goto label_189488;
        }
    }
    ctx->pc = 0x18955Cu;
label_18955c:
    // 0x18955c: 0x300682d
    ctx->pc = 0x18955cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189560: 0x29a20006
    ctx->pc = 0x189560u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 13), 6));
    // 0x189564: 0x1440ffa0
    ctx->pc = 0x189564u;
    {
        const bool branch_taken_0x189564 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x189568u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x189564) {
            ctx->pc = 0x1893E8u;
            goto label_1893e8;
        }
    }
    ctx->pc = 0x18956Cu;
    // 0x18956c: 0xdfb00000
    ctx->pc = 0x18956cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189570: 0x3e00008
    ctx->pc = 0x189570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189574u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1893E8u: goto label_1893e8;
            case 0x189474u: goto label_189474;
            case 0x189488u: goto label_189488;
            case 0x18955Cu: goto label_18955c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x189578u;
}
