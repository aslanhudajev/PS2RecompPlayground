#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlDmaEndMFifo
// Address: 0x1a53a0 - 0x1a5494
void nlDmaEndMFifo_0x1a53a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlDmaEndMFifo");


    ctx->pc = 0x1a53a0u;

label_1a53a0:
    // 0x1a53a0: 0x27bdffd0
    ctx->pc = 0x1a53a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a53a4:
    // 0x1a53a4: 0x7fbf0020
    ctx->pc = 0x1a53a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
label_1a53a8:
    // 0x1a53a8: 0x7fb10010
    ctx->pc = 0x1a53a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a53ac:
    // 0x1a53ac: 0x7fb00000
    ctx->pc = 0x1a53acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a53b0:
    // 0x1a53b0: 0x8f8289b4
    ctx->pc = 0x1a53b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937012)));
label_1a53b4:
    // 0x1a53b4: 0x70808e28
    ctx->pc = 0x1a53b4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_1a53b8:
    // 0x1a53b8: 0x14400003
label_1a53bc:
    if (ctx->pc == 0x1A53BCu) {
        ctx->pc = 0x1A53BCu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1A53C0u;
        goto label_1a53c0;
    }
    ctx->pc = 0x1A53B8u;
    {
        const bool branch_taken_0x1a53b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A53BCu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a53b8) {
            ctx->pc = 0x1A53C8u;
            goto label_1a53c8;
        }
    }
    ctx->pc = 0x1A53C0u;
label_1a53c0:
    // 0x1a53c0: 0x1000ffff
label_1a53c4:
    if (ctx->pc == 0x1A53C4u) {
        ctx->pc = 0x1A53C8u;
        goto label_1a53c8;
    }
    ctx->pc = 0x1A53C0u;
    {
        const bool branch_taken_0x1a53c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a53c0) {
            ctx->pc = 0x1A53C0u;
            goto label_1a53c0;
        }
    }
    ctx->pc = 0x1A53C8u;
label_1a53c8:
    // 0x1a53c8: 0x8f8389b0
    ctx->pc = 0x1a53c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937008)));
label_1a53cc:
    // 0x1a53cc: 0x24020001
    ctx->pc = 0x1a53ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1a53d0:
    // 0x1a53d0: 0x14620003
label_1a53d4:
    if (ctx->pc == 0x1A53D4u) {
        ctx->pc = 0x1A53D8u;
        goto label_1a53d8;
    }
    ctx->pc = 0x1A53D0u;
    {
        const bool branch_taken_0x1a53d0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1a53d0) {
            ctx->pc = 0x1A53E0u;
            goto label_1a53e0;
        }
    }
    ctx->pc = 0x1A53D8u;
label_1a53d8:
    // 0x1a53d8: 0x1000ffff
label_1a53dc:
    if (ctx->pc == 0x1A53DCu) {
        ctx->pc = 0x1A53E0u;
        goto label_1a53e0;
    }
    ctx->pc = 0x1A53D8u;
    {
        const bool branch_taken_0x1a53d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a53d8) {
            ctx->pc = 0x1A53D8u;
            goto label_1a53d8;
        }
    }
    ctx->pc = 0x1A53E0u;
label_1a53e0:
    // 0x1a53e0: 0xc069528
label_1a53e4:
    if (ctx->pc == 0x1A53E4u) {
        ctx->pc = 0x1A53E8u;
        goto label_1a53e8;
    }
    ctx->pc = 0x1A53E0u;
    SET_GPR_U32(ctx, 31, 0x1A53E8u);
    ctx->pc = 0x1A54A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaGetMFifoSprAddr_0x1a54a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A53E8u; }
        else if (ctx->pc != 0x1A53E8u) { ctx->pc = 0x1A53E8u; }
    }
    if (ctx->pc != 0x1A53E8u) { return; }
    ctx->pc = 0x1A53E8u;
label_1a53e8:
    // 0x1a53e8: 0x3c011001
    ctx->pc = 0x1a53e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
label_1a53ec:
    // 0x1a53ec: 0x8c23d000
    ctx->pc = 0x1a53ecu;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294955008))); // MMIO: 0x1000d000
label_1a53f0:
    // 0x1a53f0: 0x30630100
    ctx->pc = 0x1a53f0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 256));
label_1a53f4:
    // 0x1a53f4: 0x0
    ctx->pc = 0x1a53f4u;
    // NOP
label_1a53f8:
    // 0x1a53f8: 0x0
    ctx->pc = 0x1a53f8u;
    // NOP
label_1a53fc:
    // 0x1a53fc: 0x1460fffa
