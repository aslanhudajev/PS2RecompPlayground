#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SafeRockSetup
// Address: 0x253368 - 0x253470
void SafeRockSetup_0x253368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x253368u;

    // 0x253368: 0x27bdff60
    ctx->pc = 0x253368u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x25336c: 0xffbf0090
    ctx->pc = 0x25336cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x253370: 0xffbe0080
    ctx->pc = 0x253370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x253374: 0xffb70070
    ctx->pc = 0x253374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x253378: 0xffb60060
    ctx->pc = 0x253378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x25337c: 0xffb50050
    ctx->pc = 0x25337cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x253380: 0xffb40040
    ctx->pc = 0x253380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x253384: 0xffb30030
    ctx->pc = 0x253384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x253388: 0xffb20020
    ctx->pc = 0x253388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25338c: 0xffb10010
    ctx->pc = 0x25338cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x253390: 0xffb00000
    ctx->pc = 0x253390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x253394: 0x80a82d
    ctx->pc = 0x253394u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253398: 0xa0a02d
    ctx->pc = 0x253398u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25339c: 0xc0982d
    ctx->pc = 0x25339cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2533a0: 0x902d
    ctx->pc = 0x2533a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2533a4: 0x3c020034
    ctx->pc = 0x2533a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2533a8: 0x8c42cd98
    ctx->pc = 0x2533a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954392)));
    // 0x2533ac: 0x18400023
    ctx->pc = 0x2533ACu;
    {
        const bool branch_taken_0x2533ac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2533B0u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2533ac) {
            ctx->pc = 0x25343Cu;
            goto label_25343c;
        }
    }
    ctx->pc = 0x2533B4u;
    // 0x2533b4: 0x241e0029
    ctx->pc = 0x2533b4u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 41));
    // 0x2533b8: 0x2417ffff
    ctx->pc = 0x2533b8u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2533bc: 0x3c160034
    ctx->pc = 0x2533bcu;
    SET_GPR_U32(ctx, 22, ((uint32_t)52 << 16));
    // 0x2533c0: 0x24020110
    ctx->pc = 0x2533c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 272));
    // 0x2533c4: 0x0
    ctx->pc = 0x2533c4u;
    // NOP
label_2533c8:
    // 0x2533c8: 0x2421818
    ctx->pc = 0x2533c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2533cc: 0x3c040034
    ctx->pc = 0x2533ccu;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x2533d0: 0x8c82cd94
    ctx->pc = 0x2533d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294954388)));
    // 0x2533d4: 0x628021
    ctx->pc = 0x2533d4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2533d8: 0x8e020000
    ctx->pc = 0x2533d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2533dc: 0x8c420000
    ctx->pc = 0x2533dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2533e0: 0x2403000a
    ctx->pc = 0x2533e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x2533e4: 0x54430011
    ctx->pc = 0x2533E4u;
    {
        const bool branch_taken_0x2533e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x2533e4) {
            ctx->pc = 0x2533E8u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x25342Cu;
            goto label_25342c;
        }
    }
    ctx->pc = 0x2533ECu;
    // 0x2533ec: 0x860200f0
    ctx->pc = 0x2533ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x2533f0: 0x545e000e
    ctx->pc = 0x2533F0u;
    {
        const bool branch_taken_0x2533f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 30));
        if (branch_taken_0x2533f0) {
            ctx->pc = 0x2533F4u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x25342Cu;
            goto label_25342c;
        }
    }
    ctx->pc = 0x2533F8u;
    // 0x2533f8: 0x111080
    ctx->pc = 0x2533f8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
    // 0x2533fc: 0x551021
    ctx->pc = 0x2533fcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x253400: 0x12600006
    ctx->pc = 0x253400u;
    {
        const bool branch_taken_0x253400 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x253404u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
        if (branch_taken_0x253400) {
            ctx->pc = 0x25341Cu;
            goto label_25341c;
        }
    }
    ctx->pc = 0x253408u;
    // 0x253408: 0x8e040070
    ctx->pc = 0x253408u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x25340c: 0x24050001
    ctx->pc = 0x25340cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x253410: 0xc0b41b8
    ctx->pc = 0x253410u;
    SET_GPR_U32(ctx, 31, 0x253418u);
    ctx->pc = 0x253414u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253418u; }
    }
    if (ctx->pc != 0x253418u) { return; }
    ctx->pc = 0x253418u;
    // 0x253418: 0xa61700f2
    ctx->pc = 0x253418u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 242), (uint16_t)GPR_U32(ctx, 23));
label_25341c:
    // 0x25341c: 0x26310001
    ctx->pc = 0x25341cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x253420: 0x234102a
    ctx->pc = 0x253420u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 20)));
    // 0x253424: 0x10400005
    ctx->pc = 0x253424u;
    {
        const bool branch_taken_0x253424 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x253428u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x253424) {
            ctx->pc = 0x25343Cu;
            goto label_25343c;
        }
    }
    ctx->pc = 0x25342Cu;
label_25342c:
    // 0x25342c: 0x8ec2cd98
    ctx->pc = 0x25342cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 4294954392)));
    // 0x253430: 0x242102a
    ctx->pc = 0x253430u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
    // 0x253434: 0x1440ffe4
    ctx->pc = 0x253434u;
    {
        const bool branch_taken_0x253434 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x253438u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 272));
        if (branch_taken_0x253434) {
            ctx->pc = 0x2533C8u;
            goto label_2533c8;
        }
    }
    ctx->pc = 0x25343Cu;
label_25343c:
    // 0x25343c: 0x220102d
    ctx->pc = 0x25343cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253440: 0xdfbf0090
    ctx->pc = 0x253440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x253444: 0xdfbe0080
    ctx->pc = 0x253444u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x253448: 0xdfb70070
    ctx->pc = 0x253448u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25344c: 0xdfb60060
    ctx->pc = 0x25344cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x253450: 0xdfb50050
    ctx->pc = 0x253450u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x253454: 0xdfb40040
    ctx->pc = 0x253454u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x253458: 0xdfb30030
    ctx->pc = 0x253458u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25345c: 0xdfb20020
    ctx->pc = 0x25345cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x253460: 0xdfb10010
    ctx->pc = 0x253460u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253464: 0xdfb00000
    ctx->pc = 0x253464u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253468: 0x3e00008
    ctx->pc = 0x253468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25346Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2533C8u: goto label_2533c8;
            case 0x25341Cu: goto label_25341c;
            case 0x25342Cu: goto label_25342c;
            case 0x25343Cu: goto label_25343c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x253470u;
}
