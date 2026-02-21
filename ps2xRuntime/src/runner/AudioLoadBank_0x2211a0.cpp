#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioLoadBank
// Address: 0x2211a0 - 0x22145c
void AudioLoadBank_0x2211a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2211a0u;

    // 0x2211a0: 0x27bdfe10
    ctx->pc = 0x2211a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x2211a4: 0xffbf01e0
    ctx->pc = 0x2211a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 31));
    // 0x2211a8: 0xffbe01d0
    ctx->pc = 0x2211a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 30));
    // 0x2211ac: 0xffb701c0
    ctx->pc = 0x2211acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 23));
    // 0x2211b0: 0xffb601b0
    ctx->pc = 0x2211b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 22));
    // 0x2211b4: 0xffb501a0
    ctx->pc = 0x2211b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 21));
    // 0x2211b8: 0xffb40190
    ctx->pc = 0x2211b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 20));
    // 0x2211bc: 0xffb30180
    ctx->pc = 0x2211bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 19));
    // 0x2211c0: 0xffb20170
    ctx->pc = 0x2211c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 18));
    // 0x2211c4: 0xffb10160
    ctx->pc = 0x2211c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 17));
    // 0x2211c8: 0xffb00150
    ctx->pc = 0x2211c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 16));
    // 0x2211cc: 0x80982d
    ctx->pc = 0x2211ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2211d0: 0xa0802d
    ctx->pc = 0x2211d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2211d4: 0xc0b02d
    ctx->pc = 0x2211d4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2211d8: 0x3c020032
    ctx->pc = 0x2211d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2211dc: 0x8c42fd58
    ctx->pc = 0x2211dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966616)));
    // 0x2211e0: 0x10400003
    ctx->pc = 0x2211E0u;
    {
        const bool branch_taken_0x2211e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2211E4u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2211e0) {
            ctx->pc = 0x2211F0u;
            goto label_2211f0;
        }
    }
    ctx->pc = 0x2211E8u;
    // 0x2211e8: 0x10000090
    ctx->pc = 0x2211E8u;
    {
        const bool branch_taken_0x2211e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2211ECu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2211e8) {
            ctx->pc = 0x22142Cu;
            goto label_22142c;
        }
    }
    ctx->pc = 0x2211F0u;
label_2211f0:
    // 0x2211f0: 0x3c020032
    ctx->pc = 0x2211f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2211f4: 0x8c42fd5c
    ctx->pc = 0x2211f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966620)));
    // 0x2211f8: 0x14400004
    ctx->pc = 0x2211F8u;
    {
        const bool branch_taken_0x2211f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2211FCu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 22), 2));
        if (branch_taken_0x2211f8) {
            ctx->pc = 0x22120Cu;
            goto label_22120c;
        }
    }
    ctx->pc = 0x221200u;
    // 0x221200: 0xc08839e
    ctx->pc = 0x221200u;
    SET_GPR_U32(ctx, 31, 0x221208u);
    ctx->pc = 0x220E78u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioStreamStop_0x220e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221208u; }
    }
    if (ctx->pc != 0x221208u) { return; }
    ctx->pc = 0x221208u;
    // 0x221208: 0x2ac20002
    ctx->pc = 0x221208u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 22), 2));
label_22120c:
    // 0x22120c: 0x10400008
    ctx->pc = 0x22120Cu;
    {
        const bool branch_taken_0x22120c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x221210u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x22120c) {
            ctx->pc = 0x221230u;
            goto label_221230;
        }
    }
    ctx->pc = 0x221214u;
    // 0x221214: 0x3c04003a
    ctx->pc = 0x221214u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x221218: 0x248467c8
    ctx->pc = 0x221218u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26568));
    // 0x22121c: 0x260282d
    ctx->pc = 0x22121cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221220: 0x200302d
    ctx->pc = 0x221220u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221224: 0x8c4722f8
    ctx->pc = 0x221224u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 8952)));
    // 0x221228: 0xc0b4a34
    ctx->pc = 0x221228u;
    SET_GPR_U32(ctx, 31, 0x221230u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221230u; }
    }
    if (ctx->pc != 0x221230u) { return; }
    ctx->pc = 0x221230u;
