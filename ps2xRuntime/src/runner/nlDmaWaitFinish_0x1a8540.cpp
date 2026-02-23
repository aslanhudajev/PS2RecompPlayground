#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlDmaWaitFinish
// Address: 0x1a8540 - 0x1a86a8
void nlDmaWaitFinish_0x1a8540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlDmaWaitFinish");


    ctx->pc = 0x1a8540u;

label_1a8540:
    // 0x1a8540: 0x2c810009
    ctx->pc = 0x1a8540u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 4), 9));
label_1a8544:
    // 0x1a8544: 0x10200056
label_1a8548:
    if (ctx->pc == 0x1A8548u) {
        ctx->pc = 0x1A8548u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
        ctx->pc = 0x1A854Cu;
        goto label_1a854c;
    }
    ctx->pc = 0x1A8544u;
    {
        const bool branch_taken_0x1a8544 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A8548u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x1a8544) {
            ctx->pc = 0x1A86A0u;
            goto label_1a86a0;
        }
    }
    ctx->pc = 0x1A854Cu;
label_1a854c:
    // 0x1a854c: 0x3c04002c
    ctx->pc = 0x1a854cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_1a8550:
    // 0x1a8550: 0x2484d8d0
    ctx->pc = 0x1a8550u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957264));
label_1a8554:
    // 0x1a8554: 0x641821
    ctx->pc = 0x1a8554u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a8558:
    // 0x1a8558: 0x8c630000
    ctx->pc = 0x1a8558u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a855c:
    // 0x1a855c: 0x600008
label_1a8560:
    if (ctx->pc == 0x1A8560u) {
        ctx->pc = 0x1A8564u;
        goto label_1a8564;
    }
    ctx->pc = 0x1A855Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A8540u: goto label_1a8540;
            case 0x1A8544u: goto label_1a8544;
            case 0x1A8548u: goto label_1a8548;
            case 0x1A854Cu: goto label_1a854c;
            case 0x1A8550u: goto label_1a8550;
            case 0x1A8554u: goto label_1a8554;
            case 0x1A8558u: goto label_1a8558;
            case 0x1A855Cu: goto label_1a855c;
            case 0x1A8560u: goto label_1a8560;
            case 0x1A8564u: goto label_1a8564;
            case 0x1A8568u: goto label_1a8568;
            case 0x1A856Cu: goto label_1a856c;
            case 0x1A8570u: goto label_1a8570;
            case 0x1A8574u: goto label_1a8574;
            case 0x1A8578u: goto label_1a8578;
            case 0x1A857Cu: goto label_1a857c;
            case 0x1A8580u: goto label_1a8580;
            case 0x1A8584u: goto label_1a8584;
            case 0x1A8588u: goto label_1a8588;
            case 0x1A858Cu: goto label_1a858c;
            case 0x1A8590u: goto label_1a8590;
            case 0x1A8594u: goto label_1a8594;
            case 0x1A8598u: goto label_1a8598;
            case 0x1A859Cu: goto label_1a859c;
            case 0x1A85A0u: goto label_1a85a0;
            case 0x1A85A4u: goto label_1a85a4;
            case 0x1A85A8u: goto label_1a85a8;
            case 0x1A85ACu: goto label_1a85ac;
            case 0x1A85B0u: goto label_1a85b0;
            case 0x1A85B4u: goto label_1a85b4;
            case 0x1A85B8u: goto label_1a85b8;
            case 0x1A85BCu: goto label_1a85bc;
            case 0x1A85C0u: goto label_1a85c0;
            case 0x1A85C4u: goto label_1a85c4;
            case 0x1A85C8u: goto label_1a85c8;
            case 0x1A85CCu: goto label_1a85cc;
            case 0x1A85D0u: goto label_1a85d0;
            case 0x1A85D4u: goto label_1a85d4;
            case 0x1A85D8u: goto label_1a85d8;
            case 0x1A85DCu: goto label_1a85dc;
            case 0x1A85E0u: goto label_1a85e0;
            case 0x1A85E4u: goto label_1a85e4;
            case 0x1A85E8u: goto label_1a85e8;
            case 0x1A85ECu: goto label_1a85ec;
            case 0x1A85F0u: goto label_1a85f0;
            case 0x1A85F4u: goto label_1a85f4;
            case 0x1A85F8u: goto label_1a85f8;
            case 0x1A85FCu: goto label_1a85fc;
            case 0x1A8600u: goto label_1a8600;
            case 0x1A8604u: goto label_1a8604;
            case 0x1A8608u: goto label_1a8608;
            case 0x1A860Cu: goto label_1a860c;
            case 0x1A8610u: goto label_1a8610;
            case 0x1A8614u: goto label_1a8614;
            case 0x1A8618u: goto label_1a8618;
            case 0x1A861Cu: goto label_1a861c;
            case 0x1A8620u: goto label_1a8620;
            case 0x1A8624u: goto label_1a8624;
            case 0x1A8628u: goto label_1a8628;
            case 0x1A862Cu: goto label_1a862c;
            case 0x1A8630u: goto label_1a8630;
            case 0x1A8634u: goto label_1a8634;
            case 0x1A8638u: goto label_1a8638;
            case 0x1A863Cu: goto label_1a863c;
            case 0x1A8640u: goto label_1a8640;
            case 0x1A8644u: goto label_1a8644;
            case 0x1A8648u: goto label_1a8648;
            case 0x1A864Cu: goto label_1a864c;
            case 0x1A8650u: goto label_1a8650;
            case 0x1A8654u: goto label_1a8654;
            case 0x1A8658u: goto label_1a8658;
            case 0x1A865Cu: goto label_1a865c;
            case 0x1A8660u: goto label_1a8660;
            case 0x1A8664u: goto label_1a8664;
            case 0x1A8668u: goto label_1a8668;
            case 0x1A866Cu: goto label_1a866c;
            case 0x1A8670u: goto label_1a8670;
            case 0x1A8674u: goto label_1a8674;
            case 0x1A8678u: goto label_1a8678;
            case 0x1A867Cu: goto label_1a867c;
            case 0x1A8680u: goto label_1a8680;
            case 0x1A8684u: goto label_1a8684;
            case 0x1A8688u: goto label_1a8688;
            case 0x1A868Cu: goto label_1a868c;
            case 0x1A8690u: goto label_1a8690;
            case 0x1A8694u: goto label_1a8694;
            case 0x1A8698u: goto label_1a8698;
            case 0x1A869Cu: goto label_1a869c;
            case 0x1A86A0u: goto label_1a86a0;
            case 0x1A86A4u: goto label_1a86a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A8564u;
