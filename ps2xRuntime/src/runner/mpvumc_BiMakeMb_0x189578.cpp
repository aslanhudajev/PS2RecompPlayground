#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvumc_BiMakeMb
// Address: 0x189578 - 0x189818
void mpvumc_BiMakeMb_0x189578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvumc_BiMakeMb");


    ctx->pc = 0x189578u;

    // 0x189578: 0x24ad0008
    ctx->pc = 0x189578u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 5), 8));
    // 0x18957c: 0x8c8b0000
    ctx->pc = 0x18957cu;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x189580: 0x8c8a0004
    ctx->pc = 0x189580u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x189584: 0x24a50004
    ctx->pc = 0x189584u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x189588: 0x8c890008
    ctx->pc = 0x189588u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18958c: 0x182d
    ctx->pc = 0x18958cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189590: 0x8c88000c
    ctx->pc = 0x189590u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x189594: 0x8ca70000
    ctx->pc = 0x189594u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_189598:
    // 0x189598: 0x8dae0000
    ctx->pc = 0x189598u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x18959c: 0x4c0003d
    ctx->pc = 0x18959Cu;
    {
        const bool branch_taken_0x18959c = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x1895A0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 13), 4));
        if (branch_taken_0x18959c) {
            ctx->pc = 0x189694u;
            goto label_189694;
        }
    }
    ctx->pc = 0x1895A4u;
    // 0x1895a4: 0x63040
    ctx->pc = 0x1895a4u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 1));
    // 0x1895a8: 0x246f0001
    ctx->pc = 0x1895a8u;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1895ac: 0x254a0080
    ctx->pc = 0x1895acu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 128));
    // 0x1895b0: 0x25ad0008
    ctx->pc = 0x1895b0u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 13), 8));
    // 0x1895b4: 0x240c0007
    ctx->pc = 0x1895b4u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 7));
label_1895b8:
    // 0x1895b8: 0x91020000
    ctx->pc = 0x1895b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1895bc: 0x258cffff
    ctx->pc = 0x1895bcu;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x1895c0: 0x91230000
    ctx->pc = 0x1895c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1895c4: 0x621821
    ctx->pc = 0x1895c4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1895c8: 0x24630001
    ctx->pc = 0x1895c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1895cc: 0x31843
    ctx->pc = 0x1895ccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1895d0: 0xa0e30000
    ctx->pc = 0x1895d0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1895d4: 0x91030001
    ctx->pc = 0x1895d4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x1895d8: 0x91220001
    ctx->pc = 0x1895d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x1895dc: 0x431021
    ctx->pc = 0x1895dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1895e0: 0x24420001
    ctx->pc = 0x1895e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1895e4: 0x21043
    ctx->pc = 0x1895e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1895e8: 0xa0e20001
    ctx->pc = 0x1895e8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1895ec: 0x91020002
    ctx->pc = 0x1895ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x1895f0: 0x91230002
    ctx->pc = 0x1895f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x1895f4: 0x621821
    ctx->pc = 0x1895f4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1895f8: 0x24630001
    ctx->pc = 0x1895f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1895fc: 0x31843
    ctx->pc = 0x1895fcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x189600: 0xa0e30002
    ctx->pc = 0x189600u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x189604: 0x91030003
    ctx->pc = 0x189604u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x189608: 0x91220003
    ctx->pc = 0x189608u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
    // 0x18960c: 0x431021
    ctx->pc = 0x18960cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x189610: 0x24420001
    ctx->pc = 0x189610u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x189614: 0x21043
    ctx->pc = 0x189614u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x189618: 0xa0e20003
    ctx->pc = 0x189618u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x18961c: 0x91020004
    ctx->pc = 0x18961cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x189620: 0x91230004
    ctx->pc = 0x189620u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x189624: 0x621821
    ctx->pc = 0x189624u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x189628: 0x24630001
    ctx->pc = 0x189628u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x18962c: 0x31843
    ctx->pc = 0x18962cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x189630: 0xa0e30004
    ctx->pc = 0x189630u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x189634: 0x91030005
    ctx->pc = 0x189634u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 5)));
    // 0x189638: 0x91220005
    ctx->pc = 0x189638u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 5)));
    // 0x18963c: 0x431021
    ctx->pc = 0x18963cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x189640: 0x24420001
    ctx->pc = 0x189640u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x189644: 0x21043
    ctx->pc = 0x189644u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x189648: 0xa0e20005
    ctx->pc = 0x189648u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x18964c: 0x91020006
    ctx->pc = 0x18964cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x189650: 0x91230006
    ctx->pc = 0x189650u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 6)));
    // 0x189654: 0x621821
    ctx->pc = 0x189654u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x189658: 0x24630001
    ctx->pc = 0x189658u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x18965c: 0x31843
    ctx->pc = 0x18965cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x189660: 0xa0e30006
    ctx->pc = 0x189660u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x189664: 0x91220007
    ctx->pc = 0x189664u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 7)));
    // 0x189668: 0x91030007
    ctx->pc = 0x189668u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 7)));
    // 0x18966c: 0x25290008
    ctx->pc = 0x18966cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 8));
    // 0x189670: 0x25080008
    ctx->pc = 0x189670u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 8));
    // 0x189674: 0x431021
    ctx->pc = 0x189674u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x189678: 0x24420001
    ctx->pc = 0x189678u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x18967c: 0x21043
    ctx->pc = 0x18967cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x189680: 0xa0e20007
    ctx->pc = 0x189680u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x189684: 0x581ffcc
    ctx->pc = 0x189684u;
    {
        const bool branch_taken_0x189684 = (GPR_S32(ctx, 12) >= 0);
        ctx->pc = 0x189688u;
        SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 14)));
        if (branch_taken_0x189684) {
            ctx->pc = 0x1895B8u;
            goto label_1895b8;
        }
    }
    ctx->pc = 0x18968Cu;
    // 0x18968c: 0x1000005d
    ctx->pc = 0x18968Cu;
    {
        const bool branch_taken_0x18968c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x189690u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18968c) {
            ctx->pc = 0x189804u;
            goto label_189804;
        }
    }
    ctx->pc = 0x189694u;