label_221230:
    // 0x221230: 0xc08833c
    ctx->pc = 0x221230u;
    SET_GPR_U32(ctx, 31, 0x221238u);
    ctx->pc = 0x220CF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        EmptyDcsLoad_0x220cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221238u; }
    }
    if (ctx->pc != 0x221238u) { return; }
    ctx->pc = 0x221238u;
    // 0x221238: 0x40882d
    ctx->pc = 0x221238u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22123c: 0x6210006
    ctx->pc = 0x22123Cu;
    {
        const bool branch_taken_0x22123c = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x221240u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x22123c) {
            ctx->pc = 0x221258u;
            goto label_221258;
        }
    }
    ctx->pc = 0x221244u;
    // 0x221244: 0x3c04003a
    ctx->pc = 0x221244u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x221248: 0x248467f0
    ctx->pc = 0x221248u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26608));
    // 0x22124c: 0xc0b49a6
    ctx->pc = 0x22124Cu;
    SET_GPR_U32(ctx, 31, 0x221254u);
    ctx->pc = 0x221250u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32768));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221254u; }
    }
    if (ctx->pc != 0x221254u) { return; }
    ctx->pc = 0x221254u;
    // 0x221254: 0x2402ffff
    ctx->pc = 0x221254u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_221258:
    // 0x221258: 0x50102a
    ctx->pc = 0x221258u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
    // 0x22125c: 0x2800a
    ctx->pc = 0x22125cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 0));
    // 0x221260: 0x3c030032
    ctx->pc = 0x221260u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x221264: 0x24020124
    ctx->pc = 0x221264u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 292));
    // 0x221268: 0x2621018
    ctx->pc = 0x221268u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22126c: 0x24420014
    ctx->pc = 0x22126cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20));
    // 0x221270: 0x8c63fe28
    ctx->pc = 0x221270u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294966824)));
    // 0x221274: 0x43a021
    ctx->pc = 0x221274u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x221278: 0x3c020032
    ctx->pc = 0x221278u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22127c: 0x8c44fd6c
    ctx->pc = 0x22127cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294966636)));
    // 0x221280: 0x101080
    ctx->pc = 0x221280u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x221284: 0x2821021
    ctx->pc = 0x221284u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x221288: 0x8c42001c
    ctx->pc = 0x221288u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x22128c: 0x2403002c
    ctx->pc = 0x22128cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 44));
    // 0x221290: 0x431018
    ctx->pc = 0x221290u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x221294: 0x8c830010
    ctx->pc = 0x221294u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x221298: 0x439021
    ctx->pc = 0x221298u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22129c: 0x9643002a
    ctx->pc = 0x22129cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 42)));
    // 0x2212a0: 0x10600009
    ctx->pc = 0x2212A0u;
    {
        const bool branch_taken_0x2212a0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2212A4u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2212a0) {
            ctx->pc = 0x2212C8u;
            goto label_2212c8;
        }
    }
    ctx->pc = 0x2212A8u;
    // 0x2212a8: 0x3402ffff
    ctx->pc = 0x2212a8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
    // 0x2212ac: 0x50620007
    ctx->pc = 0x2212ACu;
    {
        const bool branch_taken_0x2212ac = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2212ac) {
            ctx->pc = 0x2212B0u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->pc = 0x2212CCu;
            goto label_2212cc;
        }
    }
    ctx->pc = 0x2212B4u;
    // 0x2212b4: 0xae90011c
    ctx->pc = 0x2212b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 284), GPR_U32(ctx, 16));
    // 0x2212b8: 0x9642002a
    ctx->pc = 0x2212b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 42)));
    // 0x2212bc: 0xae820120
    ctx->pc = 0x2212bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 288), GPR_U32(ctx, 2));
    // 0x2212c0: 0x1000005a
    ctx->pc = 0x2212C0u;
    {
        const bool branch_taken_0x2212c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2212C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2212c0) {
            ctx->pc = 0x22142Cu;
            goto label_22142c;
        }
    }
    ctx->pc = 0x2212C8u;