label_1a8564:
    // 0x1a8564: 0x3c011001
    ctx->pc = 0x1a8564u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
label_1a8568:
    // 0x1a8568: 0x8c238000
    ctx->pc = 0x1a8568u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294934528))); // MMIO: 0x10008000
label_1a856c:
    // 0x1a856c: 0x30630100
    ctx->pc = 0x1a856cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 256));
label_1a8570:
    // 0x1a8570: 0x0
    ctx->pc = 0x1a8570u;
    // NOP
label_1a8574:
    // 0x1a8574: 0x0
    ctx->pc = 0x1a8574u;
    // NOP
label_1a8578:
    // 0x1a8578: 0x1460fffa
label_1a857c:
    if (ctx->pc == 0x1A857Cu) {
        ctx->pc = 0x1A8580u;
        goto label_1a8580;
    }
    ctx->pc = 0x1A8578u;
    {
        const bool branch_taken_0x1a8578 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a8578) {
            ctx->pc = 0x1A8564u;
            goto label_1a8564;
        }
    }
    ctx->pc = 0x1A8580u;
label_1a8580:
    // 0x1a8580: 0x10000047
label_1a8584:
    if (ctx->pc == 0x1A8584u) {
        ctx->pc = 0x1A8588u;
        goto label_1a8588;
    }
    ctx->pc = 0x1A8580u;
    {
        const bool branch_taken_0x1a8580 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a8580) {
            ctx->pc = 0x1A86A0u;
            goto label_1a86a0;
        }
    }
    ctx->pc = 0x1A8588u;
label_1a8588:
    // 0x1a8588: 0x3c011001
    ctx->pc = 0x1a8588u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
label_1a858c:
    // 0x1a858c: 0x8c239000
    ctx->pc = 0x1a858cu;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294938624))); // MMIO: 0x10009000
label_1a8590:
    // 0x1a8590: 0x30630100
    ctx->pc = 0x1a8590u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 256));
