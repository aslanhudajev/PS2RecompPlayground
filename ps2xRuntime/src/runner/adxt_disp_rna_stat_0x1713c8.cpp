#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxt_disp_rna_stat
// Address: 0x1713c8 - 0x1714cc
void adxt_disp_rna_stat_0x1713c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxt_disp_rna_stat");


    ctx->pc = 0x1713c8u;

label_1713c8:
    // 0x1713c8: 0x27bdff90
    ctx->pc = 0x1713c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
label_1713cc:
    // 0x1713cc: 0x282d
    ctx->pc = 0x1713ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1713d0:
    // 0x1713d0: 0xffb50050
    ctx->pc = 0x1713d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_1713d4:
    // 0x1713d4: 0xffb40040
    ctx->pc = 0x1713d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1713d8:
    // 0x1713d8: 0x80a82d
    ctx->pc = 0x1713d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1713dc:
    // 0x1713dc: 0xffb30030
    ctx->pc = 0x1713dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_1713e0:
    // 0x1713e0: 0xffb20020
    ctx->pc = 0x1713e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1713e4:
    // 0x1713e4: 0xffb10010
    ctx->pc = 0x1713e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1713e8:
    // 0x1713e8: 0xffbf0060
    ctx->pc = 0x1713e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1713ec:
    // 0x1713ec: 0xffb00000
    ctx->pc = 0x1713ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1713f0:
    // 0x1713f0: 0x8eb0000c
    ctx->pc = 0x1713f0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_1713f4:
    // 0x1713f4: 0xc05efa6
label_1713f8:
    if (ctx->pc == 0x1713F8u) {
        ctx->pc = 0x1713F8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1713FCu;
        goto label_1713fc;
    }
    ctx->pc = 0x1713F4u;
    SET_GPR_U32(ctx, 31, 0x1713FCu);
    ctx->pc = 0x1713F8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17BE98u;
    {
        const uint32_t __entryPc = ctx->pc;
        PS2RNA_GetSjiop_0x17be98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1713FCu; }
        else if (ctx->pc != 0x1713FCu) { ctx->pc = 0x1713FCu; }
    }
    if (ctx->pc != 0x1713FCu) { return; }
    ctx->pc = 0x1713FCu;
label_1713fc:
    // 0x1713fc: 0x40a02d
    ctx->pc = 0x1713fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_171400:
    // 0x171400: 0x200202d
    ctx->pc = 0x171400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_171404:
    // 0x171404: 0xc05efa0
label_171408:
    if (ctx->pc == 0x171408u) {
        ctx->pc = 0x171408u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17140Cu;
        goto label_17140c;
    }
    ctx->pc = 0x171404u;
    SET_GPR_U32(ctx, 31, 0x17140Cu);
    ctx->pc = 0x171408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17BE80u;
    {
        const uint32_t __entryPc = ctx->pc;
        PS2RNA_GetSjtmp_0x17be80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17140Cu; }
        else if (ctx->pc != 0x17140Cu) { ctx->pc = 0x17140Cu; }
    }
    if (ctx->pc != 0x17140Cu) { return; }
    ctx->pc = 0x17140Cu;
label_17140c:
    // 0x17140c: 0x40802d
    ctx->pc = 0x17140cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_171410:
    // 0x171410: 0x24050001
    ctx->pc = 0x171410u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
label_171414:
    // 0x171414: 0x8e030000
    ctx->pc = 0x171414u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_171418:
    // 0x171418: 0x8c620024
    ctx->pc = 0x171418u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_17141c:
    // 0x17141c: 0x40f809