label_2212c8:
    // 0x2212c8: 0x2402ffff
    ctx->pc = 0x2212c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2212cc:
    // 0x2212cc: 0xa6420028
    ctx->pc = 0x2212ccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x2212d0: 0xa640002a
    ctx->pc = 0x2212d0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 42), (uint16_t)GPR_U32(ctx, 0));
    // 0x2212d4: 0x3c030032
    ctx->pc = 0x2212d4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x2212d8: 0x8c7efe30
    ctx->pc = 0x2212d8u;
    SET_GPR_U32(ctx, 30, READ32(ADD32(GPR_U32(ctx, 3), 4294966832)));
    // 0x2212dc: 0x24020001
    ctx->pc = 0x2212dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2212e0: 0xac62fe30
    ctx->pc = 0x2212e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966832), GPR_U32(ctx, 2));
    // 0x2212e4: 0x3a0202d
    ctx->pc = 0x2212e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2212e8: 0x3c05003a
    ctx->pc = 0x2212e8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x2212ec: 0x24a56800
    ctx->pc = 0x2212ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 26624));
    // 0x2212f0: 0xc0b6252
    ctx->pc = 0x2212F0u;
    SET_GPR_U32(ctx, 31, 0x2212F8u);
    ctx->pc = 0x2212F4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2212F8u; }
    }
    if (ctx->pc != 0x2212F8u) { return; }
    ctx->pc = 0x2212F8u;
    // 0x2212f8: 0x3c04003a
    ctx->pc = 0x2212f8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2212fc: 0x24846808
    ctx->pc = 0x2212fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26632));
    // 0x221300: 0x3a0282d
    ctx->pc = 0x221300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221304: 0x27a60040
    ctx->pc = 0x221304u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 64));
    // 0x221308: 0x24070100
    ctx->pc = 0x221308u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 256));
    // 0x22130c: 0x27a80140
    ctx->pc = 0x22130cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 320));
    // 0x221310: 0xc0b4ede
    ctx->pc = 0x221310u;
    SET_GPR_U32(ctx, 31, 0x221318u);
    ctx->pc = 0x221314u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 29), 324));
    ctx->pc = 0x2D3B78u;
    {
        const uint32_t __entryPc = ctx->pc;
        FileMap_0x2d3b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221318u; }
    }
    if (ctx->pc != 0x221318u) { return; }
    ctx->pc = 0x221318u;
    // 0x221318: 0x14400007
    ctx->pc = 0x221318u;
    {
        const bool branch_taken_0x221318 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22131Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x221318) {
            ctx->pc = 0x221338u;
            goto label_221338;
        }
    }
    ctx->pc = 0x221320u;
    // 0x221320: 0x3c04003a
    ctx->pc = 0x221320u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x221324: 0x24846810
    ctx->pc = 0x221324u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26640));
    // 0x221328: 0xc0b492e
    ctx->pc = 0x221328u;
    SET_GPR_U32(ctx, 31, 0x221330u);
    ctx->pc = 0x22132Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221330u; }
    }
    if (ctx->pc != 0x221330u) { return; }
    ctx->pc = 0x221330u;
    // 0x221330: 0x10000034
    ctx->pc = 0x221330u;
    {
        const bool branch_taken_0x221330 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x221334u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 22), 2));
        if (branch_taken_0x221330) {
            ctx->pc = 0x221404u;
            goto label_221404;
        }
    }
    ctx->pc = 0x221338u;