label_1a5400:
    if (ctx->pc == 0x1A5400u) {
        ctx->pc = 0x1A5404u;
        goto label_1a5404;
    }
    ctx->pc = 0x1A53FCu;
    {
        const bool branch_taken_0x1a53fc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a53fc) {
            ctx->pc = 0x1A53E8u;
            goto label_1a53e8;
        }
    }
    ctx->pc = 0x1A5404u;
label_1a5404:
    // 0x1a5404: 0x70402628
    ctx->pc = 0x1a5404u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1a5408:
    // 0x1a5408: 0x3c020026
    ctx->pc = 0x1a5408u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
label_1a540c:
    // 0x1a540c: 0x2445e090
    ctx->pc = 0x1a540cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294959248));
label_1a5410:
    // 0x1a5410: 0xc06ac36
label_1a5414:
    if (ctx->pc == 0x1A5414u) {
        ctx->pc = 0x1A5414u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1A5418u;
        goto label_1a5418;
    }
    ctx->pc = 0x1A5410u;
    SET_GPR_U32(ctx, 31, 0x1A5418u);
    ctx->pc = 0x1A5414u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1AB0D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB0D8_0x1ab0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5418u; }
        else if (ctx->pc != 0x1A5418u) { ctx->pc = 0x1A5418u; }
    }
    if (ctx->pc != 0x1A5418u) { return; }
    ctx->pc = 0x1A5418u;
label_1a5418:
    // 0x1a5418: 0xc06952c
label_1a541c:
    if (ctx->pc == 0x1A541Cu) {
        ctx->pc = 0x1A541Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1A5420u;
        goto label_1a5420;
    }
    ctx->pc = 0x1A5418u;
    SET_GPR_U32(ctx, 31, 0x1A5420u);
    ctx->pc = 0x1A541Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1A54B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaSendToMFifo_0x1a54b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5420u; }
        else if (ctx->pc != 0x1A5420u) { ctx->pc = 0x1A5420u; }
    }
    if (ctx->pc != 0x1A5420u) { return; }
    ctx->pc = 0x1A5420u;
label_1a5420:
    // 0x1a5420: 0x16200007
label_1a5424:
    if (ctx->pc == 0x1A5424u) {
        ctx->pc = 0x1A5424u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1A5428u;
        goto label_1a5428;
    }
    ctx->pc = 0x1A5420u;
    {
        const bool branch_taken_0x1a5420 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A5424u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a5420) {
            ctx->pc = 0x1A5440u;
            goto label_1a5440;
        }
    }
    ctx->pc = 0x1A5428u;
label_1a5428:
    // 0x1a5428: 0x70002628
    ctx->pc = 0x1a5428u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1a542c:
    // 0x1a542c: 0xc054de4
label_1a5430:
    if (ctx->pc == 0x1A5430u) {
        ctx->pc = 0x1A5430u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1A5434u;
        goto label_1a5434;
    }
    ctx->pc = 0x1A542Cu;
    SET_GPR_U32(ctx, 31, 0x1A5434u);
    ctx->pc = 0x1A5430u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x153790u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x153790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5434u; }
        else if (ctx->pc != 0x1A5434u) { ctx->pc = 0x1A5434u; }
    }
    if (ctx->pc != 0x1A5434u) { return; }
    ctx->pc = 0x1A5434u;
label_1a5434:
    // 0x1a5434: 0x1000000b
label_1a5438:
    if (ctx->pc == 0x1A5438u) {
        ctx->pc = 0x1A5438u;
        SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
        ctx->pc = 0x1A543Cu;
        goto label_1a543c;
    }
    ctx->pc = 0x1A5434u;
    {
        const bool branch_taken_0x1a5434 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A5438u;
        SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
        if (branch_taken_0x1a5434) {
            ctx->pc = 0x1A5464u;
            goto label_1a5464;
        }
    }
    ctx->pc = 0x1A543Cu;
label_1a543c:
    // 0x1a543c: 0x72002628
    ctx->pc = 0x1a543cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1a5440:
    // 0x1a5440: 0x220f809
