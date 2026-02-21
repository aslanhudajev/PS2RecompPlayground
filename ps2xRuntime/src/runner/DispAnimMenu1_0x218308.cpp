#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DispAnimMenu1
// Address: 0x218308 - 0x218470
void DispAnimMenu1_0x218308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x218308u;

    // 0x218308: 0x27bdff60
    ctx->pc = 0x218308u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x21830c: 0xffbf0090
    ctx->pc = 0x21830cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x218310: 0xffbe0080
    ctx->pc = 0x218310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x218314: 0xffb70070
    ctx->pc = 0x218314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x218318: 0xffb60060
    ctx->pc = 0x218318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x21831c: 0xffb50050
    ctx->pc = 0x21831cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x218320: 0xffb40040
    ctx->pc = 0x218320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x218324: 0xffb30030
    ctx->pc = 0x218324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x218328: 0xffb20020
    ctx->pc = 0x218328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21832c: 0xffb10010
    ctx->pc = 0x21832cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x218330: 0xffb00000
    ctx->pc = 0x218330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x218334: 0x80982d
    ctx->pc = 0x218334u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218338: 0x24160001
    ctx->pc = 0x218338u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21833c: 0x24140003
    ctx->pc = 0x21833cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 3));
    // 0x218340: 0x86640000
    ctx->pc = 0x218340u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x218344: 0x28820026
    ctx->pc = 0x218344u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 38));
    // 0x218348: 0x10400004
    ctx->pc = 0x218348u;
    {
        const bool branch_taken_0x218348 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21834Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 38));
        if (branch_taken_0x218348) {
            ctx->pc = 0x21835Cu;
            goto label_21835c;
        }
    }
    ctx->pc = 0x218350u;
    // 0x218350: 0x182d
    ctx->pc = 0x218350u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218354: 0x1000000f
    ctx->pc = 0x218354u;
    {
        const bool branch_taken_0x218354 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x218358u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x218354) {
            ctx->pc = 0x218394u;
            goto label_218394;
        }
    }
    ctx->pc = 0x21835Cu;
label_21835c:
    // 0x21835c: 0x3c03003c
    ctx->pc = 0x21835cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x218360: 0x2463cfd0
    ctx->pc = 0x218360u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294954960));
    // 0x218364: 0x3c020032
    ctx->pc = 0x218364u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x218368: 0x8c42f8d4
    ctx->pc = 0x218368u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965460)));
    // 0x21836c: 0x21080
    ctx->pc = 0x21836cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x218370: 0x431021
    ctx->pc = 0x218370u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x218374: 0x51842
    ctx->pc = 0x218374u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 5), 1));
    // 0x218378: 0x8c420000
    ctx->pc = 0x218378u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21837c: 0x629021
    ctx->pc = 0x21837cu;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x218380: 0x245102a
    ctx->pc = 0x218380u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 5)));
    // 0x218384: 0xa2900b
    ctx->pc = 0x218384u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 5));
    // 0x218388: 0x244102a
    ctx->pc = 0x218388u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 4)));
    // 0x21838c: 0x82900a
    ctx->pc = 0x21838cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 4));
    // 0x218390: 0x2451823
    ctx->pc = 0x218390u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_218394:
    // 0x218394: 0x1260002b
    ctx->pc = 0x218394u;
    {
        const bool branch_taken_0x218394 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x218398u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        if (branch_taken_0x218394) {
            ctx->pc = 0x218444u;
            goto label_218444;
        }
    }
    ctx->pc = 0x21839Cu;
    // 0x21839c: 0x8e620004
    ctx->pc = 0x21839cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2183a0: 0x10400028
    ctx->pc = 0x2183A0u;
    {
        const bool branch_taken_0x2183a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2183A4u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2183a0) {
            ctx->pc = 0x218444u;
            goto label_218444;
        }
    }
    ctx->pc = 0x2183A8u;
    // 0x2183a8: 0x232102a
    ctx->pc = 0x2183a8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 18)));
    // 0x2183ac: 0x10400025
    ctx->pc = 0x2183ACu;
    {
        const bool branch_taken_0x2183ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2183B0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2183ac) {
            ctx->pc = 0x218444u;
            goto label_218444;
        }
    }
    ctx->pc = 0x2183B4u;
    // 0x2183b4: 0x245ecfd0
    ctx->pc = 0x2183b4u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 2), 4294954960));
    // 0x2183b8: 0x3c170032
    ctx->pc = 0x2183b8u;
    SET_GPR_U32(ctx, 23, ((uint32_t)50 << 16));
    // 0x2183bc: 0x24150024
    ctx->pc = 0x2183bcu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 36));
    // 0x2183c0: 0x8ee2f8d4
    ctx->pc = 0x2183c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 4294965460)));
    // 0x2183c4: 0x0
    ctx->pc = 0x2183c4u;
    // NOP