label_171420:
    if (ctx->pc == 0x171420u) {
        ctx->pc = 0x171420u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x171424u;
        goto label_171424;
    }
    ctx->pc = 0x17141Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x171424u);
        ctx->pc = 0x171420u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1713C8u: goto label_1713c8;
            case 0x1713CCu: goto label_1713cc;
            case 0x1713D0u: goto label_1713d0;
            case 0x1713D4u: goto label_1713d4;
            case 0x1713D8u: goto label_1713d8;
            case 0x1713DCu: goto label_1713dc;
            case 0x1713E0u: goto label_1713e0;
            case 0x1713E4u: goto label_1713e4;
            case 0x1713E8u: goto label_1713e8;
            case 0x1713ECu: goto label_1713ec;
            case 0x1713F0u: goto label_1713f0;
            case 0x1713F4u: goto label_1713f4;
            case 0x1713F8u: goto label_1713f8;
            case 0x1713FCu: goto label_1713fc;
            case 0x171400u: goto label_171400;
            case 0x171404u: goto label_171404;
            case 0x171408u: goto label_171408;
            case 0x17140Cu: goto label_17140c;
            case 0x171410u: goto label_171410;
            case 0x171414u: goto label_171414;
            case 0x171418u: goto label_171418;
            case 0x17141Cu: goto label_17141c;
            case 0x171420u: goto label_171420;
            case 0x171424u: goto label_171424;
            case 0x171428u: goto label_171428;
            case 0x17142Cu: goto label_17142c;
            case 0x171430u: goto label_171430;
            case 0x171434u: goto label_171434;
            case 0x171438u: goto label_171438;
            case 0x17143Cu: goto label_17143c;
            case 0x171440u: goto label_171440;
            case 0x171444u: goto label_171444;
            case 0x171448u: goto label_171448;
            case 0x17144Cu: goto label_17144c;
            case 0x171450u: goto label_171450;
            case 0x171454u: goto label_171454;
            case 0x171458u: goto label_171458;
            case 0x17145Cu: goto label_17145c;
            case 0x171460u: goto label_171460;
            case 0x171464u: goto label_171464;
            case 0x171468u: goto label_171468;
            case 0x17146Cu: goto label_17146c;
            case 0x171470u: goto label_171470;
            case 0x171474u: goto label_171474;
            case 0x171478u: goto label_171478;
            case 0x17147Cu: goto label_17147c;
            case 0x171480u: goto label_171480;
            case 0x171484u: goto label_171484;
            case 0x171488u: goto label_171488;
            case 0x17148Cu: goto label_17148c;
            case 0x171490u: goto label_171490;
            case 0x171494u: goto label_171494;
            case 0x171498u: goto label_171498;
            case 0x17149Cu: goto label_17149c;
            case 0x1714A0u: goto label_1714a0;
            case 0x1714A4u: goto label_1714a4;
            case 0x1714A8u: goto label_1714a8;
            case 0x1714ACu: goto label_1714ac;
            case 0x1714B0u: goto label_1714b0;
            case 0x1714B4u: goto label_1714b4;
            case 0x1714B8u: goto label_1714b8;
            case 0x1714BCu: goto label_1714bc;
            case 0x1714C0u: goto label_1714c0;
            case 0x1714C4u: goto label_1714c4;
            case 0x1714C8u: goto label_1714c8;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x171424u; }
            if (ctx->pc != 0x171424u) { return; }
        }
    }
    ctx->pc = 0x171424u;
label_171424:
    // 0x171424: 0x8e030000
    ctx->pc = 0x171424u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_171428:
    // 0x171428: 0x40902d
    ctx->pc = 0x171428u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17142c:
    // 0x17142c: 0x200202d
    ctx->pc = 0x17142cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_171430:
    // 0x171430: 0x8c620024
    ctx->pc = 0x171430u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_171434:
    // 0x171434: 0x40f809
