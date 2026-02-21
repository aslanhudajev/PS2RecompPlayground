#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: do_titlescreen
// Address: 0x284318 - 0x2847e0
void do_titlescreen_0x284318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x284318u;

    // 0x284318: 0x27bdffa0
    ctx->pc = 0x284318u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x28431c: 0xffbf0050
    ctx->pc = 0x28431cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x284320: 0xffb40040
    ctx->pc = 0x284320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x284324: 0xffb30030
    ctx->pc = 0x284324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x284328: 0xffb20020
    ctx->pc = 0x284328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x28432c: 0xffb10010
    ctx->pc = 0x28432cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x284330: 0xffb00000
    ctx->pc = 0x284330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x284334: 0x24130001
    ctx->pc = 0x284334u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
    // 0x284338: 0x3c020035
    ctx->pc = 0x284338u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28433c: 0x8c42a2d8
    ctx->pc = 0x28433cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294943448)));
    // 0x284340: 0x1040000e
    ctx->pc = 0x284340u;
    {
        const bool branch_taken_0x284340 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x284344u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x284340) {
            ctx->pc = 0x28437Cu;
            goto label_28437c;
        }
    }
    ctx->pc = 0x284348u;
    // 0x284348: 0x3c020031
    ctx->pc = 0x284348u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x28434c: 0x8c42f184
    ctx->pc = 0x28434cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
    // 0x284350: 0x1440000e
    ctx->pc = 0x284350u;
    {
        const bool branch_taken_0x284350 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x284350) {
            ctx->pc = 0x28438Cu;
            goto label_28438c;
        }
    }
    ctx->pc = 0x284358u;
    // 0x284358: 0xc0839fc
    ctx->pc = 0x284358u;
    SET_GPR_U32(ctx, 31, 0x284360u);
    ctx->pc = 0x20E7F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        TitleMenuEnd_0x20e7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284360u; }
    }
    if (ctx->pc != 0x284360u) { return; }
    ctx->pc = 0x284360u;
    // 0x284360: 0xc09710c
    ctx->pc = 0x284360u;
    SET_GPR_U32(ctx, 31, 0x284368u);
    ctx->pc = 0x25C430u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioStopAll_0x25c430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284368u; }
    }
    if (ctx->pc != 0x284368u) { return; }
    ctx->pc = 0x284368u;
    // 0x284368: 0xc0a0960
    ctx->pc = 0x284368u;
    SET_GPR_U32(ctx, 31, 0x284370u);
    ctx->pc = 0x28436Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x282580u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_attract_mode_0x282580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284370u; }
    }
    if (ctx->pc != 0x284370u) { return; }
    ctx->pc = 0x284370u;
    // 0x284370: 0x3c020031
    ctx->pc = 0x284370u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x284374: 0x10000112
    ctx->pc = 0x284374u;
    {
        const bool branch_taken_0x284374 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x284378u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 3664), GPR_U32(ctx, 0));
        if (branch_taken_0x284374) {
            ctx->pc = 0x2847C0u;
            goto label_2847c0;
        }
    }
    ctx->pc = 0x28437Cu;
label_28437c:
    // 0x28437c: 0x3c020031
    ctx->pc = 0x28437cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x284380: 0x8c42f184
    ctx->pc = 0x284380u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
    // 0x284384: 0x10400008
    ctx->pc = 0x284384u;
    {
        const bool branch_taken_0x284384 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x284388u;
        SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
        if (branch_taken_0x284384) {
            ctx->pc = 0x2843A8u;
            goto label_2843a8;
        }
    }
    ctx->pc = 0x28438Cu;
label_28438c:
    // 0x28438c: 0xc081bae
    ctx->pc = 0x28438Cu;
    SET_GPR_U32(ctx, 31, 0x284394u);
    ctx->pc = 0x284390u;
    SET_GPR_U32(ctx, 4, ((uint32_t)2048 << 16));
    ctx->pc = 0x206EB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        any_0x206eb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284394u; }
    }
    if (ctx->pc != 0x284394u) { return; }
    ctx->pc = 0x284394u;
    // 0x284394: 0x10400004
    ctx->pc = 0x284394u;
    {
        const bool branch_taken_0x284394 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x284398u;
        SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
        if (branch_taken_0x284394) {
            ctx->pc = 0x2843A8u;
            goto label_2843a8;
        }
    }
    ctx->pc = 0x28439Cu;
    // 0x28439c: 0xc08026e
    ctx->pc = 0x28439Cu;
    SET_GPR_U32(ctx, 31, 0x2843A4u);
    ctx->pc = 0x2009B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DemoEnd_0x2009b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2843A4u; }
    }
    if (ctx->pc != 0x2843A4u) { return; }
    ctx->pc = 0x2843A4u;
    // 0x2843a4: 0x3c030031
    ctx->pc = 0x2843a4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_2843a8:
    // 0x2843a8: 0x24020001
    ctx->pc = 0x2843a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2843ac: 0xac620e50
    ctx->pc = 0x2843acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3664), GPR_U32(ctx, 2));
    // 0x2843b0: 0x3c100035
    ctx->pc = 0x2843b0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)53 << 16));
    // 0x2843b4: 0x3c030031
    ctx->pc = 0x2843b4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x2843b8: 0x8e02a2c8
    ctx->pc = 0x2843b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294943432)));
    // 0x2843bc: 0x8c63ffc0
    ctx->pc = 0x2843bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294967232)));
    // 0x2843c0: 0x431021
    ctx->pc = 0x2843c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2843c4: 0xae02a2c8
    ctx->pc = 0x2843c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294943432), GPR_U32(ctx, 2));
    // 0x2843c8: 0x21083
    ctx->pc = 0x2843c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2843cc: 0x2403000a
    ctx->pc = 0x2843ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x2843d0: 0x43001a
    ctx->pc = 0x2843d0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x2843d4: 0x3010
    ctx->pc = 0x2843d4u;
    SET_GPR_U32(ctx, 6, ctx->hi);
    // 0x2843d8: 0x50600001
    ctx->pc = 0x2843D8u;
    {
        const bool branch_taken_0x2843d8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2843d8) {
            ctx->pc = 0x2843DCu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x2843E0u;
            goto label_2843e0;
        }
    }
    ctx->pc = 0x2843E0u;