label_1a8594:
    // 0x1a8594: 0x0
    ctx->pc = 0x1a8594u;
    // NOP
label_1a8598:
    // 0x1a8598: 0x0
    ctx->pc = 0x1a8598u;
    // NOP
label_1a859c:
    // 0x1a859c: 0x1460fffa
label_1a85a0:
    if (ctx->pc == 0x1A85A0u) {
        ctx->pc = 0x1A85A4u;
        goto label_1a85a4;
    }
    ctx->pc = 0x1A859Cu;
    {
        const bool branch_taken_0x1a859c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a859c) {
            ctx->pc = 0x1A8588u;
            goto label_1a8588;
        }
    }
    ctx->pc = 0x1A85A4u;
label_1a85a4:
    // 0x1a85a4: 0x1000003e
label_1a85a8:
    if (ctx->pc == 0x1A85A8u) {
        ctx->pc = 0x1A85ACu;
        goto label_1a85ac;
    }
    ctx->pc = 0x1A85A4u;
    {
        const bool branch_taken_0x1a85a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a85a4) {
            ctx->pc = 0x1A86A0u;
            goto label_1a86a0;
        }
    }
    ctx->pc = 0x1A85ACu;
label_1a85ac:
    // 0x1a85ac: 0x3c011001
    ctx->pc = 0x1a85acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
label_1a85b0:
    // 0x1a85b0: 0x8c23a000
    ctx->pc = 0x1a85b0u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294942720))); // MMIO: 0x1000a000
label_1a85b4:
    // 0x1a85b4: 0x30630100
    ctx->pc = 0x1a85b4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 256));
label_1a85b8:
    // 0x1a85b8: 0x0
    ctx->pc = 0x1a85b8u;
    // NOP
label_1a85bc:
    // 0x1a85bc: 0x0
    ctx->pc = 0x1a85bcu;
    // NOP
label_1a85c0:
    // 0x1a85c0: 0x1460fffa
label_1a85c4:
    if (ctx->pc == 0x1A85C4u) {
        ctx->pc = 0x1A85C8u;
        goto label_1a85c8;
    }
    ctx->pc = 0x1A85C0u;
    {
        const bool branch_taken_0x1a85c0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a85c0) {
            ctx->pc = 0x1A85ACu;
            goto label_1a85ac;
        }
    }
    ctx->pc = 0x1A85C8u;
label_1a85c8:
    // 0x1a85c8: 0x10000035
label_1a85cc:
    if (ctx->pc == 0x1A85CCu) {
        ctx->pc = 0x1A85D0u;
        goto label_1a85d0;
    }
    ctx->pc = 0x1A85C8u;
    {
        const bool branch_taken_0x1a85c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a85c8) {
            ctx->pc = 0x1A86A0u;
            goto label_1a86a0;
        }
    }
    ctx->pc = 0x1A85D0u;
label_1a85d0:
    // 0x1a85d0: 0x3c011001
    ctx->pc = 0x1a85d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
label_1a85d4:
    // 0x1a85d4: 0x8c23b000
    ctx->pc = 0x1a85d4u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294946816))); // MMIO: 0x1000b000
label_1a85d8:
    // 0x1a85d8: 0x30630100
    ctx->pc = 0x1a85d8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 256));
label_1a85dc:
    // 0x1a85dc: 0x0
    ctx->pc = 0x1a85dcu;
    // NOP
label_1a85e0:
    // 0x1a85e0: 0x0
    ctx->pc = 0x1a85e0u;
    // NOP
label_1a85e4:
    // 0x1a85e4: 0x1460fffa
label_1a85e8:
    if (ctx->pc == 0x1A85E8u) {
        ctx->pc = 0x1A85ECu;
        goto label_1a85ec;
    }
    ctx->pc = 0x1A85E4u;
    {
        const bool branch_taken_0x1a85e4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a85e4) {
            ctx->pc = 0x1A85D0u;
            goto label_1a85d0;
        }
    }
    ctx->pc = 0x1A85ECu;
label_1a85ec:
    // 0x1a85ec: 0x1000002c
label_1a85f0:
    if (ctx->pc == 0x1A85F0u) {
        ctx->pc = 0x1A85F4u;
        goto label_1a85f4;
    }
    ctx->pc = 0x1A85ECu;
    {
        const bool branch_taken_0x1a85ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a85ec) {
            ctx->pc = 0x1A86A0u;
            goto label_1a86a0;
        }
    }
    ctx->pc = 0x1A85F4u;