label_2183c8:
    // 0x2183c8: 0x21080
    ctx->pc = 0x2183c8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2183cc: 0x5e1021
    ctx->pc = 0x2183ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x2183d0: 0x8c420000
    ctx->pc = 0x2183d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2183d4: 0x1622000e
    ctx->pc = 0x2183D4u;
    {
        const bool branch_taken_0x2183d4 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x2183D8u;
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2183d4) {
            ctx->pc = 0x218410u;
            goto label_218410;
        }
    }
    ctx->pc = 0x2183DCu;
    // 0x2183dc: 0x2358018
    ctx->pc = 0x2183dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2183e0: 0x8e670004
    ctx->pc = 0x2183e0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2183e4: 0x3c0400ff
    ctx->pc = 0x2183e4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)255 << 16));
    // 0x2183e8: 0x3484ff00
    ctx->pc = 0x2183e8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65280));
    // 0x2183ec: 0x2c0282d
    ctx->pc = 0x2183ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2183f0: 0x280302d
    ctx->pc = 0x2183f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2183f4: 0xc0b4724
    ctx->pc = 0x2183F4u;
    SET_GPR_U32(ctx, 31, 0x2183FCu);
    ctx->pc = 0x2183F8u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    ctx->pc = 0x2D1C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyechofc_0x2d1c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2183FCu; }
    }
    if (ctx->pc != 0x2183FCu) { return; }
    ctx->pc = 0x2183FCu;
    // 0x2183fc: 0x8e640004
    ctx->pc = 0x2183fcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x218400: 0xc0bf306
    ctx->pc = 0x218400u;
    SET_GPR_U32(ctx, 31, 0x218408u);
    ctx->pc = 0x218404u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->pc = 0x2FCC18u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x2fcc18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218408u; }
    }
    if (ctx->pc != 0x218408u) { return; }
    ctx->pc = 0x218408u;
    // 0x218408: 0x10000009
    ctx->pc = 0x218408u;
    {
        const bool branch_taken_0x218408 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21840Cu;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
        if (branch_taken_0x218408) {
            ctx->pc = 0x218430u;
            goto label_218430;
        }
    }
    ctx->pc = 0x218410u;
label_218410:
    // 0x218410: 0x8e670004
    ctx->pc = 0x218410u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x218414: 0x3c0400ff
    ctx->pc = 0x218414u;
    SET_GPR_U32(ctx, 4, ((uint32_t)255 << 16));
    // 0x218418: 0x3484ffff
    ctx->pc = 0x218418u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x21841c: 0x2c0282d
    ctx->pc = 0x21841cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218420: 0x280302d
    ctx->pc = 0x218420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218424: 0xc0b4724
    ctx->pc = 0x218424u;
    SET_GPR_U32(ctx, 31, 0x21842Cu);
    ctx->pc = 0x218428u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    ctx->pc = 0x2D1C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyechofc_0x2d1c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21842Cu; }
    }
    if (ctx->pc != 0x21842Cu) { return; }
    ctx->pc = 0x21842Cu;
    // 0x21842c: 0x26940001
    ctx->pc = 0x21842cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_218430:
    // 0x218430: 0x26310001
    ctx->pc = 0x218430u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x218434: 0x232102a
    ctx->pc = 0x218434u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 18)));
    // 0x218438: 0x1440ffe3
    ctx->pc = 0x218438u;
    {
        const bool branch_taken_0x218438 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21843Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 4294965460)));
        if (branch_taken_0x218438) {
            ctx->pc = 0x2183C8u;
            goto label_2183c8;
        }
    }
    ctx->pc = 0x218440u;
    // 0x218440: 0xdfbf0090
    ctx->pc = 0x218440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_218444:
    // 0x218444: 0xdfbe0080
    ctx->pc = 0x218444u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x218448: 0xdfb70070
    ctx->pc = 0x218448u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21844c: 0xdfb60060
    ctx->pc = 0x21844cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x218450: 0xdfb50050
    ctx->pc = 0x218450u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x218454: 0xdfb40040
    ctx->pc = 0x218454u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x218458: 0xdfb30030
    ctx->pc = 0x218458u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21845c: 0xdfb20020
    ctx->pc = 0x21845cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218460: 0xdfb10010
    ctx->pc = 0x218460u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218464: 0xdfb00000
    ctx->pc = 0x218464u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218468: 0x3e00008
    ctx->pc = 0x218468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21846Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21835Cu: goto label_21835c;
            case 0x218394u: goto label_218394;
            case 0x2183C8u: goto label_2183c8;
            case 0x218410u: goto label_218410;
            case 0x218430u: goto label_218430;
            case 0x218444u: goto label_218444;
            default: break;
        }
        return;
    }
    ctx->pc = 0x218470u;
}