label_2843e0:
    // 0x2843e0: 0x3c11003c
    ctx->pc = 0x2843e0u;
    SET_GPR_U32(ctx, 17, ((uint32_t)60 << 16));
    // 0x2843e4: 0x3c020035
    ctx->pc = 0x2843e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x2843e8: 0x8e243b60
    ctx->pc = 0x2843e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 15200)));
    // 0x2843ec: 0xc0b0ed6
    ctx->pc = 0x2843ECu;
    SET_GPR_U32(ctx, 31, 0x2843F4u);
    ctx->pc = 0x2843F0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294943428)));
    ctx->pc = 0x2C3B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetTex_0x2c3b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2843F4u; }
    }
    if (ctx->pc != 0x2843F4u) { return; }
    ctx->pc = 0x2843F4u;
    // 0x2843f4: 0x8e03a2c8
    ctx->pc = 0x2843f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4294943432)));
    // 0x2843f8: 0x2862003c
    ctx->pc = 0x2843f8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 60));
    // 0x2843fc: 0x1040000b
    ctx->pc = 0x2843FCu;
    {
        const bool branch_taken_0x2843fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x284400u;
        SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 3), 8));
        if (branch_taken_0x2843fc) {
            ctx->pc = 0x28442Cu;
            goto label_28442c;
        }
    }
    ctx->pc = 0x284404u;
    // 0x284404: 0xa32823
    ctx->pc = 0x284404u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x284408: 0x2402003c
    ctx->pc = 0x284408u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
    // 0x28440c: 0xa2001a
    ctx->pc = 0x28440cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x284410: 0x2812
    ctx->pc = 0x284410u;
    SET_GPR_U32(ctx, 5, ctx->lo);
    // 0x284414: 0x50400001
    ctx->pc = 0x284414u;
    {
        const bool branch_taken_0x284414 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x284414) {
            ctx->pc = 0x284418u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x28441Cu;
            goto label_28441c;
        }
    }
    ctx->pc = 0x28441Cu;
label_28441c:
    // 0x28441c: 0x240200ff
    ctx->pc = 0x28441cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
    // 0x284420: 0x8e243b60
    ctx->pc = 0x284420u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 15200)));
    // 0x284424: 0xc0b0f52
    ctx->pc = 0x284424u;
    SET_GPR_U32(ctx, 31, 0x28442Cu);
    ctx->pc = 0x284428u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->pc = 0x2C3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetAlpha_0x2c3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28442Cu; }
    }
    if (ctx->pc != 0x28442Cu) { return; }
    ctx->pc = 0x28442Cu;
label_28442c:
    // 0x28442c: 0x802d
    ctx->pc = 0x28442cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284430: 0x3c02003c
    ctx->pc = 0x284430u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x284434: 0x24523b50
    ctx->pc = 0x284434u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 15184));
    // 0x284438: 0x3c110035
    ctx->pc = 0x284438u;
    SET_GPR_U32(ctx, 17, ((uint32_t)53 << 16));
    // 0x28443c: 0x101080
    ctx->pc = 0x28443cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