label_171438:
    if (ctx->pc == 0x171438u) {
        ctx->pc = 0x171438u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17143Cu;
        goto label_17143c;
    }
    ctx->pc = 0x171434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17143Cu);
        ctx->pc = 0x171438u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1713C8u: goto label_1713c8;
            case 0x1713CCu: goto label_1713cc;
            case 0x1713D0u: goto label_1713d0;
            case 0x1713D4u: goto label_1713d4;
            case 0x1713D8u: goto label_1713d8;
            case 0x1713DCu: goto label_1713dc;
            case 0x1713E0u: goto label_1713e0;
            case 0x1713E4u: goto label_1713e4;
            case 0x1713E8u: goto label_1713e8;
            case 0x1713ECu: goto label_1713ec;
            case 0x1713F0u: goto label_1713f0;
            case 0x1713F4u: goto label_1713f4;
            case 0x1713F8u: goto label_1713f8;
            case 0x1713FCu: goto label_1713fc;
            case 0x171400u: goto label_171400;
            case 0x171404u: goto label_171404;
            case 0x171408u: goto label_171408;
            case 0x17140Cu: goto label_17140c;
            case 0x171410u: goto label_171410;
            case 0x171414u: goto label_171414;
            case 0x171418u: goto label_171418;
            case 0x17141Cu: goto label_17141c;
            case 0x171420u: goto label_171420;
            case 0x171424u: goto label_171424;
            case 0x171428u: goto label_171428;
            case 0x17142Cu: goto label_17142c;
            case 0x171430u: goto label_171430;
            case 0x171434u: goto label_171434;
            case 0x171438u: goto label_171438;
            case 0x17143Cu: goto label_17143c;
            case 0x171440u: goto label_171440;
            case 0x171444u: goto label_171444;
            case 0x171448u: goto label_171448;
            case 0x17144Cu: goto label_17144c;
            case 0x171450u: goto label_171450;
            case 0x171454u: goto label_171454;
            case 0x171458u: goto label_171458;
            case 0x17145Cu: goto label_17145c;
            case 0x171460u: goto label_171460;
            case 0x171464u: goto label_171464;
            case 0x171468u: goto label_171468;
            case 0x17146Cu: goto label_17146c;
            case 0x171470u: goto label_171470;
            case 0x171474u: goto label_171474;
            case 0x171478u: goto label_171478;
            case 0x17147Cu: goto label_17147c;
            case 0x171480u: goto label_171480;
            case 0x171484u: goto label_171484;
            case 0x171488u: goto label_171488;
            case 0x17148Cu: goto label_17148c;
            case 0x171490u: goto label_171490;
            case 0x171494u: goto label_171494;
            case 0x171498u: goto label_171498;
            case 0x17149Cu: goto label_17149c;
            case 0x1714A0u: goto label_1714a0;
            case 0x1714A4u: goto label_1714a4;
            case 0x1714A8u: goto label_1714a8;
            case 0x1714ACu: goto label_1714ac;
            case 0x1714B0u: goto label_1714b0;
            case 0x1714B4u: goto label_1714b4;
            case 0x1714B8u: goto label_1714b8;
            case 0x1714BCu: goto label_1714bc;
            case 0x1714C0u: goto label_1714c0;
            case 0x1714C4u: goto label_1714c4;
            case 0x1714C8u: goto label_1714c8;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17143Cu; }
            if (ctx->pc != 0x17143Cu) { return; }
        }
    }
    ctx->pc = 0x17143Cu;
label_17143c:
    // 0x17143c: 0x40982d
    ctx->pc = 0x17143cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_171440:
    // 0x171440: 0x280202d
    ctx->pc = 0x171440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_171444:
    // 0x171444: 0xc05f570
label_171448:
    if (ctx->pc == 0x171448u) {
        ctx->pc = 0x171448u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x17144Cu;
        goto label_17144c;
    }
    ctx->pc = 0x171444u;
    SET_GPR_U32(ctx, 31, 0x17144Cu);
    ctx->pc = 0x171448u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x17D5C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJRMT_GetNumData_0x17d5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17144Cu; }
        else if (ctx->pc != 0x17144Cu) { ctx->pc = 0x17144Cu; }
    }
    if (ctx->pc != 0x17144Cu) { return; }
    ctx->pc = 0x17144Cu;
label_17144c:
    // 0x17144c: 0x40882d
    ctx->pc = 0x17144cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_171450:
    // 0x171450: 0x280202d
    ctx->pc = 0x171450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_171454:
    // 0x171454: 0xc05f570
label_171458:
    if (ctx->pc == 0x171458u) {
        ctx->pc = 0x171458u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17145Cu;
        goto label_17145c;
    }
    ctx->pc = 0x171454u;
    SET_GPR_U32(ctx, 31, 0x17145Cu);
    ctx->pc = 0x171458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17D5C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJRMT_GetNumData_0x17d5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17145Cu; }
        else if (ctx->pc != 0x17145Cu) { ctx->pc = 0x17145Cu; }
    }
    if (ctx->pc != 0x17145Cu) { return; }
    ctx->pc = 0x17145Cu;