label_1a85f4:
    // 0x1a85f4: 0x3c011001
    ctx->pc = 0x1a85f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
label_1a85f8:
    // 0x1a85f8: 0x8c23b400
    ctx->pc = 0x1a85f8u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294947840))); // MMIO: 0x1000b400
label_1a85fc:
    // 0x1a85fc: 0x30630100
    ctx->pc = 0x1a85fcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 256));
label_1a8600:
    // 0x1a8600: 0x0
    ctx->pc = 0x1a8600u;
    // NOP
label_1a8604:
    // 0x1a8604: 0x0
    ctx->pc = 0x1a8604u;
    // NOP
label_1a8608:
    // 0x1a8608: 0x1460fffa
label_1a860c:
    if (ctx->pc == 0x1A860Cu) {
        ctx->pc = 0x1A8610u;
        goto label_1a8610;
    }
    ctx->pc = 0x1A8608u;
    {
        const bool branch_taken_0x1a8608 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a8608) {
            ctx->pc = 0x1A85F4u;
            goto label_1a85f4;
        }
    }
    ctx->pc = 0x1A8610u;
label_1a8610:
    // 0x1a8610: 0x10000023
label_1a8614:
    if (ctx->pc == 0x1A8614u) {
        ctx->pc = 0x1A8618u;
        goto label_1a8618;
    }
    ctx->pc = 0x1A8610u;
    {
        const bool branch_taken_0x1a8610 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a8610) {
            ctx->pc = 0x1A86A0u;
            goto label_1a86a0;
        }
    }
    ctx->pc = 0x1A8618u;
label_1a8618:
    // 0x1a8618: 0x3c011001
    ctx->pc = 0x1a8618u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
label_1a861c:
    // 0x1a861c: 0x8c23c000
    ctx->pc = 0x1a861cu;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294950912))); // MMIO: 0x1000c000
label_1a8620:
    // 0x1a8620: 0x30630100
    ctx->pc = 0x1a8620u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 256));
label_1a8624:
    // 0x1a8624: 0x0
    ctx->pc = 0x1a8624u;
    // NOP
label_1a8628:
    // 0x1a8628: 0x0
    ctx->pc = 0x1a8628u;
    // NOP
label_1a862c:
    // 0x1a862c: 0x1460fffa
label_1a8630:
    if (ctx->pc == 0x1A8630u) {
        ctx->pc = 0x1A8634u;
        goto label_1a8634;
    }
    ctx->pc = 0x1A862Cu;
    {
        const bool branch_taken_0x1a862c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a862c) {
            ctx->pc = 0x1A8618u;
            goto label_1a8618;
        }
    }
    ctx->pc = 0x1A8634u;
label_1a8634:
    // 0x1a8634: 0x1000001a
label_1a8638:
    if (ctx->pc == 0x1A8638u) {
        ctx->pc = 0x1A863Cu;
        goto label_1a863c;
    }
    ctx->pc = 0x1A8634u;
    {
        const bool branch_taken_0x1a8634 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a8634) {
            ctx->pc = 0x1A86A0u;
            goto label_1a86a0;
        }
    }
    ctx->pc = 0x1A863Cu;
label_1a863c:
    // 0x1a863c: 0x3c011001
    ctx->pc = 0x1a863cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
label_1a8640:
    // 0x1a8640: 0x8c23c400
    ctx->pc = 0x1a8640u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294951936))); // MMIO: 0x1000c400
label_1a8644:
    // 0x1a8644: 0x30630100
    ctx->pc = 0x1a8644u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 256));
label_1a8648:
    // 0x1a8648: 0x0
    ctx->pc = 0x1a8648u;
    // NOP
label_1a864c:
    // 0x1a864c: 0x0
    ctx->pc = 0x1a864cu;
    // NOP
label_1a8650:
    // 0x1a8650: 0x1460fffa
label_1a8654:
    if (ctx->pc == 0x1A8654u) {
        ctx->pc = 0x1A8658u;
        goto label_1a8658;
    }
    ctx->pc = 0x1A8650u;
    {
        const bool branch_taken_0x1a8650 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a8650) {
            ctx->pc = 0x1A863Cu;
            goto label_1a863c;
        }
    }
    ctx->pc = 0x1A8658u;