label_284440:
    // 0x284440: 0x521021
    ctx->pc = 0x284440u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x284444: 0x8c440000
    ctx->pc = 0x284444u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x284448: 0xc0b0dd6
    ctx->pc = 0x284448u;
    SET_GPR_U32(ctx, 31, 0x284450u);
    ctx->pc = 0x28444Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294943420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2C3758u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetZ_0x2c3758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284450u; }
    }
    if (ctx->pc != 0x284450u) { return; }
    ctx->pc = 0x284450u;
    // 0x284450: 0x26100001
    ctx->pc = 0x284450u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x284454: 0x2a020004
    ctx->pc = 0x284454u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x284458: 0x1440fff9
    ctx->pc = 0x284458u;
    {
        const bool branch_taken_0x284458 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28445Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x284458) {
            ctx->pc = 0x284440u;
            goto label_284440;
        }
    }
    ctx->pc = 0x284460u;
    // 0x284460: 0xc0a179e
    ctx->pc = 0x284460u;
    SET_GPR_U32(ctx, 31, 0x284468u);
    ctx->pc = 0x285E78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SelectLoadDone_0x285e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284468u; }
    }
    if (ctx->pc != 0x284468u) { return; }
    ctx->pc = 0x284468u;
    // 0x284468: 0x2980a
    ctx->pc = 0x284468u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 0));
    // 0x28446c: 0x24040001
    ctx->pc = 0x28446cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x284470: 0xc09908c
    ctx->pc = 0x284470u;
    SET_GPR_U32(ctx, 31, 0x284478u);
    ctx->pc = 0x284474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x264230u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadGauntWorldDone_0x264230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284478u; }
    }
    if (ctx->pc != 0x284478u) { return; }
    ctx->pc = 0x284478u;
    // 0x284478: 0xc081c76
    ctx->pc = 0x284478u;
    SET_GPR_U32(ctx, 31, 0x284480u);
    ctx->pc = 0x28447Cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 0));
    ctx->pc = 0x2071D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        controls_first_active_player_0x2071d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284480u; }
    }
    if (ctx->pc != 0x284480u) { return; }
    ctx->pc = 0x284480u;
    // 0x284480: 0x40802d
    ctx->pc = 0x284480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284484: 0x6010005
    ctx->pc = 0x284484u;
    {
        const bool branch_taken_0x284484 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x284488u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x284484) {
            ctx->pc = 0x28449Cu;
            goto label_28449c;
        }
    }
    ctx->pc = 0x28448Cu;
    // 0x28448c: 0xc081c1e
    ctx->pc = 0x28448Cu;
    SET_GPR_U32(ctx, 31, 0x284494u);
    ctx->pc = 0x284490u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x207078u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_start_0x207078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284494u; }
    }
    if (ctx->pc != 0x284494u) { return; }
    ctx->pc = 0x284494u;
    // 0x284494: 0x10000013
    ctx->pc = 0x284494u;
    {
        const bool branch_taken_0x284494 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x284498u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x284494) {
            ctx->pc = 0x2844E4u;
            goto label_2844e4;
        }
    }
    ctx->pc = 0x28449Cu;
label_28449c:
    // 0x28449c: 0x8c42d358
    ctx->pc = 0x28449cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955864)));
    // 0x2844a0: 0x1440002c
    ctx->pc = 0x2844A0u;
    {
        const bool branch_taken_0x2844a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2844A4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2844a0) {
            ctx->pc = 0x284554u;
            goto label_284554;
        }
    }
    ctx->pc = 0x2844A8u;
    // 0x2844a8: 0x3c020032
    ctx->pc = 0x2844a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2844ac: 0x8c42f444
    ctx->pc = 0x2844acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294964292)));
    // 0x2844b0: 0x1440000c
    ctx->pc = 0x2844B0u;
    {
        const bool branch_taken_0x2844b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2844B4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x2844b0) {
            ctx->pc = 0x2844E4u;
            goto label_2844e4;
        }
    }
    ctx->pc = 0x2844B8u;
    // 0x2844b8: 0xc0981a6
    ctx->pc = 0x2844B8u;
    SET_GPR_U32(ctx, 31, 0x2844C0u);
    ctx->pc = 0x260698u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioCursorSelect_0x260698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2844C0u; }
    }
    if (ctx->pc != 0x2844C0u) { return; }
    ctx->pc = 0x2844C0u;
    // 0x2844c0: 0x3c020031
    ctx->pc = 0x2844c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2844c4: 0x8c42f184
    ctx->pc = 0x2844c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
    // 0x2844c8: 0x10400003
    ctx->pc = 0x2844C8u;
    {
        const bool branch_taken_0x2844c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2844c8) {
            ctx->pc = 0x2844D8u;
            goto label_2844d8;
        }
    }
    ctx->pc = 0x2844D0u;
    // 0x2844d0: 0x10000003
    ctx->pc = 0x2844D0u;
    {
        const bool branch_taken_0x2844d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2844D4u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2844d0) {
            ctx->pc = 0x2844E0u;
            goto label_2844e0;
        }
    }
    ctx->pc = 0x2844D8u;
label_2844d8:
    // 0x2844d8: 0xc0839d8
    ctx->pc = 0x2844D8u;
    SET_GPR_U32(ctx, 31, 0x2844E0u);
    ctx->pc = 0x2844DCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20E760u;
    {
        const uint32_t __entryPc = ctx->pc;
        TitleMenuInit_0x20e760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2844E0u; }
    }
    if (ctx->pc != 0x2844E0u) { return; }
    ctx->pc = 0x2844E0u;
