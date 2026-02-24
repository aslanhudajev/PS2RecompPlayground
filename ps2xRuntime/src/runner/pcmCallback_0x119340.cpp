#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pcmCallback
// Address: 0x119340 - 0x119414
void pcmCallback_0x119340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x119340u;

    // 0x119340: 0x27bdff90
    ctx->pc = 0x119340u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x119344: 0x3c020005
    ctx->pc = 0x119344u;
    SET_GPR_S32(ctx, 2, ((uint32_t)5 << 16));
    // 0x119348: 0xffb30040
    ctx->pc = 0x119348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x11934c: 0x37a70008
    ctx->pc = 0x11934cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)8);
    // 0x119350: 0xffb40050
    ctx->pc = 0x119350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x119354: 0xc0982d
    ctx->pc = 0x119354u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119358: 0xffb00010
    ctx->pc = 0x119358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11935c: 0x2621021
    ctx->pc = 0x11935cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x119360: 0xffbf0060
    ctx->pc = 0x119360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x119364: 0x3c140075
    ctx->pc = 0x119364u;
    SET_GPR_S32(ctx, 20, ((uint32_t)117 << 16));
    // 0x119368: 0xffb20030
    ctx->pc = 0x119368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11936c: 0x2694e568
    ctx->pc = 0x11936cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4294960488));
    // 0x119370: 0xffb10020
    ctx->pc = 0x119370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x119374: 0x280202d
    ctx->pc = 0x119374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119378: 0x8cb1000c
    ctx->pc = 0x119378u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x11937c: 0x37a60004
    ctx->pc = 0x11937cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)4);
    // 0x119380: 0x8c430008
    ctx->pc = 0x119380u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x119384: 0x37a8000c
    ctx->pc = 0x119384u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 29) | (uint64_t)12);
    // 0x119388: 0x8cb20008
    ctx->pc = 0x119388u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x11938c: 0x2631fffc
    ctx->pc = 0x11938cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x119390: 0x2638021
    ctx->pc = 0x119390u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x119394: 0x3a0282d
    ctx->pc = 0x119394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119398: 0x26520004
    ctx->pc = 0x119398u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
    // 0x11939c: 0x250102b
    ctx->pc = 0x11939cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1193a0: 0x2431823
    ctx->pc = 0x1193a0u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1193a4: 0x62900a
    ctx->pc = 0x1193a4u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 3));
    // 0x1193a8: 0x2128023
    ctx->pc = 0x1193a8u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1193ac: 0x230102a
    ctx->pc = 0x1193acu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 16)));
    // 0x1193b0: 0x222800b
    ctx->pc = 0x1193b0u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 17));
    // 0x1193b4: 0xc04663c
    ctx->pc = 0x1193B4u;
    SET_GPR_U32(ctx, 31, 0x1193BCu);
    ctx->pc = 0x1193B8u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->pc = 0x1198F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        audioDecBeginPut_0x1198f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1193BCu; }
    }
    if (ctx->pc != 0x1193BCu) { return; }
    ctx->pc = 0x1193BCu;
    // 0x1193bc: 0x8fa50004
    ctx->pc = 0x1193bcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1193c0: 0x200482d
    ctx->pc = 0x1193c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1193c4: 0x8fa60008
    ctx->pc = 0x1193c4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1193c8: 0x260502d
    ctx->pc = 0x1193c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1193cc: 0x8fa7000c
    ctx->pc = 0x1193ccu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1193d0: 0x220582d
    ctx->pc = 0x1193d0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1193d4: 0x8fa40000
    ctx->pc = 0x1193d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1193d8: 0xc046506
    ctx->pc = 0x1193D8u;
    SET_GPR_U32(ctx, 31, 0x1193E0u);
    ctx->pc = 0x1193DCu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x119418u;
    {
        const uint32_t __entryPc = ctx->pc;
        copy2area_0x119418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1193E0u; }
    }
    if (ctx->pc != 0x1193E0u) { return; }
    ctx->pc = 0x1193E0u;
    // 0x1193e0: 0x40802d
    ctx->pc = 0x1193e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1193e4: 0x280202d
    ctx->pc = 0x1193e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1193e8: 0xc046664
    ctx->pc = 0x1193E8u;
    SET_GPR_U32(ctx, 31, 0x1193F0u);
    ctx->pc = 0x1193ECu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x119990u;
    {
        const uint32_t __entryPc = ctx->pc;
        audioDecEndPut_0x119990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1193F0u; }
    }
    if (ctx->pc != 0x1193F0u) { return; }
    ctx->pc = 0x1193F0u;
    // 0x1193f0: 0x10102a
    ctx->pc = 0x1193f0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 16)));
    // 0x1193f4: 0xdfbf0060
    ctx->pc = 0x1193f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1193f8: 0xdfb40050
    ctx->pc = 0x1193f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1193fc: 0xdfb30040
    ctx->pc = 0x1193fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x119400: 0xdfb20030
    ctx->pc = 0x119400u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x119404: 0xdfb10020
    ctx->pc = 0x119404u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119408: 0xdfb00010
    ctx->pc = 0x119408u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11940c: 0x3e00008
    ctx->pc = 0x11940Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119410u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x119414u;
}
