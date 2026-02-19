#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioFindSound
// Address: 0x220420 - 0x220580
void AudioFindSound_0x220420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x220420u;

    // 0x220420: 0x27bdff50
    ctx->pc = 0x220420u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x220424: 0xffbf00a0
    ctx->pc = 0x220424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x220428: 0xffbe0090
    ctx->pc = 0x220428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x22042c: 0xffb70080
    ctx->pc = 0x22042cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x220430: 0xffb60070
    ctx->pc = 0x220430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x220434: 0xffb50060
    ctx->pc = 0x220434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x220438: 0xffb40050
    ctx->pc = 0x220438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x22043c: 0xffb30040
    ctx->pc = 0x22043cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x220440: 0xffb20030
    ctx->pc = 0x220440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x220444: 0xffb10020
    ctx->pc = 0x220444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x220448: 0xffb00010
    ctx->pc = 0x220448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x22044c: 0x80b82d
    ctx->pc = 0x22044cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220450: 0xafa60000
    ctx->pc = 0x220450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x220454: 0x82e20000
    ctx->pc = 0x220454u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x220458: 0x14400005
    ctx->pc = 0x220458u;
    {
        const bool branch_taken_0x220458 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22045Cu;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x220458) {
            ctx->pc = 0x220470u;
            goto label_220470;
        }
    }
    ctx->pc = 0x220460u;
    // 0x220460: 0x1000003b
    ctx->pc = 0x220460u;
    {
        const bool branch_taken_0x220460 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x220464u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x220460) {
            ctx->pc = 0x220550u;
            goto label_220550;
        }
    }
    ctx->pc = 0x220468u;
label_220468:
    // 0x220468: 0x10000039
    ctx->pc = 0x220468u;
    {
        const bool branch_taken_0x220468 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22046Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
        if (branch_taken_0x220468) {
            ctx->pc = 0x220550u;
            goto label_220550;
        }
    }
    ctx->pc = 0x220470u;
label_220470:
    // 0x220470: 0x2403000f
    ctx->pc = 0x220470u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 15));
    // 0x220474: 0x14102a
    ctx->pc = 0x220474u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 20)));
    // 0x220478: 0x62a00a
    ctx->pc = 0x220478u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 20, GPR_U32(ctx, 3));
    // 0x22047c: 0x3c020032
    ctx->pc = 0x22047cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x220480: 0x40182d
    ctx->pc = 0x220480u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220484: 0x8c42fd6c
    ctx->pc = 0x220484u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966636)));
    // 0x220488: 0x8c420004
    ctx->pc = 0x220488u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22048c: 0x18400024
    ctx->pc = 0x22048Cu;
    {
        const bool branch_taken_0x22048c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x220490u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x22048c) {
            ctx->pc = 0x220520u;
            goto label_220520;
        }
    }
    ctx->pc = 0x220494u;
    // 0x220494: 0x241e002c
    ctx->pc = 0x220494u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 44));
    // 0x220498: 0x8c62fd6c
    ctx->pc = 0x220498u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294966636)));
    // 0x22049c: 0x0
    ctx->pc = 0x22049cu;
    // NOP
label_2204a0:
    // 0x2204a0: 0x27e1818
    ctx->pc = 0x2204a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2204a4: 0x8c420010
    ctx->pc = 0x2204a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2204a8: 0x629021
    ctx->pc = 0x2204a8u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2204ac: 0x86420024
    ctx->pc = 0x2204acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x2204b0: 0x18400014
    ctx->pc = 0x2204B0u;
    {
        const bool branch_taken_0x2204b0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2204B4u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2204b0) {
            ctx->pc = 0x220504u;
            goto label_220504;
        }
    }
    ctx->pc = 0x2204B8u;
    // 0x2204b8: 0x3c160032
    ctx->pc = 0x2204b8u;
    SET_GPR_U32(ctx, 22, ((uint32_t)50 << 16));
    // 0x2204bc: 0x2415001c
    ctx->pc = 0x2204bcu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 28));
    // 0x2204c0: 0x8ec3fd6c
    ctx->pc = 0x2204c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 4294966636)));
    // 0x2204c4: 0x0
    ctx->pc = 0x2204c4u;
    // NOP