label_189694:
    // 0x189694: 0x63040
    ctx->pc = 0x189694u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 1));
    // 0x189698: 0x246f0001
    ctx->pc = 0x189698u;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 3), 1));
    // 0x18969c: 0x25ad0008
    ctx->pc = 0x18969cu;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 13), 8));
    // 0x1896a0: 0x240c0007
    ctx->pc = 0x1896a0u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 7));
    // 0x1896a4: 0x0
    ctx->pc = 0x1896a4u;
    // NOP
label_1896a8:
    // 0x1896a8: 0x91030000
    ctx->pc = 0x1896a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1896ac: 0x258cffff
    ctx->pc = 0x1896acu;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x1896b0: 0x91220000
    ctx->pc = 0x1896b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1896b4: 0x85440000
    ctx->pc = 0x1896b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1896b8: 0x431021
    ctx->pc = 0x1896b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1896bc: 0x24420001
    ctx->pc = 0x1896bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1896c0: 0x21043
    ctx->pc = 0x1896c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1896c4: 0x441021
    ctx->pc = 0x1896c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1896c8: 0x1621021
    ctx->pc = 0x1896c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x1896cc: 0x90430000
    ctx->pc = 0x1896ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1896d0: 0xa0e30000
    ctx->pc = 0x1896d0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1896d4: 0x91030001
    ctx->pc = 0x1896d4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x1896d8: 0x91220001
    ctx->pc = 0x1896d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x1896dc: 0x85440002
    ctx->pc = 0x1896dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x1896e0: 0x431021
    ctx->pc = 0x1896e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1896e4: 0x24420001
    ctx->pc = 0x1896e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1896e8: 0x21043
    ctx->pc = 0x1896e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1896ec: 0x441021
    ctx->pc = 0x1896ecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1896f0: 0x1621021
    ctx->pc = 0x1896f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x1896f4: 0x90430000
    ctx->pc = 0x1896f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1896f8: 0xa0e30001
    ctx->pc = 0x1896f8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1896fc: 0x91030002
    ctx->pc = 0x1896fcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x189700: 0x91220002
    ctx->pc = 0x189700u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x189704: 0x85440004
    ctx->pc = 0x189704u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x189708: 0x431021
    ctx->pc = 0x189708u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18970c: 0x24420001
    ctx->pc = 0x18970cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x189710: 0x21043
    ctx->pc = 0x189710u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x189714: 0x441021
    ctx->pc = 0x189714u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x189718: 0x1621021
    ctx->pc = 0x189718u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x18971c: 0x90430000
    ctx->pc = 0x18971cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189720: 0xa0e30002
    ctx->pc = 0x189720u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x189724: 0x91030003
    ctx->pc = 0x189724u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x189728: 0x91220003
    ctx->pc = 0x189728u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
    // 0x18972c: 0x85440006
    ctx->pc = 0x18972cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 6)));
    // 0x189730: 0x431021
    ctx->pc = 0x189730u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x189734: 0x24420001
    ctx->pc = 0x189734u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x189738: 0x21043
    ctx->pc = 0x189738u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x18973c: 0x441021
    ctx->pc = 0x18973cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x189740: 0x1621021
    ctx->pc = 0x189740u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x189744: 0x90430000
    ctx->pc = 0x189744u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189748: 0xa0e30003
    ctx->pc = 0x189748u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x18974c: 0x91030004
    ctx->pc = 0x18974cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x189750: 0x91220004
    ctx->pc = 0x189750u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x189754: 0x85440008
    ctx->pc = 0x189754u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x189758: 0x431021
    ctx->pc = 0x189758u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18975c: 0x24420001
    ctx->pc = 0x18975cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x189760: 0x21043
    ctx->pc = 0x189760u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x189764: 0x441021
    ctx->pc = 0x189764u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x189768: 0x1621021
    ctx->pc = 0x189768u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x18976c: 0x90430000
    ctx->pc = 0x18976cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189770: 0xa0e30004
    ctx->pc = 0x189770u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x189774: 0x91030005
    ctx->pc = 0x189774u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 5)));
    // 0x189778: 0x91220005
    ctx->pc = 0x189778u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 5)));
    // 0x18977c: 0x8544000a
    ctx->pc = 0x18977cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 10)));
    // 0x189780: 0x431021
    ctx->pc = 0x189780u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x189784: 0x24420001
    ctx->pc = 0x189784u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x189788: 0x21043
    ctx->pc = 0x189788u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x18978c: 0x441021
    ctx->pc = 0x18978cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x189790: 0x1621021
    ctx->pc = 0x189790u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x189794: 0x90430000
    ctx->pc = 0x189794u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189798: 0xa0e30005
    ctx->pc = 0x189798u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x18979c: 0x91030006
    ctx->pc = 0x18979cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x1897a0: 0x91220006
    ctx->pc = 0x1897a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 6)));
    // 0x1897a4: 0x8544000c
    ctx->pc = 0x1897a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x1897a8: 0x431021
    ctx->pc = 0x1897a8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1897ac: 0x24420001
    ctx->pc = 0x1897acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1897b0: 0x21043
    ctx->pc = 0x1897b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1897b4: 0x441021
    ctx->pc = 0x1897b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1897b8: 0x1621021
    ctx->pc = 0x1897b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x1897bc: 0x90430000
    ctx->pc = 0x1897bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1897c0: 0xa0e30006
    ctx->pc = 0x1897c0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x1897c4: 0x91030007
    ctx->pc = 0x1897c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 7)));
    // 0x1897c8: 0x91220007
    ctx->pc = 0x1897c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 7)));
    // 0x1897cc: 0x25080008
    ctx->pc = 0x1897ccu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 8));
    // 0x1897d0: 0x8544000e
    ctx->pc = 0x1897d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 14)));
    // 0x1897d4: 0x25290008
    ctx->pc = 0x1897d4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 8));
    // 0x1897d8: 0x431021
    ctx->pc = 0x1897d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1897dc: 0x254a0010
    ctx->pc = 0x1897dcu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 16));
    // 0x1897e0: 0x24420001
    ctx->pc = 0x1897e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1897e4: 0x21043
    ctx->pc = 0x1897e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1897e8: 0x441021
    ctx->pc = 0x1897e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1897ec: 0x1621021
    ctx->pc = 0x1897ecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x1897f0: 0x90430000
    ctx->pc = 0x1897f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1897f4: 0xa0e30007
    ctx->pc = 0x1897f4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x1897f8: 0x581ffab
    ctx->pc = 0x1897F8u;
    {
        const bool branch_taken_0x1897f8 = (GPR_S32(ctx, 12) >= 0);
        ctx->pc = 0x1897FCu;
        SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 14)));
        if (branch_taken_0x1897f8) {
            ctx->pc = 0x1896A8u;
            goto label_1896a8;
        }
    }
    ctx->pc = 0x189800u;
    // 0x189800: 0x1e0182d
    ctx->pc = 0x189800u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_189804:
    // 0x189804: 0x28620006
    ctx->pc = 0x189804u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 6));
    // 0x189808: 0x5440ff63
    ctx->pc = 0x189808u;
    {
        const bool branch_taken_0x189808 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x189808) {
            ctx->pc = 0x18980Cu;
            SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->pc = 0x189598u;
            goto label_189598;
        }
    }
    ctx->pc = 0x189810u;
    // 0x189810: 0x3e00008
    ctx->pc = 0x189810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x189598u: goto label_189598;
            case 0x1895B8u: goto label_1895b8;
            case 0x189694u: goto label_189694;
            case 0x1896A8u: goto label_1896a8;
            case 0x189804u: goto label_189804;
            default: break;
        }
        return;
    }
    ctx->pc = 0x189818u;
}