label_221338:
    // 0x221338: 0x24420628
    ctx->pc = 0x221338u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1576));
    // 0x22133c: 0x24030030
    ctx->pc = 0x22133cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
    // 0x221340: 0x2231818
    ctx->pc = 0x221340u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x221344: 0x621821
    ctx->pc = 0x221344u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x221348: 0xac750008
    ctx->pc = 0x221348u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 21));
    // 0x22134c: 0xac730000
    ctx->pc = 0x22134cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
    // 0x221350: 0xac700004
    ctx->pc = 0x221350u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
    // 0x221354: 0x3c020022
    ctx->pc = 0x221354u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x221358: 0x24420d38
    ctx->pc = 0x221358u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3384));
    // 0x22135c: 0xac620020
    ctx->pc = 0x22135cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    // 0x221360: 0xac630024
    ctx->pc = 0x221360u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 3));
    // 0x221364: 0x3c030032
    ctx->pc = 0x221364u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x221368: 0x8c62fe2c
    ctx->pc = 0x221368u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294966828)));
    // 0x22136c: 0x24420001
    ctx->pc = 0x22136cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x221370: 0xac62fe2c
    ctx->pc = 0x221370u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966828), GPR_U32(ctx, 2));
    // 0x221374: 0x8c75fe2c
    ctx->pc = 0x221374u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 3), 4294966828)));
    // 0x221378: 0x24020030
    ctx->pc = 0x221378u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
    // 0x22137c: 0x2228818
    ctx->pc = 0x22137cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x221380: 0x3c020032
    ctx->pc = 0x221380u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x221384: 0x24530638
    ctx->pc = 0x221384u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 1592));
    // 0x221388: 0x27a40040
    ctx->pc = 0x221388u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x22138c: 0x0
    ctx->pc = 0x22138cu;
    // NOP
label_221390:
    // 0x221390: 0x8fa50140
    ctx->pc = 0x221390u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x221394: 0x8fa60144
    ctx->pc = 0x221394u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x221398: 0x2333821
    ctx->pc = 0x221398u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x22139c: 0xc088f00
    ctx->pc = 0x22139Cu;
    SET_GPR_U32(ctx, 31, 0x2213A4u);
    ctx->pc = 0x2213A0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x223C00u;
    {
        const uint32_t __entryPc = ctx->pc;
        aud_load_bank_0x223c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2213A4u; }
    }
    if (ctx->pc != 0x2213A4u) { return; }
    ctx->pc = 0x2213A4u;
    // 0x2213a4: 0x440fffa
    ctx->pc = 0x2213A4u;
    {
        const bool branch_taken_0x2213a4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2213A8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
        if (branch_taken_0x2213a4) {
            ctx->pc = 0x221390u;
            goto label_221390;
        }
    }
    ctx->pc = 0x2213ACu;
    // 0x2213ac: 0x101080
    ctx->pc = 0x2213acu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x2213b0: 0x2821021
    ctx->pc = 0x2213b0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2213b4: 0x8c44001c
    ctx->pc = 0x2213b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2213b8: 0xc08809e
    ctx->pc = 0x2213B8u;
    SET_GPR_U32(ctx, 31, 0x2213C0u);
    ctx->pc = 0x2213BCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967041));
    ctx->pc = 0x220278u;
    {
        const uint32_t __entryPc = ctx->pc;
        update_history_0x220278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2213C0u; }
    }
    if (ctx->pc != 0x2213C0u) { return; }
    ctx->pc = 0x2213C0u;
    // 0x2213c0: 0x2ac20002
    ctx->pc = 0x2213c0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 22), 2));
    // 0x2213c4: 0x10400016
    ctx->pc = 0x2213C4u;
    {
        const bool branch_taken_0x2213c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2213C8u;
        SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
        if (branch_taken_0x2213c4) {
            ctx->pc = 0x221420u;
            goto label_221420;
        }
    }
    ctx->pc = 0x2213CCu;
    // 0x2213cc: 0x10000005
    ctx->pc = 0x2213CCu;
    {
        const bool branch_taken_0x2213cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2213cc) {
            ctx->pc = 0x2213E4u;
            goto label_2213e4;
        }
    }
    ctx->pc = 0x2213D4u;
    // 0x2213d4: 0x0
    ctx->pc = 0x2213d4u;
    // NOP
