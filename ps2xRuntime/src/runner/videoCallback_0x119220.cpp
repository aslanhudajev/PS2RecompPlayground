#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: videoCallback
// Address: 0x119220 - 0x119340
void videoCallback_0x119220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x119220u;

    // 0x119220: 0x27bdff70
    ctx->pc = 0x119220u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x119224: 0x3c020005
    ctx->pc = 0x119224u;
    SET_GPR_U32(ctx, 2, ((uint32_t)5 << 16));
    // 0x119228: 0xffb20030
    ctx->pc = 0x119228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11922c: 0x37a70008
    ctx->pc = 0x11922cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 29), 8));
    // 0x119230: 0xffb60070
    ctx->pc = 0x119230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x119234: 0xc0902d
    ctx->pc = 0x119234u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119238: 0xffb50060
    ctx->pc = 0x119238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x11923c: 0x2421021
    ctx->pc = 0x11923cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x119240: 0xffb40050
    ctx->pc = 0x119240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x119244: 0x3c160075
    ctx->pc = 0x119244u;
    SET_GPR_U32(ctx, 22, ((uint32_t)117 << 16));
    // 0x119248: 0xffbf0080
    ctx->pc = 0x119248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x11924c: 0xa0a02d
    ctx->pc = 0x11924cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119250: 0xffb30040
    ctx->pc = 0x119250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x119254: 0x26d5e5c8
    ctx->pc = 0x119254u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 22), 4294960584));
    // 0x119258: 0xffb10020
    ctx->pc = 0x119258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11925c: 0x2a0202d
    ctx->pc = 0x11925cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119260: 0xffb00010
    ctx->pc = 0x119260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x119264: 0x3a0282d
    ctx->pc = 0x119264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119268: 0x8c500008
    ctx->pc = 0x119268u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x11926c: 0x37a60004
    ctx->pc = 0x11926cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 29), 4));
    // 0x119270: 0x8e930008
    ctx->pc = 0x119270u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x119274: 0x37a8000c
    ctx->pc = 0x119274u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 29), 12));
    // 0x119278: 0x8e91000c
    ctx->pc = 0x119278u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x11927c: 0x2508021
    ctx->pc = 0x11927cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x119280: 0x2138023
    ctx->pc = 0x119280u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x119284: 0x230102b
    ctx->pc = 0x119284u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x119288: 0x222800b
    ctx->pc = 0x119288u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 17));
    // 0x11928c: 0xc046836
    ctx->pc = 0x11928Cu;
    SET_GPR_U32(ctx, 31, 0x119294u);
    ctx->pc = 0x119290u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->pc = 0x11A0D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        videoDecBeginPut_0x11a0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119294u; }
    }
    if (ctx->pc != 0x119294u) { return; }
    ctx->pc = 0x119294u;
    // 0x119294: 0x8fa40000
    ctx->pc = 0x119294u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119298: 0x3c020fff
    ctx->pc = 0x119298u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
    // 0x11929c: 0x8fa60008
    ctx->pc = 0x11929cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1192a0: 0x3442ffff
    ctx->pc = 0x1192a0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x1192a4: 0x3c032000
    ctx->pc = 0x1192a4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)8192 << 16));
    // 0x1192a8: 0x822024
    ctx->pc = 0x1192a8u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1192ac: 0xc23024
    ctx->pc = 0x1192acu;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1192b0: 0x8fa50004
    ctx->pc = 0x1192b0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1192b4: 0x8fa7000c
    ctx->pc = 0x1192b4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1192b8: 0x200482d
    ctx->pc = 0x1192b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1192bc: 0xc33025
    ctx->pc = 0x1192bcu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1192c0: 0x832025
    ctx->pc = 0x1192c0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1192c4: 0x260402d
    ctx->pc = 0x1192c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1192c8: 0x240502d
    ctx->pc = 0x1192c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1192cc: 0xc046506
    ctx->pc = 0x1192CCu;
    SET_GPR_U32(ctx, 31, 0x1192D4u);
    ctx->pc = 0x1192D0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x119418u;
    {
        const uint32_t __entryPc = ctx->pc;
        copy2area_0x119418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1192D4u; }
    }
    if (ctx->pc != 0x1192D4u) { return; }
    ctx->pc = 0x1192D4u;
    // 0x1192d4: 0x40802d
    ctx->pc = 0x1192d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1192d8: 0x1a00000b
    ctx->pc = 0x1192D8u;
    {
        const bool branch_taken_0x1192d8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1192DCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1192d8) {
            ctx->pc = 0x119308u;
            goto label_119308;
        }
    }
    ctx->pc = 0x1192E0u;
    // 0x1192e0: 0xde860018
    ctx->pc = 0x1192e0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1192e4: 0xde850010
    ctx->pc = 0x1192e4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1192e8: 0x200402d
    ctx->pc = 0x1192e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1192ec: 0xc046856
    ctx->pc = 0x1192ECu;
    SET_GPR_U32(ctx, 31, 0x1192F4u);
    ctx->pc = 0x1192F0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x11A158u;
    {
        const uint32_t __entryPc = ctx->pc;
        videoDecPutTs_0x11a158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1192F4u; }
    }
    if (ctx->pc != 0x1192F4u) { return; }
    ctx->pc = 0x1192F4u;
    // 0x1192f4: 0x54400005
    ctx->pc = 0x1192F4u;
    {
        const bool branch_taken_0x1192f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1192f4) {
            ctx->pc = 0x1192F8u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 22), 4294960584));
            ctx->pc = 0x11930Cu;
            goto label_11930c;
        }
    }
    ctx->pc = 0x1192FCu;
    // 0x1192fc: 0x3c040017
    ctx->pc = 0x1192fcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x119300: 0xc04647a
    ctx->pc = 0x119300u;
    SET_GPR_U32(ctx, 31, 0x119308u);
    ctx->pc = 0x119304u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 17496));
    ctx->pc = 0x1191E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ErrMessage_0x1191e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119308u; }
    }
    if (ctx->pc != 0x119308u) { return; }
    ctx->pc = 0x119308u;
label_119308:
    // 0x119308: 0x26c4e5c8
    ctx->pc = 0x119308u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 22), 4294960584));
label_11930c:
    // 0x11930c: 0xc046838
    ctx->pc = 0x11930Cu;
    SET_GPR_U32(ctx, 31, 0x119314u);
    ctx->pc = 0x119310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11A0E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        videoDecEndPut_0x11a0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119314u; }
    }
    if (ctx->pc != 0x119314u) { return; }
    ctx->pc = 0x119314u;
    // 0x119314: 0x10102a
    ctx->pc = 0x119314u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 16)));
    // 0x119318: 0xdfbf0080
    ctx->pc = 0x119318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11931c: 0xdfb60070
    ctx->pc = 0x11931cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x119320: 0xdfb50060
    ctx->pc = 0x119320u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x119324: 0xdfb40050
    ctx->pc = 0x119324u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x119328: 0xdfb30040
    ctx->pc = 0x119328u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11932c: 0xdfb20030
    ctx->pc = 0x11932cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x119330: 0xdfb10020
    ctx->pc = 0x119330u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119334: 0xdfb00010
    ctx->pc = 0x119334u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119338: 0x3e00008
    ctx->pc = 0x119338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11933Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x119308u: goto label_119308;
            case 0x11930Cu: goto label_11930c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x119340u;
}