label_1a5444:
    if (ctx->pc == 0x1A5444u) {
        ctx->pc = 0x1A5448u;
        goto label_1a5448;
    }
    ctx->pc = 0x1A5440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 17);
        SET_GPR_U32(ctx, 31, 0x1A5448u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A53A0u: goto label_1a53a0;
            case 0x1A53A4u: goto label_1a53a4;
            case 0x1A53A8u: goto label_1a53a8;
            case 0x1A53ACu: goto label_1a53ac;
            case 0x1A53B0u: goto label_1a53b0;
            case 0x1A53B4u: goto label_1a53b4;
            case 0x1A53B8u: goto label_1a53b8;
            case 0x1A53BCu: goto label_1a53bc;
            case 0x1A53C0u: goto label_1a53c0;
            case 0x1A53C4u: goto label_1a53c4;
            case 0x1A53C8u: goto label_1a53c8;
            case 0x1A53CCu: goto label_1a53cc;
            case 0x1A53D0u: goto label_1a53d0;
            case 0x1A53D4u: goto label_1a53d4;
            case 0x1A53D8u: goto label_1a53d8;
            case 0x1A53DCu: goto label_1a53dc;
            case 0x1A53E0u: goto label_1a53e0;
            case 0x1A53E4u: goto label_1a53e4;
            case 0x1A53E8u: goto label_1a53e8;
            case 0x1A53ECu: goto label_1a53ec;
            case 0x1A53F0u: goto label_1a53f0;
            case 0x1A53F4u: goto label_1a53f4;
            case 0x1A53F8u: goto label_1a53f8;
            case 0x1A53FCu: goto label_1a53fc;
            case 0x1A5400u: goto label_1a5400;
            case 0x1A5404u: goto label_1a5404;
            case 0x1A5408u: goto label_1a5408;
            case 0x1A540Cu: goto label_1a540c;
            case 0x1A5410u: goto label_1a5410;
            case 0x1A5414u: goto label_1a5414;
            case 0x1A5418u: goto label_1a5418;
            case 0x1A541Cu: goto label_1a541c;
            case 0x1A5420u: goto label_1a5420;
            case 0x1A5424u: goto label_1a5424;
            case 0x1A5428u: goto label_1a5428;
            case 0x1A542Cu: goto label_1a542c;
            case 0x1A5430u: goto label_1a5430;
            case 0x1A5434u: goto label_1a5434;
            case 0x1A5438u: goto label_1a5438;
            case 0x1A543Cu: goto label_1a543c;
            case 0x1A5440u: goto label_1a5440;
            case 0x1A5444u: goto label_1a5444;
            case 0x1A5448u: goto label_1a5448;
            case 0x1A544Cu: goto label_1a544c;
            case 0x1A5450u: goto label_1a5450;
            case 0x1A5454u: goto label_1a5454;
            case 0x1A5458u: goto label_1a5458;
            case 0x1A545Cu: goto label_1a545c;
            case 0x1A5460u: goto label_1a5460;
            case 0x1A5464u: goto label_1a5464;
            case 0x1A5468u: goto label_1a5468;
            case 0x1A546Cu: goto label_1a546c;
            case 0x1A5470u: goto label_1a5470;
            case 0x1A5474u: goto label_1a5474;
            case 0x1A5478u: goto label_1a5478;
            case 0x1A547Cu: goto label_1a547c;
            case 0x1A5480u: goto label_1a5480;
            case 0x1A5484u: goto label_1a5484;
            case 0x1A5488u: goto label_1a5488;
            case 0x1A548Cu: goto label_1a548c;
            case 0x1A5490u: goto label_1a5490;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A5448u; }
            if (ctx->pc != 0x1A5448u) { return; }
        }
    }
    ctx->pc = 0x1A5448u;
label_1a5448:
    // 0x1a5448: 0x24040001
    ctx->pc = 0x1a5448u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_1a544c:
    // 0x1a544c: 0xc054de4
label_1a5450:
    if (ctx->pc == 0x1A5450u) {
        ctx->pc = 0x1A5450u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1A5454u;
        goto label_1a5454;
    }
    ctx->pc = 0x1A544Cu;
    SET_GPR_U32(ctx, 31, 0x1A5454u);
    ctx->pc = 0x1A5450u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x153790u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x153790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5454u; }
        else if (ctx->pc != 0x1A5454u) { ctx->pc = 0x1A5454u; }
    }
    if (ctx->pc != 0x1A5454u) { return; }
    ctx->pc = 0x1A5454u;
label_1a5454:
    // 0x1a5454: 0x1440fff9
label_1a5458:
    if (ctx->pc == 0x1A5458u) {
        ctx->pc = 0x1A545Cu;
        goto label_1a545c;
    }
    ctx->pc = 0x1A5454u;
    {
        const bool branch_taken_0x1a5454 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a5454) {
            ctx->pc = 0x1A543Cu;
            goto label_1a543c;
        }
    }
    ctx->pc = 0x1A545Cu;
label_1a545c:
    // 0x1a545c: 0x0
    ctx->pc = 0x1a545cu;
    // NOP
label_1a5460:
    // 0x1a5460: 0x3c011001
    ctx->pc = 0x1a5460u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
label_1a5464:
    // 0x1a5464: 0x8c24e000
    ctx->pc = 0x1a5464u;
    SET_GPR_U32(ctx, 4, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294959104))); // MMIO: 0x1000e000
label_1a5468:
    // 0x1a5468: 0x2403fff3
    ctx->pc = 0x1a5468u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967283));