label_2844e0:
    // 0x2844e0: 0x3c020032
    ctx->pc = 0x2844e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_2844e4:
    // 0x2844e4: 0x8c42d358
    ctx->pc = 0x2844e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955864)));
    // 0x2844e8: 0x1440001a
    ctx->pc = 0x2844E8u;
    {
        const bool branch_taken_0x2844e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2844ECu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2844e8) {
            ctx->pc = 0x284554u;
            goto label_284554;
        }
    }
    ctx->pc = 0x2844F0u;
    // 0x2844f0: 0x3c020032
    ctx->pc = 0x2844f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2844f4: 0x8c42f444
    ctx->pc = 0x2844f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294964292)));
    // 0x2844f8: 0x14400016
    ctx->pc = 0x2844F8u;
    {
        const bool branch_taken_0x2844f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2844FCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2844f8) {
            ctx->pc = 0x284554u;
            goto label_284554;
        }
    }
    ctx->pc = 0x284500u;
    // 0x284500: 0x24020002
    ctx->pc = 0x284500u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x284504: 0x12820012
    ctx->pc = 0x284504u;
    {
        const bool branch_taken_0x284504 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 2));
        ctx->pc = 0x284508u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967040));
        if (branch_taken_0x284504) {
            ctx->pc = 0x284550u;
            goto label_284550;
        }
    }
    ctx->pc = 0x28450Cu;
    // 0x28450c: 0x24050140
    ctx->pc = 0x28450cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 320));
    // 0x284510: 0x3c013f80
    ctx->pc = 0x284510u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x284514: 0x44816000
    ctx->pc = 0x284514u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x284518: 0x3c06003b
    ctx->pc = 0x284518u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x28451c: 0xc080a9a
    ctx->pc = 0x28451Cu;
    SET_GPR_U32(ctx, 31, 0x284524u);
    ctx->pc = 0x284520u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294952048));
    ctx->pc = 0x202A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawGlowText_0x202a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284524u; }
    }
    if (ctx->pc != 0x284524u) { return; }
    ctx->pc = 0x284524u;
    // 0x284524: 0x3c020031
    ctx->pc = 0x284524u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x284528: 0xdc420e28
    ctx->pc = 0x284528u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x28452c: 0x30420010
    ctx->pc = 0x28452cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x284530: 0x10400007
    ctx->pc = 0x284530u;
    {
        const bool branch_taken_0x284530 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x284534u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x284530) {
            ctx->pc = 0x284550u;
            goto label_284550;
        }
    }
    ctx->pc = 0x284538u;
    // 0x284538: 0x8c421b30
    ctx->pc = 0x284538u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 6960)));
    // 0x28453c: 0x3c030f00
    ctx->pc = 0x28453cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)3840 << 16));
    // 0x284540: 0x431024
    ctx->pc = 0x284540u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x284544: 0x10400002
    ctx->pc = 0x284544u;
    {
        const bool branch_taken_0x284544 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x284548u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x284544) {
            ctx->pc = 0x284550u;
            goto label_284550;
        }
    }
    ctx->pc = 0x28454Cu;
    // 0x28454c: 0xac403b4c
    ctx->pc = 0x28454cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15180), GPR_U32(ctx, 0));
label_284550:
    // 0x284550: 0x3c020031
    ctx->pc = 0x284550u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_284554:
    // 0x284554: 0x8c42f184
    ctx->pc = 0x284554u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
    // 0x284558: 0x14400004
    ctx->pc = 0x284558u;
    {
        const bool branch_taken_0x284558 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28455Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x284558) {
            ctx->pc = 0x28456Cu;
            goto label_28456c;
        }
    }
    ctx->pc = 0x284560u;
    // 0x284560: 0xc0839de
    ctx->pc = 0x284560u;
    SET_GPR_U32(ctx, 31, 0x284568u);
    ctx->pc = 0x284564u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294943440)));
    ctx->pc = 0x20E778u;
    {
        const uint32_t __entryPc = ctx->pc;
        TitleMenu_0x20e778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284568u; }
    }
    if (ctx->pc != 0x284568u) { return; }
    ctx->pc = 0x284568u;
    // 0x284568: 0x40a02d
    ctx->pc = 0x284568u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28456c:
    // 0x28456c: 0xc08a330
    ctx->pc = 0x28456Cu;
    SET_GPR_U32(ctx, 31, 0x284574u);
    ctx->pc = 0x228CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        FireScrollActive_0x228cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284574u; }
    }
    if (ctx->pc != 0x284574u) { return; }
    ctx->pc = 0x284574u;
    // 0x284574: 0x14400007
    ctx->pc = 0x284574u;
    {
        const bool branch_taken_0x284574 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x284578u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x284574) {
            ctx->pc = 0x284594u;
            goto label_284594;
        }
    }
    ctx->pc = 0x28457Cu;
    // 0x28457c: 0x3c020032
    ctx->pc = 0x28457cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x284580: 0x8c43d358
    ctx->pc = 0x284580u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294955864)));
    // 0x284584: 0x10600008
    ctx->pc = 0x284584u;
    {
        const bool branch_taken_0x284584 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x284588u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x284584) {
            ctx->pc = 0x2845A8u;
            goto label_2845a8;
        }
    }
    ctx->pc = 0x28458Cu;
    // 0x28458c: 0x10620006
    ctx->pc = 0x28458Cu;
    {
        const bool branch_taken_0x28458c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x284590u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x28458c) {
            ctx->pc = 0x2845A8u;
            goto label_2845a8;
        }
    }
    ctx->pc = 0x284594u;
