#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: init_stats_display
// Address: 0x227120 - 0x227288
void init_stats_display_0x227120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x227120u;

    // 0x227120: 0x27bdff80
    ctx->pc = 0x227120u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x227124: 0xffbf0070
    ctx->pc = 0x227124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x227128: 0xffb40060
    ctx->pc = 0x227128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x22712c: 0xffb30050
    ctx->pc = 0x22712cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x227130: 0xffb20040
    ctx->pc = 0x227130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x227134: 0xffb10030
    ctx->pc = 0x227134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x227138: 0xffb00020
    ctx->pc = 0x227138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x22713c: 0x3c030031
    ctx->pc = 0x22713cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x227140: 0x24024016
    ctx->pc = 0x227140u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16406));
    // 0x227144: 0xac620018
    ctx->pc = 0x227144u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x227148: 0x3c020031
    ctx->pc = 0x227148u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x22714c: 0xac40ff9c
    ctx->pc = 0x22714cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967196), GPR_U32(ctx, 0));
    // 0x227150: 0x2404ffff
    ctx->pc = 0x227150u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x227154: 0x24050001
    ctx->pc = 0x227154u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x227158: 0xc0898c2
    ctx->pc = 0x227158u;
    SET_GPR_U32(ctx, 31, 0x227160u);
    ctx->pc = 0x22715Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x226308u;
    {
        const uint32_t __entryPc = ctx->pc;
        ResetModels_0x226308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227160u; }
    }
    if (ctx->pc != 0x227160u) { return; }
    ctx->pc = 0x227160u;
    // 0x227160: 0x3c04003a
    ctx->pc = 0x227160u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x227164: 0x24846cf0
    ctx->pc = 0x227164u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27888));
    // 0x227168: 0x282d
    ctx->pc = 0x227168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22716c: 0x24060001
    ctx->pc = 0x22716cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x227170: 0xc080d22
    ctx->pc = 0x227170u;
    SET_GPR_U32(ctx, 31, 0x227178u);
    ctx->pc = 0x227174u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x203488u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadModel_0x203488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227178u; }
    }
    if (ctx->pc != 0x227178u) { return; }
    ctx->pc = 0x227178u;
    // 0x227178: 0x802d
    ctx->pc = 0x227178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22717c: 0x3c14003a
    ctx->pc = 0x22717cu;
    SET_GPR_U32(ctx, 20, ((uint32_t)58 << 16));
    // 0x227180: 0x3c020032
    ctx->pc = 0x227180u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x227184: 0x24530720
    ctx->pc = 0x227184u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 1824));
    // 0x227188: 0x3c020032
    ctx->pc = 0x227188u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22718c: 0x24520724
    ctx->pc = 0x22718cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 1828));
    // 0x227190: 0x3c02003c
    ctx->pc = 0x227190u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x227194: 0x24511818
    ctx->pc = 0x227194u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 6168));
    // 0x227198: 0x3a0202d
    ctx->pc = 0x227198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22719c: 0x0
    ctx->pc = 0x22719cu;
    // NOP
label_2271a0:
    // 0x2271a0: 0x26856d00
    ctx->pc = 0x2271a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 20), 27904));
    // 0x2271a4: 0xc0b6252
    ctx->pc = 0x2271A4u;
    SET_GPR_U32(ctx, 31, 0x2271ACu);
    ctx->pc = 0x2271A8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2271ACu; }
    }
    if (ctx->pc != 0x2271ACu) { return; }
    ctx->pc = 0x2271ACu;
    // 0x2271ac: 0x1010c0
    ctx->pc = 0x2271acu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 3));
    // 0x2271b0: 0x531821
    ctx->pc = 0x2271b0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2271b4: 0x521021
    ctx->pc = 0x2271b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2271b8: 0x3a0202d
    ctx->pc = 0x2271b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2271bc: 0x8c650000
    ctx->pc = 0x2271bcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2271c0: 0xc0b0c08
    ctx->pc = 0x2271C0u;
    SET_GPR_U32(ctx, 31, 0x2271C8u);
    ctx->pc = 0x2271C4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x2C3020u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewBlit_0x2c3020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2271C8u; }
    }
    if (ctx->pc != 0x2271C8u) { return; }
    ctx->pc = 0x2271C8u;
    // 0x2271c8: 0x101880
    ctx->pc = 0x2271c8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x2271cc: 0x711821
    ctx->pc = 0x2271ccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2271d0: 0xac620000
    ctx->pc = 0x2271d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2271d4: 0x3c01447a
    ctx->pc = 0x2271d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17530 << 16));
    // 0x2271d8: 0x44816000
    ctx->pc = 0x2271d8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2271dc: 0xc0b0dd6
    ctx->pc = 0x2271DCu;
    SET_GPR_U32(ctx, 31, 0x2271E4u);
    ctx->pc = 0x2271E0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3758u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetZ_0x2c3758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2271E4u; }
    }
    if (ctx->pc != 0x2271E4u) { return; }
    ctx->pc = 0x2271E4u;
    // 0x2271e4: 0x26100001
    ctx->pc = 0x2271e4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x2271e8: 0x2a020004
    ctx->pc = 0x2271e8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x2271ec: 0x5440ffec
    ctx->pc = 0x2271ECu;
    {
        const bool branch_taken_0x2271ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2271ec) {
            ctx->pc = 0x2271F0u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2271A0u;
            goto label_2271a0;
        }
    }
    ctx->pc = 0x2271F4u;
    // 0x2271f4: 0x802d
    ctx->pc = 0x2271f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2271f8: 0x3c020032
    ctx->pc = 0x2271f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2271fc: 0x24511bc0
    ctx->pc = 0x2271fcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x227200: 0x24140001
    ctx->pc = 0x227200u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
    // 0x227204: 0x24130005
    ctx->pc = 0x227204u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 5));
    // 0x227208: 0x24120003
    ctx->pc = 0x227208u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 3));
    // 0x22720c: 0x0
    ctx->pc = 0x22720cu;
    // NOP