label_1a546c:
    // 0x1a546c: 0x70001628
    ctx->pc = 0x1a546cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1a5470:
    // 0x1a5470: 0x831824
    ctx->pc = 0x1a5470u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1a5474:
    // 0x1a5474: 0x3c011001
    ctx->pc = 0x1a5474u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
label_1a5478:
    // 0x1a5478: 0xac23e000
    ctx->pc = 0x1a5478u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294959104), GPR_U32(ctx, 3)); // MMIO: 0x1000e000
label_1a547c:
    // 0x1a547c: 0xaf8089b4
    ctx->pc = 0x1a547cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937012), GPR_U32(ctx, 0));
label_1a5480:
    // 0x1a5480: 0x7bbf0020
    ctx->pc = 0x1a5480u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a5484:
    // 0x1a5484: 0x7bb10010
    ctx->pc = 0x1a5484u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a5488:
    // 0x1a5488: 0x7bb00000
    ctx->pc = 0x1a5488u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a548c:
    // 0x1a548c: 0x3e00008
label_1a5490:
    if (ctx->pc == 0x1A5490u) {
        ctx->pc = 0x1A5490u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1A5494u;
        goto label_fallthrough_0x1a548c;
    }
    ctx->pc = 0x1A548Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5490u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A53A0u: goto label_1a53a0;
            case 0x1A53A4u: goto label_1a53a4;
            case 0x1A53A8u: goto label_1a53a8;
            case 0x1A53ACu: goto label_1a53ac;
            case 0x1A53B0u: goto label_1a53b0;
            case 0x1A53B4u: goto label_1a53b4;
            case 0x1A53B8u: goto label_1a53b8;
            case 0x1A53BCu: goto label_1a53bc;
            case 0x1A53C0u: goto label_1a53c0;
            case 0x1A53C4u: goto label_1a53c4;
            case 0x1A53C8u: goto label_1a53c8;
            case 0x1A53CCu: goto label_1a53cc;
            case 0x1A53D0u: goto label_1a53d0;
            case 0x1A53D4u: goto label_1a53d4;
            case 0x1A53D8u: goto label_1a53d8;
            case 0x1A53DCu: goto label_1a53dc;
            case 0x1A53E0u: goto label_1a53e0;
            case 0x1A53E4u: goto label_1a53e4;
            case 0x1A53E8u: goto label_1a53e8;
            case 0x1A53ECu: goto label_1a53ec;
            case 0x1A53F0u: goto label_1a53f0;
            case 0x1A53F4u: goto label_1a53f4;
            case 0x1A53F8u: goto label_1a53f8;
            case 0x1A53FCu: goto label_1a53fc;
            case 0x1A5400u: goto label_1a5400;
            case 0x1A5404u: goto label_1a5404;
            case 0x1A5408u: goto label_1a5408;
            case 0x1A540Cu: goto label_1a540c;
            case 0x1A5410u: goto label_1a5410;
            case 0x1A5414u: goto label_1a5414;
            case 0x1A5418u: goto label_1a5418;
            case 0x1A541Cu: goto label_1a541c;
            case 0x1A5420u: goto label_1a5420;
            case 0x1A5424u: goto label_1a5424;
            case 0x1A5428u: goto label_1a5428;
            case 0x1A542Cu: goto label_1a542c;
            case 0x1A5430u: goto label_1a5430;
            case 0x1A5434u: goto label_1a5434;
            case 0x1A5438u: goto label_1a5438;
            case 0x1A543Cu: goto label_1a543c;
            case 0x1A5440u: goto label_1a5440;
            case 0x1A5444u: goto label_1a5444;
            case 0x1A5448u: goto label_1a5448;
            case 0x1A544Cu: goto label_1a544c;
            case 0x1A5450u: goto label_1a5450;
            case 0x1A5454u: goto label_1a5454;
            case 0x1A5458u: goto label_1a5458;
            case 0x1A545Cu: goto label_1a545c;
            case 0x1A5460u: goto label_1a5460;
            case 0x1A5464u: goto label_1a5464;
            case 0x1A5468u: goto label_1a5468;
            case 0x1A546Cu: goto label_1a546c;
            case 0x1A5470u: goto label_1a5470;
            case 0x1A5474u: goto label_1a5474;
            case 0x1A5478u: goto label_1a5478;
            case 0x1A547Cu: goto label_1a547c;
            case 0x1A5480u: goto label_1a5480;
            case 0x1A5484u: goto label_1a5484;
            case 0x1A5488u: goto label_1a5488;
            case 0x1A548Cu: goto label_1a548c;
            case 0x1A5490u: goto label_1a5490;
            default: break;
        }
        return;
    }
label_fallthrough_0x1a548c:
    ctx->pc = 0x1A5494u;
}