label_2204c8:
    // 0x2204c8: 0x86420026
    ctx->pc = 0x2204c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 38)));
    // 0x2204cc: 0x511021
    ctx->pc = 0x2204ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2204d0: 0x551018
    ctx->pc = 0x2204d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2204d4: 0x8c630014
    ctx->pc = 0x2204d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2204d8: 0x438021
    ctx->pc = 0x2204d8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2204dc: 0x200202d
    ctx->pc = 0x2204dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2204e0: 0x2e0282d
    ctx->pc = 0x2204e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2204e4: 0xc0bf3c0
    ctx->pc = 0x2204E4u;
    SET_GPR_U32(ctx, 31, 0x2204ECu);
    ctx->pc = 0x2204E8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FCF00u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x2fcf00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2204ECu; }
    }
    if (ctx->pc != 0x2204ECu) { return; }
    ctx->pc = 0x2204ECu;
    // 0x2204ec: 0x1040ffde
    ctx->pc = 0x2204ECu;
    {
        const bool branch_taken_0x2204ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2204F0u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x2204ec) {
            ctx->pc = 0x220468u;
            goto label_220468;
        }
    }
    ctx->pc = 0x2204F4u;
    // 0x2204f4: 0x86420024
    ctx->pc = 0x2204f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x2204f8: 0x222102a
    ctx->pc = 0x2204f8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x2204fc: 0x1440fff2
    ctx->pc = 0x2204FCu;
    {
        const bool branch_taken_0x2204fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x220500u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 4294966636)));
        if (branch_taken_0x2204fc) {
            ctx->pc = 0x2204C8u;
            goto label_2204c8;
        }
    }
    ctx->pc = 0x220504u;
label_220504:
    // 0x220504: 0x26730001
    ctx->pc = 0x220504u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x220508: 0x3c030032
    ctx->pc = 0x220508u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x22050c: 0x8c62fd6c
    ctx->pc = 0x22050cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294966636)));
    // 0x220510: 0x8c420004
    ctx->pc = 0x220510u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x220514: 0x262102a
    ctx->pc = 0x220514u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 2)));
    // 0x220518: 0x1440ffe1
    ctx->pc = 0x220518u;
    {
        const bool branch_taken_0x220518 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22051Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294966636)));
        if (branch_taken_0x220518) {
            ctx->pc = 0x2204A0u;
            goto label_2204a0;
        }
    }
    ctx->pc = 0x220520u;
label_220520:
    // 0x220520: 0x8fa20000
    ctx->pc = 0x220520u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220524: 0x10400009
    ctx->pc = 0x220524u;
    {
        const bool branch_taken_0x220524 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x220528u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x220524) {
            ctx->pc = 0x22054Cu;
            goto label_22054c;
        }
    }
    ctx->pc = 0x22052Cu;
    // 0x22052c: 0xdc420e28
    ctx->pc = 0x22052cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x220530: 0x30420010
    ctx->pc = 0x220530u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x220534: 0x14400006
    ctx->pc = 0x220534u;
    {
        const bool branch_taken_0x220534 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x220538u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x220534) {
            ctx->pc = 0x220550u;
            goto label_220550;
        }
    }
    ctx->pc = 0x22053Cu;
    // 0x22053c: 0x3c04003a
    ctx->pc = 0x22053cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x220540: 0x248465b8
    ctx->pc = 0x220540u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 26040));
    // 0x220544: 0xc0b492e
    ctx->pc = 0x220544u;
    SET_GPR_U32(ctx, 31, 0x22054Cu);
    ctx->pc = 0x220548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22054Cu; }
    }
    if (ctx->pc != 0x22054Cu) { return; }
    ctx->pc = 0x22054Cu;
label_22054c:
    // 0x22054c: 0x2402ffff
    ctx->pc = 0x22054cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_220550:
    // 0x220550: 0xdfbf00a0
    ctx->pc = 0x220550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x220554: 0xdfbe0090
    ctx->pc = 0x220554u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x220558: 0xdfb70080
    ctx->pc = 0x220558u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22055c: 0xdfb60070
    ctx->pc = 0x22055cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x220560: 0xdfb50060
    ctx->pc = 0x220560u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x220564: 0xdfb40050
    ctx->pc = 0x220564u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x220568: 0xdfb30040
    ctx->pc = 0x220568u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22056c: 0xdfb20030
    ctx->pc = 0x22056cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x220570: 0xdfb10020
    ctx->pc = 0x220570u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x220574: 0xdfb00010
    ctx->pc = 0x220574u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220578: 0x3e00008
    ctx->pc = 0x220578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22057Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x220468u: goto label_220468;
            case 0x220470u: goto label_220470;
            case 0x2204A0u: goto label_2204a0;
            case 0x2204C8u: goto label_2204c8;
            case 0x220504u: goto label_220504;
            case 0x220520u: goto label_220520;
            case 0x22054Cu: goto label_22054c;
            case 0x220550u: goto label_220550;
            default: break;
        }
        return;
    }
    ctx->pc = 0x220580u;
}