label_2213d8:
    // 0x2213d8: 0xae00d604
    ctx->pc = 0x2213d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294956548), GPR_U32(ctx, 0));
    // 0x2213dc: 0xc0b521c
    ctx->pc = 0x2213DCu;
    SET_GPR_U32(ctx, 31, 0x2213E4u);
    ctx->pc = 0x2213E0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D4870u;
    {
        const uint32_t __entryPc = ctx->pc;
        wait_vb_0x2d4870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2213E4u; }
    }
    if (ctx->pc != 0x2213E4u) { return; }
    ctx->pc = 0x2213E4u;
label_2213e4:
    // 0x2213e4: 0xc088290
    ctx->pc = 0x2213E4u;
    SET_GPR_U32(ctx, 31, 0x2213ECu);
    ctx->pc = 0x2213E8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x220A40u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioStillLoading_0x220a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2213ECu; }
    }
    if (ctx->pc != 0x2213ECu) { return; }
    ctx->pc = 0x2213ECu;
    // 0x2213ec: 0x12a2fffa
    ctx->pc = 0x2213ECu;
    {
        const bool branch_taken_0x2213ec = (GPR_U32(ctx, 21) == GPR_U32(ctx, 2));
        ctx->pc = 0x2213F0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2213ec) {
            ctx->pc = 0x2213D8u;
            goto label_2213d8;
        }
    }
    ctx->pc = 0x2213F4u;
    // 0x2213f4: 0x86430028
    ctx->pc = 0x2213f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x2213f8: 0x43102a
    ctx->pc = 0x2213f8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x2213fc: 0x2b80a
    ctx->pc = 0x2213fcu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 23, GPR_U32(ctx, 0));
    // 0x221400: 0x2ac20002
    ctx->pc = 0x221400u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 22), 2));
label_221404:
    // 0x221404: 0x10400006
    ctx->pc = 0x221404u;
    {
        const bool branch_taken_0x221404 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x221408u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x221404) {
            ctx->pc = 0x221420u;
            goto label_221420;
        }
    }
    ctx->pc = 0x22140Cu;
    // 0x22140c: 0x3c04003a
    ctx->pc = 0x22140cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x221410: 0x24846828
    ctx->pc = 0x221410u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26664));
    // 0x221414: 0x8c4522f8
    ctx->pc = 0x221414u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8952)));
    // 0x221418: 0xc0b4a34
    ctx->pc = 0x221418u;
    SET_GPR_U32(ctx, 31, 0x221420u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221420u; }
    }
    if (ctx->pc != 0x221420u) { return; }
    ctx->pc = 0x221420u;
label_221420:
    // 0x221420: 0x3c020032
    ctx->pc = 0x221420u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x221424: 0xac5efe30
    ctx->pc = 0x221424u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966832), GPR_U32(ctx, 30));
    // 0x221428: 0x2e0102d
    ctx->pc = 0x221428u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_22142c:
    // 0x22142c: 0xdfbf01e0
    ctx->pc = 0x22142cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x221430: 0xdfbe01d0
    ctx->pc = 0x221430u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x221434: 0xdfb701c0
    ctx->pc = 0x221434u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x221438: 0xdfb601b0
    ctx->pc = 0x221438u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x22143c: 0xdfb501a0
    ctx->pc = 0x22143cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x221440: 0xdfb40190
    ctx->pc = 0x221440u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x221444: 0xdfb30180
    ctx->pc = 0x221444u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x221448: 0xdfb20170
    ctx->pc = 0x221448u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x22144c: 0xdfb10160
    ctx->pc = 0x22144cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x221450: 0xdfb00150
    ctx->pc = 0x221450u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x221454: 0x3e00008
    ctx->pc = 0x221454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221458u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2211F0u: goto label_2211f0;
            case 0x22120Cu: goto label_22120c;
            case 0x221230u: goto label_221230;
            case 0x221258u: goto label_221258;
            case 0x2212C8u: goto label_2212c8;
            case 0x2212CCu: goto label_2212cc;
            case 0x221338u: goto label_221338;
            case 0x221390u: goto label_221390;
            case 0x2213D8u: goto label_2213d8;
            case 0x2213E4u: goto label_2213e4;
            case 0x221404u: goto label_221404;
            case 0x221420u: goto label_221420;
            case 0x22142Cu: goto label_22142c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22145Cu;
}
