#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: initialiseSound
// Address: 0x102348 - 0x1024c4
void initialiseSound_0x102348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x102348u;

    // 0x102348: 0x27bdff90
    ctx->pc = 0x102348u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x10234c: 0xffb50050
    ctx->pc = 0x10234cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x102350: 0xffb40040
    ctx->pc = 0x102350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x102354: 0x3c150017
    ctx->pc = 0x102354u;
    SET_GPR_U32(ctx, 21, ((uint32_t)23 << 16));
    // 0x102358: 0xffb20020
    ctx->pc = 0x102358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10235c: 0x3c140014
    ctx->pc = 0x10235cu;
    SET_GPR_U32(ctx, 20, ((uint32_t)20 << 16));
    // 0x102360: 0xffbf0060
    ctx->pc = 0x102360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x102364: 0x24120005
    ctx->pc = 0x102364u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 5));
    // 0x102368: 0xffb30030
    ctx->pc = 0x102368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10236c: 0xffb10010
    ctx->pc = 0x10236cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x102370: 0xc042cf4
    ctx->pc = 0x102370u;
    SET_GPR_U32(ctx, 31, 0x102378u);
    ctx->pc = 0x102374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x10B3D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitSound_0x10b3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102378u; }
    }
    if (ctx->pc != 0x102378u) { return; }
    ctx->pc = 0x102378u;
    // 0x102378: 0x2682e120
    ctx->pc = 0x102378u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 4294959392));
    // 0x10237c: 0x0
    ctx->pc = 0x10237cu;
    // NOP