label_1a8658:
    // 0x1a8658: 0x10000011
label_1a865c:
    if (ctx->pc == 0x1A865Cu) {
        ctx->pc = 0x1A8660u;
        goto label_1a8660;
    }
    ctx->pc = 0x1A8658u;
    {
        const bool branch_taken_0x1a8658 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a8658) {
            ctx->pc = 0x1A86A0u;
            goto label_1a86a0;
        }
    }
    ctx->pc = 0x1A8660u;
label_1a8660:
    // 0x1a8660: 0x3c011001
    ctx->pc = 0x1a8660u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
label_1a8664:
    // 0x1a8664: 0x8c23c800
    ctx->pc = 0x1a8664u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294952960))); // MMIO: 0x1000c800
label_1a8668:
    // 0x1a8668: 0x30630100
    ctx->pc = 0x1a8668u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 256));
label_1a866c:
    // 0x1a866c: 0x0
    ctx->pc = 0x1a866cu;
    // NOP
label_1a8670:
    // 0x1a8670: 0x0
    ctx->pc = 0x1a8670u;
    // NOP
label_1a8674:
    // 0x1a8674: 0x1460fffa
label_1a8678:
    if (ctx->pc == 0x1A8678u) {
        ctx->pc = 0x1A867Cu;
        goto label_1a867c;
    }
    ctx->pc = 0x1A8674u;
    {
        const bool branch_taken_0x1a8674 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a8674) {
            ctx->pc = 0x1A8660u;
            goto label_1a8660;
        }
    }
    ctx->pc = 0x1A867Cu;
label_1a867c:
    // 0x1a867c: 0x10000008
label_1a8680:
    if (ctx->pc == 0x1A8680u) {
        ctx->pc = 0x1A8684u;
        goto label_1a8684;
    }
    ctx->pc = 0x1A867Cu;
    {
        const bool branch_taken_0x1a867c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a867c) {
            ctx->pc = 0x1A86A0u;
            goto label_1a86a0;
        }
    }
    ctx->pc = 0x1A8684u;
label_1a8684:
    // 0x1a8684: 0x3c011001
    ctx->pc = 0x1a8684u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
label_1a8688:
    // 0x1a8688: 0x8c23d000
    ctx->pc = 0x1a8688u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294955008))); // MMIO: 0x1000d000
label_1a868c:
    // 0x1a868c: 0x30630100
    ctx->pc = 0x1a868cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 256));
label_1a8690:
    // 0x1a8690: 0x0
    ctx->pc = 0x1a8690u;
    // NOP
label_1a8694:
    // 0x1a8694: 0x0
    ctx->pc = 0x1a8694u;
    // NOP
label_1a8698:
    // 0x1a8698: 0x1460fffa
label_1a869c:
    if (ctx->pc == 0x1A869Cu) {
        ctx->pc = 0x1A86A0u;
        goto label_1a86a0;
    }
    ctx->pc = 0x1A8698u;
    {
        const bool branch_taken_0x1a8698 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a8698) {
            ctx->pc = 0x1A8684u;
            goto label_1a8684;
        }
    }
    ctx->pc = 0x1A86A0u;
label_1a86a0:
    // 0x1a86a0: 0x3e00008