label_284594:
    // 0x284594: 0x8c443b60
    ctx->pc = 0x284594u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 15200)));
    // 0x284598: 0xc0b0ce8
    ctx->pc = 0x284598u;
    SET_GPR_U32(ctx, 31, 0x2845A0u);
    ctx->pc = 0x28459Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2845A0u; }
    }
    if (ctx->pc != 0x2845A0u) { return; }
    ctx->pc = 0x2845A0u;
    // 0x2845a0: 0x10000006
    ctx->pc = 0x2845A0u;
    {
        const bool branch_taken_0x2845a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2845A4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2845a0) {
            ctx->pc = 0x2845BCu;
            goto label_2845bc;
        }
    }
    ctx->pc = 0x2845A8u;
label_2845a8:
    // 0x2845a8: 0x3c02003c
    ctx->pc = 0x2845a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2845ac: 0x8c443b60
    ctx->pc = 0x2845acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 15200)));
    // 0x2845b0: 0xc0b0ce8
    ctx->pc = 0x2845B0u;
    SET_GPR_U32(ctx, 31, 0x2845B8u);
    ctx->pc = 0x2845B4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2845B8u; }
    }
    if (ctx->pc != 0x2845B8u) { return; }
    ctx->pc = 0x2845B8u;
    // 0x2845b8: 0x24020002
    ctx->pc = 0x2845b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_2845bc:
    // 0x2845bc: 0x1682003a
    ctx->pc = 0x2845BCu;
    {
        const bool branch_taken_0x2845bc = (GPR_U32(ctx, 20) != GPR_U32(ctx, 2));
        ctx->pc = 0x2845C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2845bc) {
            ctx->pc = 0x2846A8u;
            goto label_2846a8;
        }
    }
    ctx->pc = 0x2845C4u;
    // 0x2845c4: 0x3c030035
    ctx->pc = 0x2845c4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x2845c8: 0x8c62a2c0
    ctx->pc = 0x2845c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294943424)));
    // 0x2845cc: 0x14400006
    ctx->pc = 0x2845CCu;
    {
        const bool branch_taken_0x2845cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2845D0u;
        SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
        if (branch_taken_0x2845cc) {
            ctx->pc = 0x2845E8u;
            goto label_2845e8;
        }
    }
    ctx->pc = 0x2845D4u;
    // 0x2845d4: 0x24020001
    ctx->pc = 0x2845d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2845d8: 0xac62a2c0
    ctx->pc = 0x2845d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943424), GPR_U32(ctx, 2));
    // 0x2845dc: 0xc0981b4
    ctx->pc = 0x2845DCu;
    SET_GPR_U32(ctx, 31, 0x2845E4u);
    ctx->pc = 0x2845E0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2606D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioPlayerStart_0x2606d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2845E4u; }
    }
    if (ctx->pc != 0x2845E4u) { return; }
    ctx->pc = 0x2845E4u;
    // 0x2845e4: 0x3c040035
    ctx->pc = 0x2845e4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
label_2845e8:
    // 0x2845e8: 0x8c83a2cc
    ctx->pc = 0x2845e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294943436)));
    // 0x2845ec: 0x18600012
    ctx->pc = 0x2845ECu;
    {
        const bool branch_taken_0x2845ec = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2845F0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2845ec) {
            ctx->pc = 0x284638u;
            goto label_284638;
        }
    }
    ctx->pc = 0x2845F4u;
    // 0x2845f4: 0x8c42ffc0
    ctx->pc = 0x2845f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967232)));
    // 0x2845f8: 0x621023
    ctx->pc = 0x2845f8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2845fc: 0xac82a2cc
    ctx->pc = 0x2845fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294943436), GPR_U32(ctx, 2));
    // 0x284600: 0x21040
    ctx->pc = 0x284600u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x284604: 0x240300ff
    ctx->pc = 0x284604u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 255));
    // 0x284608: 0x622823
    ctx->pc = 0x284608u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28460c: 0x28a20008
    ctx->pc = 0x28460cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 8));
    // 0x284610: 0x10400006
    ctx->pc = 0x284610u;
    {
        const bool branch_taken_0x284610 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x284614u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x284610) {
            ctx->pc = 0x28462Cu;
            goto label_28462c;
        }
    }
    ctx->pc = 0x284618u;
    // 0x284618: 0x8c443b60
    ctx->pc = 0x284618u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 15200)));
    // 0x28461c: 0xc0b0ce8
    ctx->pc = 0x28461Cu;
    SET_GPR_U32(ctx, 31, 0x284624u);
    ctx->pc = 0x284620u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284624u; }
    }
    if (ctx->pc != 0x284624u) { return; }
    ctx->pc = 0x284624u;
    // 0x284624: 0x10000004
    ctx->pc = 0x284624u;
    {
        const bool branch_taken_0x284624 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x284624) {
            ctx->pc = 0x284638u;
            goto label_284638;
        }
    }
    ctx->pc = 0x28462Cu;