label_227210:
    // 0x227210: 0xae200980
    ctx->pc = 0x227210u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2432), GPR_U32(ctx, 0));
    // 0x227214: 0x8e2200fc
    ctx->pc = 0x227214u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 252)));
    // 0x227218: 0x10540005
    ctx->pc = 0x227218u;
    {
        const bool branch_taken_0x227218 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 20));
        if (branch_taken_0x227218) {
            ctx->pc = 0x227230u;
            goto label_227230;
        }
    }
    ctx->pc = 0x227220u;
    // 0x227220: 0x10530003
    ctx->pc = 0x227220u;
    {
        const bool branch_taken_0x227220 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 19));
        if (branch_taken_0x227220) {
            ctx->pc = 0x227230u;
            goto label_227230;
        }
    }
    ctx->pc = 0x227228u;
    // 0x227228: 0x10520005
    ctx->pc = 0x227228u;
    {
        const bool branch_taken_0x227228 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 18));
        if (branch_taken_0x227228) {
            ctx->pc = 0x227240u;
            goto label_227240;
        }
    }
    ctx->pc = 0x227230u;
label_227230:
    // 0x227230: 0xc08d382
    ctx->pc = 0x227230u;
    SET_GPR_U32(ctx, 31, 0x227238u);
    ctx->pc = 0x227234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x234E08u;
    {
        const uint32_t __entryPc = ctx->pc;
        setup_player_display_0x234e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227238u; }
    }
    if (ctx->pc != 0x227238u) { return; }
    ctx->pc = 0x227238u;
    // 0x227238: 0x10000004
    ctx->pc = 0x227238u;
    {
        const bool branch_taken_0x227238 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22723Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x227238) {
            ctx->pc = 0x22724Cu;
            goto label_22724c;
        }
    }
    ctx->pc = 0x227240u;
label_227240:
    // 0x227240: 0xc08d382
    ctx->pc = 0x227240u;
    SET_GPR_U32(ctx, 31, 0x227248u);
    ctx->pc = 0x227244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x234E08u;
    {
        const uint32_t __entryPc = ctx->pc;
        setup_player_display_0x234e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227248u; }
    }
    if (ctx->pc != 0x227248u) { return; }
    ctx->pc = 0x227248u;
    // 0x227248: 0x26100001
    ctx->pc = 0x227248u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_22724c:
    // 0x22724c: 0x2a020004
    ctx->pc = 0x22724cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x227250: 0x1440ffef
    ctx->pc = 0x227250u;
    {
        const bool branch_taken_0x227250 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x227254u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 11008));
        if (branch_taken_0x227250) {
            ctx->pc = 0x227210u;
            goto label_227210;
        }
    }
    ctx->pc = 0x227258u;
    // 0x227258: 0xc0973f2
    ctx->pc = 0x227258u;
    SET_GPR_U32(ctx, 31, 0x227260u);
    ctx->pc = 0x25CFC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ShopMusicStart_0x25cfc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227260u; }
    }
    if (ctx->pc != 0x227260u) { return; }
    ctx->pc = 0x227260u;
    // 0x227260: 0xc089994
    ctx->pc = 0x227260u;
    SET_GPR_U32(ctx, 31, 0x227268u);
    ctx->pc = 0x226650u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocMBMem_0x226650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227268u; }
    }
    if (ctx->pc != 0x227268u) { return; }
    ctx->pc = 0x227268u;
    // 0x227268: 0xdfbf0070
    ctx->pc = 0x227268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22726c: 0xdfb40060
    ctx->pc = 0x22726cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x227270: 0xdfb30050
    ctx->pc = 0x227270u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x227274: 0xdfb20040
    ctx->pc = 0x227274u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x227278: 0xdfb10030
    ctx->pc = 0x227278u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22727c: 0xdfb00020
    ctx->pc = 0x22727cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227280: 0x3e00008
    ctx->pc = 0x227280u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227284u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2271A0u: goto label_2271a0;
            case 0x227210u: goto label_227210;
            case 0x227230u: goto label_227230;
            case 0x227240u: goto label_227240;
            case 0x22724Cu: goto label_22724c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x227288u;
}