label_1a86a4:
    if (ctx->pc == 0x1A86A4u) {
        ctx->pc = 0x1A86A8u;
        goto label_fallthrough_0x1a86a0;
    }
    ctx->pc = 0x1A86A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A8540u: goto label_1a8540;
            case 0x1A8544u: goto label_1a8544;
            case 0x1A8548u: goto label_1a8548;
            case 0x1A854Cu: goto label_1a854c;
            case 0x1A8550u: goto label_1a8550;
            case 0x1A8554u: goto label_1a8554;
            case 0x1A8558u: goto label_1a8558;
            case 0x1A855Cu: goto label_1a855c;
            case 0x1A8560u: goto label_1a8560;
            case 0x1A8564u: goto label_1a8564;
            case 0x1A8568u: goto label_1a8568;
            case 0x1A856Cu: goto label_1a856c;
            case 0x1A8570u: goto label_1a8570;
            case 0x1A8574u: goto label_1a8574;
            case 0x1A8578u: goto label_1a8578;
            case 0x1A857Cu: goto label_1a857c;
            case 0x1A8580u: goto label_1a8580;
            case 0x1A8584u: goto label_1a8584;
            case 0x1A8588u: goto label_1a8588;
            case 0x1A858Cu: goto label_1a858c;
            case 0x1A8590u: goto label_1a8590;
            case 0x1A8594u: goto label_1a8594;
            case 0x1A8598u: goto label_1a8598;
            case 0x1A859Cu: goto label_1a859c;
            case 0x1A85A0u: goto label_1a85a0;
            case 0x1A85A4u: goto label_1a85a4;
            case 0x1A85A8u: goto label_1a85a8;
            case 0x1A85ACu: goto label_1a85ac;
            case 0x1A85B0u: goto label_1a85b0;
            case 0x1A85B4u: goto label_1a85b4;
            case 0x1A85B8u: goto label_1a85b8;
            case 0x1A85BCu: goto label_1a85bc;
            case 0x1A85C0u: goto label_1a85c0;
            case 0x1A85C4u: goto label_1a85c4;
            case 0x1A85C8u: goto label_1a85c8;
            case 0x1A85CCu: goto label_1a85cc;
            case 0x1A85D0u: goto label_1a85d0;
            case 0x1A85D4u: goto label_1a85d4;
            case 0x1A85D8u: goto label_1a85d8;
            case 0x1A85DCu: goto label_1a85dc;
            case 0x1A85E0u: goto label_1a85e0;
            case 0x1A85E4u: goto label_1a85e4;
            case 0x1A85E8u: goto label_1a85e8;
            case 0x1A85ECu: goto label_1a85ec;
            case 0x1A85F0u: goto label_1a85f0;
            case 0x1A85F4u: goto label_1a85f4;
            case 0x1A85F8u: goto label_1a85f8;
            case 0x1A85FCu: goto label_1a85fc;
            case 0x1A8600u: goto label_1a8600;
            case 0x1A8604u: goto label_1a8604;
            case 0x1A8608u: goto label_1a8608;
            case 0x1A860Cu: goto label_1a860c;
            case 0x1A8610u: goto label_1a8610;
            case 0x1A8614u: goto label_1a8614;
            case 0x1A8618u: goto label_1a8618;
            case 0x1A861Cu: goto label_1a861c;
            case 0x1A8620u: goto label_1a8620;
            case 0x1A8624u: goto label_1a8624;
            case 0x1A8628u: goto label_1a8628;
            case 0x1A862Cu: goto label_1a862c;
            case 0x1A8630u: goto label_1a8630;
            case 0x1A8634u: goto label_1a8634;
            case 0x1A8638u: goto label_1a8638;
            case 0x1A863Cu: goto label_1a863c;
            case 0x1A8640u: goto label_1a8640;
            case 0x1A8644u: goto label_1a8644;
            case 0x1A8648u: goto label_1a8648;
            case 0x1A864Cu: goto label_1a864c;
            case 0x1A8650u: goto label_1a8650;
            case 0x1A8654u: goto label_1a8654;
            case 0x1A8658u: goto label_1a8658;
            case 0x1A865Cu: goto label_1a865c;
            case 0x1A8660u: goto label_1a8660;
            case 0x1A8664u: goto label_1a8664;
            case 0x1A8668u: goto label_1a8668;
            case 0x1A866Cu: goto label_1a866c;
            case 0x1A8670u: goto label_1a8670;
            case 0x1A8674u: goto label_1a8674;
            case 0x1A8678u: goto label_1a8678;
            case 0x1A867Cu: goto label_1a867c;
            case 0x1A8680u: goto label_1a8680;
            case 0x1A8684u: goto label_1a8684;
            case 0x1A8688u: goto label_1a8688;
            case 0x1A868Cu: goto label_1a868c;
            case 0x1A8690u: goto label_1a8690;
            case 0x1A8694u: goto label_1a8694;
            case 0x1A8698u: goto label_1a8698;
            case 0x1A869Cu: goto label_1a869c;
            case 0x1A86A0u: goto label_1a86a0;
            case 0x1A86A4u: goto label_1a86a4;
            default: break;
        }
        return;
    }
label_fallthrough_0x1a86a0:
    ctx->pc = 0x1A86A8u;
}