label_28462c:
    // 0x28462c: 0xc0b0f52
    ctx->pc = 0x28462Cu;
    SET_GPR_U32(ctx, 31, 0x284634u);
    ctx->pc = 0x284630u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 15200)));
    ctx->pc = 0x2C3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetAlpha_0x2c3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284634u; }
    }
    if (ctx->pc != 0x284634u) { return; }
    ctx->pc = 0x284634u;
    // 0x284634: 0x982d
    ctx->pc = 0x284634u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_284638:
    // 0x284638: 0x12600013
    ctx->pc = 0x284638u;
    {
        const bool branch_taken_0x284638 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x28463Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967040));
        if (branch_taken_0x284638) {
            ctx->pc = 0x284688u;
            goto label_284688;
        }
    }
    ctx->pc = 0x284640u;
    // 0x284640: 0x24050140
    ctx->pc = 0x284640u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 320));
    // 0x284644: 0x3c013f80
    ctx->pc = 0x284644u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x284648: 0x44816000
    ctx->pc = 0x284648u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x28464c: 0x3c06003b
    ctx->pc = 0x28464cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x284650: 0xc080a9a
    ctx->pc = 0x284650u;
    SET_GPR_U32(ctx, 31, 0x284658u);
    ctx->pc = 0x284654u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294952192));
    ctx->pc = 0x202A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawGlowText_0x202a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284658u; }
    }
    if (ctx->pc != 0x284658u) { return; }
    ctx->pc = 0x284658u;
    // 0x284658: 0xc0839fc
    ctx->pc = 0x284658u;
    SET_GPR_U32(ctx, 31, 0x284660u);
    ctx->pc = 0x20E7F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        TitleMenuEnd_0x20e7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284660u; }
    }
    if (ctx->pc != 0x284660u) { return; }
    ctx->pc = 0x284660u;
    // 0x284660: 0xc098528
    ctx->pc = 0x284660u;
    SET_GPR_U32(ctx, 31, 0x284668u);
    ctx->pc = 0x2614A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GauntInitWorldData_0x2614a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284668u; }
    }
    if (ctx->pc != 0x284668u) { return; }
    ctx->pc = 0x284668u;
    // 0x284668: 0x3c020031
    ctx->pc = 0x284668u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x28466c: 0xac400e50
    ctx->pc = 0x28466cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3664), GPR_U32(ctx, 0));
    // 0x284670: 0xc0a145a
    ctx->pc = 0x284670u;
    SET_GPR_U32(ctx, 31, 0x284678u);
    ctx->pc = 0x284674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x285168u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_player_select_0x285168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284678u; }
    }
    if (ctx->pc != 0x284678u) { return; }
    ctx->pc = 0x284678u;
    // 0x284678: 0xc083a0a
    ctx->pc = 0x284678u;
    SET_GPR_U32(ctx, 31, 0x284680u);
    ctx->pc = 0x28467Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x20E828u;
    {
        const uint32_t __entryPc = ctx->pc;
        HintMenu_0x20e828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284680u; }
    }
    if (ctx->pc != 0x284680u) { return; }
    ctx->pc = 0x284680u;
    // 0x284680: 0x10000050
    ctx->pc = 0x284680u;
    {
        const bool branch_taken_0x284680 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x284684u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x284680) {
            ctx->pc = 0x2847C4u;
            goto label_2847c4;
        }
    }
    ctx->pc = 0x284688u;
label_284688:
    // 0x284688: 0x24050140
    ctx->pc = 0x284688u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 320));
    // 0x28468c: 0x3c013f80
    ctx->pc = 0x28468cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x284690: 0x44816000
    ctx->pc = 0x284690u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x284694: 0x3c06003b
    ctx->pc = 0x284694u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x284698: 0xc080a9a
    ctx->pc = 0x284698u;
    SET_GPR_U32(ctx, 31, 0x2846A0u);
    ctx->pc = 0x28469Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294952192));
    ctx->pc = 0x202A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawGlowText_0x202a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2846A0u; }
    }
    if (ctx->pc != 0x2846A0u) { return; }
    ctx->pc = 0x2846A0u;
    // 0x2846a0: 0x10000048
    ctx->pc = 0x2846A0u;
    {
        const bool branch_taken_0x2846a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2846A4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x2846a0) {
            ctx->pc = 0x2847C4u;
            goto label_2847c4;
        }
    }
    ctx->pc = 0x2846A8u;
label_2846a8:
    // 0x2846a8: 0x16820005
    ctx->pc = 0x2846A8u;
    {
        const bool branch_taken_0x2846a8 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 2));
        ctx->pc = 0x2846ACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x2846a8) {
            ctx->pc = 0x2846C0u;
            goto label_2846c0;
        }
    }
    ctx->pc = 0x2846B0u;
    // 0x2846b0: 0xc0a1022
    ctx->pc = 0x2846B0u;
    SET_GPR_U32(ctx, 31, 0x2846B8u);
    ctx->pc = 0x284088u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_titlescreen_timer_0x284088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2846B8u; }
    }
    if (ctx->pc != 0x2846B8u) { return; }
    ctx->pc = 0x2846B8u;
    // 0x2846b8: 0x10000042
    ctx->pc = 0x2846B8u;
    {
        const bool branch_taken_0x2846b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2846BCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x2846b8) {
            ctx->pc = 0x2847C4u;
            goto label_2847c4;
        }
    }
    ctx->pc = 0x2846C0u;