label_102380:
    // 0x102380: 0xac400000
    ctx->pc = 0x102380u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x102384: 0x2652ffff
    ctx->pc = 0x102384u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x102388: 0xac400004
    ctx->pc = 0x102388u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x10238c: 0x24420008
    ctx->pc = 0x10238cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8));
    // 0x102390: 0x0
    ctx->pc = 0x102390u;
    // NOP
    // 0x102394: 0x641fffa
    ctx->pc = 0x102394u;
    {
        const bool branch_taken_0x102394 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x102394) {
            ctx->pc = 0x102380u;
            goto label_102380;
        }
    }
    ctx->pc = 0x10239Cu;
    // 0x10239c: 0x3c100014
    ctx->pc = 0x10239cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)20 << 16));
    // 0x1023a0: 0x3c040017
    ctx->pc = 0x1023a0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x1023a4: 0x2610e124
    ctx->pc = 0x1023a4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294959396));
    // 0x1023a8: 0x24842c68
    ctx->pc = 0x1023a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 11368));
    // 0x1023ac: 0x200282d
    ctx->pc = 0x1023acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1023b0: 0xc042986
    ctx->pc = 0x1023B0u;
    SET_GPR_U32(ctx, 31, 0x1023B8u);
    ctx->pc = 0x1023B4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 4294967292));
    ctx->pc = 0x10A618u;
    {
        const uint32_t __entryPc = ctx->pc;
        EELoadVAG_0x10a618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1023B8u; }
    }
    if (ctx->pc != 0x1023B8u) { return; }
    ctx->pc = 0x1023B8u;
    // 0x1023b8: 0x220982d
    ctx->pc = 0x1023b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1023bc: 0x3c040017
    ctx->pc = 0x1023bcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x1023c0: 0xae02fffc
    ctx->pc = 0x1023c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967292), GPR_U32(ctx, 2));
    // 0x1023c4: 0x24842c90
    ctx->pc = 0x1023c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 11408));
    // 0x1023c8: 0xc042986
    ctx->pc = 0x1023C8u;
    SET_GPR_U32(ctx, 31, 0x1023D0u);
    ctx->pc = 0x1023CCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 8));
    ctx->pc = 0x10A618u;
    {
        const uint32_t __entryPc = ctx->pc;
        EELoadVAG_0x10a618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1023D0u; }
    }
    if (ctx->pc != 0x1023D0u) { return; }
    ctx->pc = 0x1023D0u;
    // 0x1023d0: 0x902d
    ctx->pc = 0x1023d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1023d4: 0x3c040017
    ctx->pc = 0x1023d4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x1023d8: 0xae220008
    ctx->pc = 0x1023d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1023dc: 0x24842cb8
    ctx->pc = 0x1023dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 11448));
    // 0x1023e0: 0xc042986
    ctx->pc = 0x1023E0u;
    SET_GPR_U32(ctx, 31, 0x1023E8u);
    ctx->pc = 0x1023E4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 16));
    ctx->pc = 0x10A618u;
    {
        const uint32_t __entryPc = ctx->pc;
        EELoadVAG_0x10a618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1023E8u; }
    }
    if (ctx->pc != 0x1023E8u) { return; }
    ctx->pc = 0x1023E8u;
    // 0x1023e8: 0x3c040017
    ctx->pc = 0x1023e8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x1023ec: 0xae220010
    ctx->pc = 0x1023ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x1023f0: 0x24842ce0
    ctx->pc = 0x1023f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 11488));
    // 0x1023f4: 0xc042986
    ctx->pc = 0x1023F4u;
    SET_GPR_U32(ctx, 31, 0x1023FCu);
    ctx->pc = 0x1023F8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 24));
    ctx->pc = 0x10A618u;
    {
        const uint32_t __entryPc = ctx->pc;
        EELoadVAG_0x10a618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1023FCu; }
    }
    if (ctx->pc != 0x1023FCu) { return; }
    ctx->pc = 0x1023FCu;
    // 0x1023fc: 0x3c040017
    ctx->pc = 0x1023fcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x102400: 0xae220018
    ctx->pc = 0x102400u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x102404: 0x24842d00
    ctx->pc = 0x102404u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 11520));
    // 0x102408: 0xc042986
    ctx->pc = 0x102408u;
    SET_GPR_U32(ctx, 31, 0x102410u);
    ctx->pc = 0x10240Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 32));
    ctx->pc = 0x10A618u;
    {
        const uint32_t __entryPc = ctx->pc;
        EELoadVAG_0x10a618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102410u; }
    }
    if (ctx->pc != 0x102410u) { return; }
    ctx->pc = 0x102410u;
    // 0x102410: 0xae220020
    ctx->pc = 0x102410u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x102414: 0x8e660000
    ctx->pc = 0x102414u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_102418:
    // 0x102418: 0x240282d
    ctx->pc = 0x102418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10241c: 0x8e670004
    ctx->pc = 0x10241cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x102420: 0x26a42d28
    ctx->pc = 0x102420u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 11560));
    // 0x102424: 0x26520001
    ctx->pc = 0x102424u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x102428: 0xc04ace4
    ctx->pc = 0x102428u;
    SET_GPR_U32(ctx, 31, 0x102430u);
    ctx->pc = 0x10242Cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 8));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102430u; }
    }
    if (ctx->pc != 0x102430u) { return; }
    ctx->pc = 0x102430u;
    // 0x102430: 0x2a430006
    ctx->pc = 0x102430u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 18), 6));
    // 0x102434: 0x5460fff8
    ctx->pc = 0x102434u;
    {
        const bool branch_taken_0x102434 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x102434) {
            ctx->pc = 0x102438u;
            SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->pc = 0x102418u;
            goto label_102418;
        }
    }
    ctx->pc = 0x10243Cu;
    // 0x10243c: 0x2690e120
    ctx->pc = 0x10243cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 20), 4294959392));
    // 0x102440: 0x8e040018
    ctx->pc = 0x102440u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x102444: 0xc042baa
    ctx->pc = 0x102444u;
    SET_GPR_U32(ctx, 31, 0x10244Cu);
    ctx->pc = 0x102448u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->pc = 0x10AEA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetAllVoices_0x10aea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10244Cu; }
    }
    if (ctx->pc != 0x10244Cu) { return; }
    ctx->pc = 0x10244Cu;
    // 0x10244c: 0x8e84e120
    ctx->pc = 0x10244cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 20), 4294959392)));
    // 0x102450: 0x282d
    ctx->pc = 0x102450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102454: 0xc042b52
    ctx->pc = 0x102454u;
    SET_GPR_U32(ctx, 31, 0x10245Cu);
    ctx->pc = 0x102458u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x10AD48u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetVoice_0x10ad48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10245Cu; }
    }
    if (ctx->pc != 0x10245Cu) { return; }
    ctx->pc = 0x10245Cu;
    // 0x10245c: 0x8e040008
    ctx->pc = 0x10245cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x102460: 0x24050001
    ctx->pc = 0x102460u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x102464: 0xc042b52
    ctx->pc = 0x102464u;
    SET_GPR_U32(ctx, 31, 0x10246Cu);
    ctx->pc = 0x102468u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->pc = 0x10AD48u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetVoice_0x10ad48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10246Cu; }
    }
    if (ctx->pc != 0x10246Cu) { return; }
    ctx->pc = 0x10246Cu;
    // 0x10246c: 0x8e040010
    ctx->pc = 0x10246cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x102470: 0x24050002
    ctx->pc = 0x102470u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x102474: 0xc042b52
    ctx->pc = 0x102474u;
    SET_GPR_U32(ctx, 31, 0x10247Cu);
    ctx->pc = 0x102478u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->pc = 0x10AD48u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetVoice_0x10ad48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10247Cu; }
    }
    if (ctx->pc != 0x10247Cu) { return; }
    ctx->pc = 0x10247Cu;
    // 0x10247c: 0x8e040018
    ctx->pc = 0x10247cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x102480: 0x24050003
    ctx->pc = 0x102480u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x102484: 0xc042b52
    ctx->pc = 0x102484u;
    SET_GPR_U32(ctx, 31, 0x10248Cu);
    ctx->pc = 0x102488u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->pc = 0x10AD48u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetVoice_0x10ad48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10248Cu; }
    }
    if (ctx->pc != 0x10248Cu) { return; }
    ctx->pc = 0x10248Cu;
    // 0x10248c: 0x8e060024
    ctx->pc = 0x10248cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x102490: 0x24050004
    ctx->pc = 0x102490u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x102494: 0xc042b52
    ctx->pc = 0x102494u;
    SET_GPR_U32(ctx, 31, 0x10249Cu);
    ctx->pc = 0x102498u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->pc = 0x10AD48u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetVoice_0x10ad48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10249Cu; }
    }
    if (ctx->pc != 0x10249Cu) { return; }
    ctx->pc = 0x10249Cu;
    // 0x10249c: 0xdfbf0060
    ctx->pc = 0x10249cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1024a0: 0x202d
    ctx->pc = 0x1024a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1024a4: 0xdfb50050
    ctx->pc = 0x1024a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1024a8: 0xdfb40040
    ctx->pc = 0x1024a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1024ac: 0xdfb30030
    ctx->pc = 0x1024acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1024b0: 0xdfb20020
    ctx->pc = 0x1024b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1024b4: 0xdfb10010
    ctx->pc = 0x1024b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1024b8: 0xdfb00000
    ctx->pc = 0x1024b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1024bc: 0x8043948
    ctx->pc = 0x1024BCu;
    ctx->pc = 0x1024C0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
    ctx->pc = 0x10E520u;
    FlushCache_0x10e520(rdram, ctx, runtime); return;
    ctx->pc = 0x1024C4u;
}