label_17145c:
    // 0x17145c: 0x3c04002c
    ctx->pc = 0x17145cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_171460:
    // 0x171460: 0x40802d
    ctx->pc = 0x171460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_171464:
    // 0x171464: 0x2533821
    ctx->pc = 0x171464u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_171468:
    // 0x171468: 0x240282d
    ctx->pc = 0x171468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17146c:
    // 0x17146c: 0x260302d
    ctx->pc = 0x17146cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_171470:
    // 0x171470: 0xc05114a
label_171474:
    if (ctx->pc == 0x171474u) {
        ctx->pc = 0x171474u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294943224));
        ctx->pc = 0x171478u;
        goto label_171478;
    }
    ctx->pc = 0x171470u;
    SET_GPR_U32(ctx, 31, 0x171478u);
    ctx->pc = 0x171474u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294943224));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171478u; }
        else if (ctx->pc != 0x171478u) { ctx->pc = 0x171478u; }
    }
    if (ctx->pc != 0x171478u) { return; }
    ctx->pc = 0x171478u;
label_171478:
    // 0x171478: 0x3c04002c
    ctx->pc = 0x171478u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_17147c:
    // 0x17147c: 0x2303821
    ctx->pc = 0x17147cu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_171480:
    // 0x171480: 0x220282d
    ctx->pc = 0x171480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_171484:
    // 0x171484: 0x200302d
    ctx->pc = 0x171484u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_171488:
    // 0x171488: 0xc05114a
label_17148c:
    if (ctx->pc == 0x17148Cu) {
        ctx->pc = 0x17148Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294943256));
        ctx->pc = 0x171490u;
        goto label_171490;
    }
    ctx->pc = 0x171488u;
    SET_GPR_U32(ctx, 31, 0x171490u);
    ctx->pc = 0x17148Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294943256));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171490u; }
        else if (ctx->pc != 0x171490u) { ctx->pc = 0x171490u; }
    }
    if (ctx->pc != 0x171490u) { return; }
    ctx->pc = 0x171490u;
label_171490:
    // 0x171490: 0x2509021
    ctx->pc = 0x171490u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_171494:
    // 0x171494: 0x2338821
    ctx->pc = 0x171494u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_171498:
    // 0x171498: 0x2513021
    ctx->pc = 0x171498u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_17149c:
    // 0x17149c: 0x82a50001
    ctx->pc = 0x17149cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
label_1714a0:
    // 0x1714a0: 0x3c04002c
    ctx->pc = 0x1714a0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_1714a4:
    // 0x1714a4: 0xdfbf0060
    ctx->pc = 0x1714a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1714a8:
    // 0x1714a8: 0xdfb50050
    ctx->pc = 0x1714a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1714ac:
    // 0x1714ac: 0x2484a238
    ctx->pc = 0x1714acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294943288));
label_1714b0:
    // 0x1714b0: 0xdfb40040
    ctx->pc = 0x1714b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1714b4:
    // 0x1714b4: 0xdfb30030
    ctx->pc = 0x1714b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1714b8:
    // 0x1714b8: 0xdfb20020
    ctx->pc = 0x1714b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1714bc:
    // 0x1714bc: 0xdfb10010
    ctx->pc = 0x1714bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1714c0:
    // 0x1714c0: 0xdfb00000
    ctx->pc = 0x1714c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1714c4:
    // 0x1714c4: 0x805114a
label_1714c8:
    if (ctx->pc == 0x1714C8u) {
        ctx->pc = 0x1714C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1714CCu;
        goto label_fallthrough_0x1714c4;
    }
    ctx->pc = 0x1714C4u;
    ctx->pc = 0x1714C8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
    ctx->pc = 0x144528u;
    printf_0x144528(rdram, ctx, runtime); return;
label_fallthrough_0x1714c4:
    ctx->pc = 0x1714CCu;
}