label_2846c0:
    // 0x2846c0: 0x8c43d358
    ctx->pc = 0x2846c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294955864)));
    // 0x2846c4: 0x10600003
    ctx->pc = 0x2846C4u;
    {
        const bool branch_taken_0x2846c4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2846C8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2846c4) {
            ctx->pc = 0x2846D4u;
            goto label_2846d4;
        }
    }
    ctx->pc = 0x2846CCu;
    // 0x2846cc: 0x1462000a
    ctx->pc = 0x2846CCu;
    {
        const bool branch_taken_0x2846cc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2846D0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2846cc) {
            ctx->pc = 0x2846F8u;
            goto label_2846f8;
        }
    }
    ctx->pc = 0x2846D4u;
label_2846d4:
    // 0x2846d4: 0x3c020031
    ctx->pc = 0x2846d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2846d8: 0x8c44ffc0
    ctx->pc = 0x2846d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294967232)));
    // 0x2846dc: 0x2c82000a
    ctx->pc = 0x2846dcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 10));
    // 0x2846e0: 0x10400004
    ctx->pc = 0x2846E0u;
    {
        const bool branch_taken_0x2846e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2846E4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x2846e0) {
            ctx->pc = 0x2846F4u;
            goto label_2846f4;
        }
    }
    ctx->pc = 0x2846E8u;
    // 0x2846e8: 0x8c623b4c
    ctx->pc = 0x2846e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 15180)));
    // 0x2846ec: 0x441023
    ctx->pc = 0x2846ecu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2846f0: 0xac623b4c
    ctx->pc = 0x2846f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15180), GPR_U32(ctx, 2));
label_2846f4:
    // 0x2846f4: 0x3c020031
    ctx->pc = 0x2846f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_2846f8:
    // 0x2846f8: 0x8c42f184
    ctx->pc = 0x2846f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
    // 0x2846fc: 0x10400008
    ctx->pc = 0x2846FCu;
    {
        const bool branch_taken_0x2846fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x284700u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2846fc) {
            ctx->pc = 0x284720u;
            goto label_284720;
        }
    }
    ctx->pc = 0x284704u;
    // 0x284704: 0x8c423b4c
    ctx->pc = 0x284704u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 15180)));
    // 0x284708: 0x1c40002e
    ctx->pc = 0x284708u;
    {
        const bool branch_taken_0x284708 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x28470Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x284708) {
            ctx->pc = 0x2847C4u;
            goto label_2847c4;
        }
    }
    ctx->pc = 0x284710u;
    // 0x284710: 0xc08026e
    ctx->pc = 0x284710u;
    SET_GPR_U32(ctx, 31, 0x284718u);
    ctx->pc = 0x2009B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DemoEnd_0x2009b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284718u; }
    }
    if (ctx->pc != 0x284718u) { return; }
    ctx->pc = 0x284718u;
    // 0x284718: 0x1000002a
    ctx->pc = 0x284718u;
    {
        const bool branch_taken_0x284718 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28471Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x284718) {
            ctx->pc = 0x2847C4u;
            goto label_2847c4;
        }
    }
    ctx->pc = 0x284720u;
label_284720:
    // 0x284720: 0x12600027
    ctx->pc = 0x284720u;
    {
        const bool branch_taken_0x284720 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x284724u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 15180)));
        if (branch_taken_0x284720) {
            ctx->pc = 0x2847C0u;
            goto label_2847c0;
        }
    }
    ctx->pc = 0x284728u;
    // 0x284728: 0x2862001e
    ctx->pc = 0x284728u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 30));
    // 0x28472c: 0x1040000e
    ctx->pc = 0x28472Cu;
    {
        const bool branch_taken_0x28472c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x284730u;
        SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 3), 8));
        if (branch_taken_0x28472c) {
            ctx->pc = 0x284768u;
            goto label_284768;
        }
    }
    ctx->pc = 0x284734u;
    // 0x284734: 0xa32823
    ctx->pc = 0x284734u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x284738: 0x2402001e
    ctx->pc = 0x284738u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30));
    // 0x28473c: 0xa2001a
    ctx->pc = 0x28473cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x284740: 0x2812
    ctx->pc = 0x284740u;
    SET_GPR_U32(ctx, 5, ctx->lo);
    // 0x284744: 0x50400001
    ctx->pc = 0x284744u;
    {
        const bool branch_taken_0x284744 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x284744) {
            ctx->pc = 0x284748u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x28474Cu;
            goto label_28474c;
        }
    }
    ctx->pc = 0x28474Cu;
label_28474c:
    // 0x28474c: 0x240300ff
    ctx->pc = 0x28474cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 255));
    // 0x284750: 0x3c02003c
    ctx->pc = 0x284750u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x284754: 0x8c443b60
    ctx->pc = 0x284754u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 15200)));
    // 0x284758: 0xc0b0f52
    ctx->pc = 0x284758u;
    SET_GPR_U32(ctx, 31, 0x284760u);
    ctx->pc = 0x28475Cu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->pc = 0x2C3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetAlpha_0x2c3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284760u; }
    }
    if (ctx->pc != 0x284760u) { return; }
    ctx->pc = 0x284760u;
    // 0x284760: 0x10000006
    ctx->pc = 0x284760u;
    {
        const bool branch_taken_0x284760 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x284764u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x284760) {
            ctx->pc = 0x28477Cu;
            goto label_28477c;
        }
    }
    ctx->pc = 0x284768u;
label_284768:
    // 0x284768: 0x3c02003c
    ctx->pc = 0x284768u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x28476c: 0x8c443b60
    ctx->pc = 0x28476cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 15200)));
    // 0x284770: 0xc0b0f52
    ctx->pc = 0x284770u;
    SET_GPR_U32(ctx, 31, 0x284778u);
    ctx->pc = 0x284774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetAlpha_0x2c3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284778u; }
    }
    if (ctx->pc != 0x284778u) { return; }
    ctx->pc = 0x284778u;
    // 0x284778: 0x3c02003c
    ctx->pc = 0x284778u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_28477c:
    // 0x28477c: 0x8c423b4c
    ctx->pc = 0x28477cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 15180)));
    // 0x284780: 0x1c400010
    ctx->pc = 0x284780u;
    {
        const bool branch_taken_0x284780 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x284784u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x284780) {
            ctx->pc = 0x2847C4u;
            goto label_2847c4;
        }
    }
    ctx->pc = 0x284788u;
    // 0x284788: 0x3c02003c
    ctx->pc = 0x284788u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x28478c: 0x8c443b60
    ctx->pc = 0x28478cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 15200)));
    // 0x284790: 0xc0b0f52
    ctx->pc = 0x284790u;
    SET_GPR_U32(ctx, 31, 0x284798u);
    ctx->pc = 0x284794u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
    ctx->pc = 0x2C3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetAlpha_0x2c3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284798u; }
    }
    if (ctx->pc != 0x284798u) { return; }
    ctx->pc = 0x284798u;
    // 0x284798: 0x3c030035
    ctx->pc = 0x284798u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x28479c: 0x24020001
    ctx->pc = 0x28479cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2847a0: 0xac62a2d8
    ctx->pc = 0x2847a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943448), GPR_U32(ctx, 2));
    // 0x2847a4: 0x3c020031
    ctx->pc = 0x2847a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2847a8: 0xc0839fc
    ctx->pc = 0x2847A8u;
    SET_GPR_U32(ctx, 31, 0x2847B0u);
    ctx->pc = 0x2847ACu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3664), GPR_U32(ctx, 0));
    ctx->pc = 0x20E7F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        TitleMenuEnd_0x20e7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2847B0u; }
    }
    if (ctx->pc != 0x2847B0u) { return; }
    ctx->pc = 0x2847B0u;
    // 0x2847b0: 0xc09710c
    ctx->pc = 0x2847B0u;
    SET_GPR_U32(ctx, 31, 0x2847B8u);
    ctx->pc = 0x25C430u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioStopAll_0x25c430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2847B8u; }
    }
    if (ctx->pc != 0x2847B8u) { return; }
    ctx->pc = 0x2847B8u;
    // 0x2847b8: 0xc089a1e
    ctx->pc = 0x2847B8u;
    SET_GPR_U32(ctx, 31, 0x2847C0u);
    ctx->pc = 0x226878u;
    {
        const uint32_t __entryPc = ctx->pc;
        EndTower_0x226878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2847C0u; }
    }
    if (ctx->pc != 0x2847C0u) { return; }
    ctx->pc = 0x2847C0u;
label_2847c0:
    // 0x2847c0: 0xdfbf0050
    ctx->pc = 0x2847c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2847c4:
    // 0x2847c4: 0xdfb40040
    ctx->pc = 0x2847c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2847c8: 0xdfb30030
    ctx->pc = 0x2847c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2847cc: 0xdfb20020
    ctx->pc = 0x2847ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2847d0: 0xdfb10010
    ctx->pc = 0x2847d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2847d4: 0xdfb00000
    ctx->pc = 0x2847d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2847d8: 0x3e00008
    ctx->pc = 0x2847D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2847DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28437Cu: goto label_28437c;
            case 0x28438Cu: goto label_28438c;
            case 0x2843A8u: goto label_2843a8;
            case 0x2843E0u: goto label_2843e0;
            case 0x28441Cu: goto label_28441c;
            case 0x28442Cu: goto label_28442c;
            case 0x284440u: goto label_284440;
            case 0x28449Cu: goto label_28449c;
            case 0x2844D8u: goto label_2844d8;
            case 0x2844E0u: goto label_2844e0;
            case 0x2844E4u: goto label_2844e4;
            case 0x284550u: goto label_284550;
            case 0x284554u: goto label_284554;
            case 0x28456Cu: goto label_28456c;
            case 0x284594u: goto label_284594;
            case 0x2845A8u: goto label_2845a8;
            case 0x2845BCu: goto label_2845bc;
            case 0x2845E8u: goto label_2845e8;
            case 0x28462Cu: goto label_28462c;
            case 0x284638u: goto label_284638;
            case 0x284688u: goto label_284688;
            case 0x2846A8u: goto label_2846a8;
            case 0x2846C0u: goto label_2846c0;
            case 0x2846D4u: goto label_2846d4;
            case 0x2846F4u: goto label_2846f4;
            case 0x2846F8u: goto label_2846f8;
            case 0x284720u: goto label_284720;
            case 0x28474Cu: goto label_28474c;
            case 0x284768u: goto label_284768;
            case 0x28477Cu: goto label_28477c;
            case 0x2847C0u: goto label_2847c0;
            case 0x2847C4u: goto label_2847c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2847E0u;
}
