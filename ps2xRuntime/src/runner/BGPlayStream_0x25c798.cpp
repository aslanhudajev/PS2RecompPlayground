#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: BGPlayStream
// Address: 0x25c798 - 0x25caf0
void BGPlayStream_0x25c798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25c798u;

    // 0x25c798: 0x27bdffa0
    ctx->pc = 0x25c798u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x25c79c: 0xffbf0050
    ctx->pc = 0x25c79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x25c7a0: 0xffb30040
    ctx->pc = 0x25c7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x25c7a4: 0xffb20030
    ctx->pc = 0x25c7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x25c7a8: 0xffb10020
    ctx->pc = 0x25c7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x25c7ac: 0xffb00010
    ctx->pc = 0x25c7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x25c7b0: 0x902d
    ctx->pc = 0x25c7b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c7b4: 0xc089082
    ctx->pc = 0x25C7B4u;
    SET_GPR_U32(ctx, 31, 0x25C7BCu);
    ctx->pc = 0x25C7B8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x224208u;
    {
        const uint32_t __entryPc = ctx->pc;
        stream_playing_0x224208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C7BCu; }
    }
    if (ctx->pc != 0x25C7BCu) { return; }
    ctx->pc = 0x25C7BCu;
    // 0x25c7bc: 0x1040001a
    ctx->pc = 0x25C7BCu;
    {
        const bool branch_taken_0x25c7bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25C7C0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x25c7bc) {
            ctx->pc = 0x25C828u;
            goto label_25c828;
        }
    }
    ctx->pc = 0x25C7C4u;
    // 0x25c7c4: 0x3c030034
    ctx->pc = 0x25c7c4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x25c7c8: 0x8c44d320
    ctx->pc = 0x25c7c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294955808)));
    // 0x25c7cc: 0x8c62d348
    ctx->pc = 0x25c7ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294955848)));
    // 0x25c7d0: 0x108200c0
    ctx->pc = 0x25C7D0u;
    {
        const bool branch_taken_0x25c7d0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x25C7D4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x25c7d0) {
            ctx->pc = 0x25CAD4u;
            goto label_25cad4;
        }
    }
    ctx->pc = 0x25C7D8u;
    // 0x25c7d8: 0x8c42d324
    ctx->pc = 0x25c7d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955812)));
    // 0x25c7dc: 0x184000bd
    ctx->pc = 0x25C7DCu;
    {
        const bool branch_taken_0x25c7dc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x25C7E0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
        if (branch_taken_0x25c7dc) {
            ctx->pc = 0x25CAD4u;
            goto label_25cad4;
        }
    }
    ctx->pc = 0x25C7E4u;
    // 0x25c7e4: 0x10400005
    ctx->pc = 0x25C7E4u;
    {
        const bool branch_taken_0x25c7e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25C7E8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x25c7e4) {
            ctx->pc = 0x25C7FCu;
            goto label_25c7fc;
        }
    }
    ctx->pc = 0x25C7ECu;
    // 0x25c7ec: 0x8c42d34c
    ctx->pc = 0x25c7ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955852)));
    // 0x25c7f0: 0x28420004
    ctx->pc = 0x25c7f0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4));
    // 0x25c7f4: 0x104000b8
    ctx->pc = 0x25C7F4u;
    {
        const bool branch_taken_0x25c7f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25C7F8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x25c7f4) {
            ctx->pc = 0x25CAD8u;
            goto label_25cad8;
        }
    }
    ctx->pc = 0x25C7FCu;
label_25c7fc:
    // 0x25c7fc: 0x3c020034
    ctx->pc = 0x25c7fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25c800: 0x8c42e7c8
    ctx->pc = 0x25c800u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x25c804: 0x8c420064
    ctx->pc = 0x25c804u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x25c808: 0x84420028
    ctx->pc = 0x25c808u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x25c80c: 0x28420002
    ctx->pc = 0x25c80cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x25c810: 0x10400005
    ctx->pc = 0x25C810u;
    {
        const bool branch_taken_0x25c810 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25C814u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x25c810) {
            ctx->pc = 0x25C828u;
            goto label_25c828;
        }
    }
    ctx->pc = 0x25C818u;
    // 0x25c818: 0xac40d320
    ctx->pc = 0x25c818u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955808), GPR_U32(ctx, 0));
    // 0x25c81c: 0x3c020034
    ctx->pc = 0x25c81cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25c820: 0x100000ac
    ctx->pc = 0x25C820u;
    {
        const bool branch_taken_0x25c820 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25C824u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294955812), GPR_U32(ctx, 0));
        if (branch_taken_0x25c820) {
            ctx->pc = 0x25CAD4u;
            goto label_25cad4;
        }
    }
    ctx->pc = 0x25C828u;
label_25c828:
    // 0x25c828: 0x3c020034
    ctx->pc = 0x25c828u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25c82c: 0x8c42e7c8
    ctx->pc = 0x25c82cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x25c830: 0x8c430064
    ctx->pc = 0x25c830u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x25c834: 0x106000a7
    ctx->pc = 0x25C834u;
    {
        const bool branch_taken_0x25c834 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x25C838u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x25c834) {
            ctx->pc = 0x25CAD4u;
            goto label_25cad4;
        }
    }
    ctx->pc = 0x25C83Cu;
    // 0x25c83c: 0x8c42fe2c
    ctx->pc = 0x25c83cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966828)));
    // 0x25c840: 0x144000a5
    ctx->pc = 0x25C840u;
    {
        const bool branch_taken_0x25c840 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25C844u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x25c840) {
            ctx->pc = 0x25CAD8u;
            goto label_25cad8;
        }
    }
    ctx->pc = 0x25C848u;
    // 0x25c848: 0x3c020034
    ctx->pc = 0x25c848u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25c84c: 0x8c45d320
    ctx->pc = 0x25c84cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294955808)));
    // 0x25c850: 0x2402ffff
    ctx->pc = 0x25c850u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25c854: 0x45102a
    ctx->pc = 0x25c854u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 5)));
    // 0x25c858: 0x2280a
    ctx->pc = 0x25c858u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 0));
    // 0x25c85c: 0x84630028
    ctx->pc = 0x25c85cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x25c860: 0xa3102a
    ctx->pc = 0x25c860u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 3)));
    // 0x25c864: 0x50400001
    ctx->pc = 0x25C864u;
    {
        const bool branch_taken_0x25c864 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x25c864) {
            ctx->pc = 0x25C868u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 4294967295));
            ctx->pc = 0x25C86Cu;
            goto label_25c86c;
        }
    }
    ctx->pc = 0x25C86Cu;
label_25c86c:
    // 0x25c86c: 0x3c020034
    ctx->pc = 0x25c86cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25c870: 0x8c42d348
    ctx->pc = 0x25c870u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955848)));
    // 0x25c874: 0x10a20003
    ctx->pc = 0x25C874u;
    {
        const bool branch_taken_0x25c874 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x25C878u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x25c874) {
            ctx->pc = 0x25C884u;
            goto label_25c884;
        }
    }
    ctx->pc = 0x25C87Cu;
    // 0x25c87c: 0x10000006
    ctx->pc = 0x25C87Cu;
    {
        const bool branch_taken_0x25c87c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25C880u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294966684), GPR_U32(ctx, 0));
        if (branch_taken_0x25c87c) {
            ctx->pc = 0x25C898u;
            goto label_25c898;
        }
    }
    ctx->pc = 0x25C884u;
label_25c884:
    // 0x25c884: 0x3c030032
    ctx->pc = 0x25c884u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x25c888: 0x8c44fd9c
    ctx->pc = 0x25c888u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294966684)));
    // 0x25c88c: 0x8c62fd98
    ctx->pc = 0x25c88cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294966680)));
    // 0x25c890: 0x10820004
    ctx->pc = 0x25C890u;
    {
        const bool branch_taken_0x25c890 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x25C894u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x25c890) {
            ctx->pc = 0x25C8A4u;
            goto label_25c8a4;
        }
    }
    ctx->pc = 0x25C898u;
label_25c898:
    // 0x25c898: 0x3c020032
    ctx->pc = 0x25c898u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x25c89c: 0x10000004
    ctx->pc = 0x25C89Cu;
    {
        const bool branch_taken_0x25c89c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25C8A0u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294966688), GPR_U32(ctx, 0));
        if (branch_taken_0x25c89c) {
            ctx->pc = 0x25C8B0u;
            goto label_25c8b0;
        }
    }
    ctx->pc = 0x25C8A4u;
label_25c8a4:
    // 0x25c8a4: 0x8c62fda0
    ctx->pc = 0x25c8a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294966688)));
    // 0x25c8a8: 0x24420001
    ctx->pc = 0x25c8a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x25c8ac: 0xac62fda0
    ctx->pc = 0x25c8acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966688), GPR_U32(ctx, 2));
label_25c8b0:
    // 0x25c8b0: 0x3c020034
    ctx->pc = 0x25c8b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25c8b4: 0xac45d348
    ctx->pc = 0x25c8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955848), GPR_U32(ctx, 5));
    // 0x25c8b8: 0x3c030032
    ctx->pc = 0x25c8b8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x25c8bc: 0x3c020032
    ctx->pc = 0x25c8bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x25c8c0: 0x8c42fd9c
    ctx->pc = 0x25c8c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966684)));
    // 0x25c8c4: 0xac62fd98
    ctx->pc = 0x25c8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966680), GPR_U32(ctx, 2));
    // 0x25c8c8: 0x3c020034
    ctx->pc = 0x25c8c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25c8cc: 0x8c42e7c8
    ctx->pc = 0x25c8ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x25c8d0: 0x8c460064
    ctx->pc = 0x25c8d0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x25c8d4: 0x84c30028
    ctx->pc = 0x25c8d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x25c8d8: 0x24020001
    ctx->pc = 0x25c8d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x25c8dc: 0x14620008
    ctx->pc = 0x25C8DCu;
    {
        const bool branch_taken_0x25c8dc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x25C8E0u;
        SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 42)));
        if (branch_taken_0x25c8dc) {
            ctx->pc = 0x25C900u;
            goto label_25c900;
        }
    }
    ctx->pc = 0x25C8E4u;
    // 0x25c8e4: 0x3a0202d
    ctx->pc = 0x25c8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c8e8: 0x3c05003b
    ctx->pc = 0x25c8e8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x25c8ec: 0x24a591c8
    ctx->pc = 0x25c8ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294939080));
    // 0x25c8f0: 0xc0b6252
    ctx->pc = 0x25C8F0u;
    SET_GPR_U32(ctx, 31, 0x25C8F8u);
    ctx->pc = 0x25C8F4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 24));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C8F8u; }
    }
    if (ctx->pc != 0x25C8F8u) { return; }
    ctx->pc = 0x25C8F8u;
    // 0x25c8f8: 0x10000010
    ctx->pc = 0x25C8F8u;
    {
        const bool branch_taken_0x25c8f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25C8FCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x25c8f8) {
            ctx->pc = 0x25C93Cu;
            goto label_25c93c;
        }
    }
    ctx->pc = 0x25C900u;
label_25c900:
    // 0x25c900: 0x3c020034
    ctx->pc = 0x25c900u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25c904: 0x8c42e7c8
    ctx->pc = 0x25c904u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x25c908: 0x8c460064
    ctx->pc = 0x25c908u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x25c90c: 0x3c020034
    ctx->pc = 0x25c90cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25c910: 0x2442d388
    ctx->pc = 0x25c910u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294955912));
    // 0x25c914: 0x3c030034
    ctx->pc = 0x25c914u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x25c918: 0x8c63d348
    ctx->pc = 0x25c918u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294955848)));
    // 0x25c91c: 0x621821
    ctx->pc = 0x25c91cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25c920: 0x3a0202d
    ctx->pc = 0x25c920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c924: 0x3c05003b
    ctx->pc = 0x25c924u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x25c928: 0x24a591d0
    ctx->pc = 0x25c928u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294939088));
    // 0x25c92c: 0x24c60018
    ctx->pc = 0x25c92cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 24));
    // 0x25c930: 0xc0b6252
    ctx->pc = 0x25C930u;
    SET_GPR_U32(ctx, 31, 0x25C938u);
    ctx->pc = 0x25C934u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C938u; }
    }
    if (ctx->pc != 0x25C938u) { return; }
    ctx->pc = 0x25C938u;
    // 0x25c938: 0x3c020034
    ctx->pc = 0x25c938u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_25c93c:
    // 0x25c93c: 0x8c42e7c8
    ctx->pc = 0x25c93cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x25c940: 0x8c430064
    ctx->pc = 0x25c940u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x25c944: 0x3c020034
    ctx->pc = 0x25c944u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25c948: 0x8c42d348
    ctx->pc = 0x25c948u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955848)));
    // 0x25c94c: 0x21040
    ctx->pc = 0x25c94cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x25c950: 0x621821
    ctx->pc = 0x25c950u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25c954: 0x8462002c
    ctx->pc = 0x25c954u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x25c958: 0x28420002
    ctx->pc = 0x25c958u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x25c95c: 0x1440000b
    ctx->pc = 0x25C95Cu;
    {
        const bool branch_taken_0x25c95c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25C960u;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        if (branch_taken_0x25c95c) {
            ctx->pc = 0x25C98Cu;
            goto label_25c98c;
        }
    }
    ctx->pc = 0x25C964u;
    // 0x25c964: 0x3c020032
    ctx->pc = 0x25c964u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x25c968: 0x8c47fd9c
    ctx->pc = 0x25c968u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 4294966684)));
    // 0x25c96c: 0x24842ad0
    ctx->pc = 0x25c96cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 10960));
    // 0x25c970: 0x3c05003b
    ctx->pc = 0x25c970u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x25c974: 0x24a591d8
    ctx->pc = 0x25c974u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294939096));
    // 0x25c978: 0x3a0302d
    ctx->pc = 0x25c978u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c97c: 0xc0b6252
    ctx->pc = 0x25C97Cu;
    SET_GPR_U32(ctx, 31, 0x25C984u);
    ctx->pc = 0x25C980u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C984u; }
    }
    if (ctx->pc != 0x25C984u) { return; }
    ctx->pc = 0x25C984u;
    // 0x25c984: 0x10000005
    ctx->pc = 0x25C984u;
    {
        const bool branch_taken_0x25c984 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25C988u;
        SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
        if (branch_taken_0x25c984) {
            ctx->pc = 0x25C99Cu;
            goto label_25c99c;
        }
    }
    ctx->pc = 0x25C98Cu;
label_25c98c:
    // 0x25c98c: 0x24842ad0
    ctx->pc = 0x25c98cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 10960));
    // 0x25c990: 0xc0bf2c1
    ctx->pc = 0x25C990u;
    SET_GPR_U32(ctx, 31, 0x25C998u);
    ctx->pc = 0x25C994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2FCB04u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x2fcb04(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C998u; }
    }
    if (ctx->pc != 0x25C998u) { return; }
    ctx->pc = 0x25C998u;
    // 0x25c998: 0x3c04003c
    ctx->pc = 0x25c998u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_25c99c:
    // 0x25c99c: 0x24842ad0
    ctx->pc = 0x25c99cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 10960));
    // 0x25c9a0: 0x3c05003b
    ctx->pc = 0x25c9a0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x25c9a4: 0xc0bf1c1
    ctx->pc = 0x25C9A4u;
    SET_GPR_U32(ctx, 31, 0x25C9ACu);
    ctx->pc = 0x25C9A8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294939104));
    ctx->pc = 0x2FC704u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x2fc704(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C9ACu; }
    }
    if (ctx->pc != 0x25C9ACu) { return; }
    ctx->pc = 0x25C9ACu;
    // 0x25c9ac: 0x3c020032
    ctx->pc = 0x25c9acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x25c9b0: 0x8c43fd9c
    ctx->pc = 0x25c9b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294966684)));
    // 0x25c9b4: 0x24630001
    ctx->pc = 0x25c9b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x25c9b8: 0x3c020034
    ctx->pc = 0x25c9b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25c9bc: 0x8c42e7c8
    ctx->pc = 0x25c9bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x25c9c0: 0x8c450064
    ctx->pc = 0x25c9c0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x25c9c4: 0x3c020034
    ctx->pc = 0x25c9c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25c9c8: 0x8c42d348
    ctx->pc = 0x25c9c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955848)));
    // 0x25c9cc: 0x21040
    ctx->pc = 0x25c9ccu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x25c9d0: 0xa21021
    ctx->pc = 0x25c9d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x25c9d4: 0x8442002c
    ctx->pc = 0x25c9d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x25c9d8: 0x24040001
    ctx->pc = 0x25c9d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x25c9dc: 0x621826
    ctx->pc = 0x25c9dcu;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25c9e0: 0x83880a
    ctx->pc = 0x25c9e0u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 4));
    // 0x25c9e4: 0x12200004
    ctx->pc = 0x25C9E4u;
    {
        const bool branch_taken_0x25c9e4 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x25C9E8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x25c9e4) {
            ctx->pc = 0x25C9F8u;
            goto label_25c9f8;
        }
    }
    ctx->pc = 0x25C9ECu;
    // 0x25c9ec: 0x84a20028
    ctx->pc = 0x25c9ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x25c9f0: 0x38420001
    ctx->pc = 0x25c9f0u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x25c9f4: 0x62880a
    ctx->pc = 0x25c9f4u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 3));
label_25c9f8:
    // 0x25c9f8: 0x3c04003b
    ctx->pc = 0x25c9f8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x25c9fc: 0x248491e8
    ctx->pc = 0x25c9fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294939112));
    // 0x25ca00: 0x3c10003c
    ctx->pc = 0x25ca00u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x25ca04: 0xc0b4eca
    ctx->pc = 0x25CA04u;
    SET_GPR_U32(ctx, 31, 0x25CA0Cu);
    ctx->pc = 0x25CA08u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 10960));
    ctx->pc = 0x2D3B28u;
    {
        const uint32_t __entryPc = ctx->pc;
        FileExists_0x2d3b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CA0Cu; }
    }
    if (ctx->pc != 0x25CA0Cu) { return; }
    ctx->pc = 0x25CA0Cu;
    // 0x25ca0c: 0x14400007
    ctx->pc = 0x25CA0Cu;
    {
        const bool branch_taken_0x25ca0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25CA10u;
        SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
        if (branch_taken_0x25ca0c) {
            ctx->pc = 0x25CA2Cu;
            goto label_25ca2c;
        }
    }
    ctx->pc = 0x25CA14u;
    // 0x25ca14: 0x3c04003b
    ctx->pc = 0x25ca14u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x25ca18: 0x248491f0
    ctx->pc = 0x25ca18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294939120));
    // 0x25ca1c: 0xc0b492e
    ctx->pc = 0x25CA1Cu;
    SET_GPR_U32(ctx, 31, 0x25CA24u);
    ctx->pc = 0x25CA20u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 10960));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CA24u; }
    }
    if (ctx->pc != 0x25CA24u) { return; }
    ctx->pc = 0x25CA24u;
    // 0x25ca24: 0x1000001c
    ctx->pc = 0x25CA24u;
    {
        const bool branch_taken_0x25ca24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25CA28u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x25ca24) {
            ctx->pc = 0x25CA98u;
            goto label_25ca98;
        }
    }
    ctx->pc = 0x25CA2Cu;
label_25ca2c:
    // 0x25ca2c: 0x2484fda8
    ctx->pc = 0x25ca2cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966696));
    // 0x25ca30: 0x3c05003b
    ctx->pc = 0x25ca30u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x25ca34: 0x24a591c8
    ctx->pc = 0x25ca34u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294939080));
    // 0x25ca38: 0x3c10003c
    ctx->pc = 0x25ca38u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x25ca3c: 0xc0b6252
    ctx->pc = 0x25CA3Cu;
    SET_GPR_U32(ctx, 31, 0x25CA44u);
    ctx->pc = 0x25CA40u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 10960));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CA44u; }
    }
    if (ctx->pc != 0x25CA44u) { return; }
    ctx->pc = 0x25CA44u;
    // 0x25ca44: 0x3c020034
    ctx->pc = 0x25ca44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25ca48: 0xac40d324
    ctx->pc = 0x25ca48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955812), GPR_U32(ctx, 0));
    // 0x25ca4c: 0x3c020034
    ctx->pc = 0x25ca4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25ca50: 0xc441d34c
    ctx->pc = 0x25ca50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25ca54: 0x46800860
    ctx->pc = 0x25ca54u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x25ca58: 0x3c020034
    ctx->pc = 0x25ca58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25ca5c: 0x8c42e7c8
    ctx->pc = 0x25ca5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x25ca60: 0xc4400094
    ctx->pc = 0x25ca60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ca64: 0x46000842
    ctx->pc = 0x25ca64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25ca68: 0x46000824
    ctx->pc = 0x25ca68u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x25ca6c: 0x44040000
    ctx->pc = 0x25ca6cu;
    SET_GPR_U32(ctx, 4, *(uint32_t*)&ctx->f[0]);
    // 0x25ca70: 0x3084ffff
    ctx->pc = 0x25ca70u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65535));
    // 0x25ca74: 0x220282d
    ctx->pc = 0x25ca74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ca78: 0xc0883fc
    ctx->pc = 0x25CA78u;
    SET_GPR_U32(ctx, 31, 0x25CA80u);
    ctx->pc = 0x25CA7Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x220FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioStreamPlay_0x220ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CA80u; }
    }
    if (ctx->pc != 0x25CA80u) { return; }
    ctx->pc = 0x25CA80u;
    // 0x25ca80: 0x4410005
    ctx->pc = 0x25CA80u;
    {
        const bool branch_taken_0x25ca80 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x25CA84u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x25ca80) {
            ctx->pc = 0x25CA98u;
            goto label_25ca98;
        }
    }
    ctx->pc = 0x25CA88u;
    // 0x25ca88: 0x24849210
    ctx->pc = 0x25ca88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294939152));
    // 0x25ca8c: 0xc0b492e
    ctx->pc = 0x25CA8Cu;
    SET_GPR_U32(ctx, 31, 0x25CA94u);
    ctx->pc = 0x25CA90u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 10960));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CA94u; }
    }
    if (ctx->pc != 0x25CA94u) { return; }
    ctx->pc = 0x25CA94u;
    // 0x25ca94: 0x2412fffe
    ctx->pc = 0x25ca94u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 4294967294));
label_25ca98:
    // 0x25ca98: 0x1240000f
    ctx->pc = 0x25CA98u;
    {
        const bool branch_taken_0x25ca98 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x25CA9Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x25ca98) {
            ctx->pc = 0x25CAD8u;
            goto label_25cad8;
        }
    }
    ctx->pc = 0x25CAA0u;
    // 0x25caa0: 0xc08839e
    ctx->pc = 0x25CAA0u;
    SET_GPR_U32(ctx, 31, 0x25CAA8u);
    ctx->pc = 0x220E78u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioStreamStop_0x220e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CAA8u; }
    }
    if (ctx->pc != 0x25CAA8u) { return; }
    ctx->pc = 0x25CAA8u;
    // 0x25caa8: 0x12200005
    ctx->pc = 0x25CAA8u;
    {
        const bool branch_taken_0x25caa8 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x25CAACu;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x25caa8) {
            ctx->pc = 0x25CAC0u;
            goto label_25cac0;
        }
    }
    ctx->pc = 0x25CAB0u;
    // 0x25cab0: 0xc089066
    ctx->pc = 0x25CAB0u;
    SET_GPR_U32(ctx, 31, 0x25CAB8u);
    ctx->pc = 0x25CAB4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x224198u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_stream_playing_0x224198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CAB8u; }
    }
    if (ctx->pc != 0x25CAB8u) { return; }
    ctx->pc = 0x25CAB8u;
    // 0x25cab8: 0x10000007
    ctx->pc = 0x25CAB8u;
    {
        const bool branch_taken_0x25cab8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25CABCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x25cab8) {
            ctx->pc = 0x25CAD8u;
            goto label_25cad8;
        }
    }
    ctx->pc = 0x25CAC0u;
label_25cac0:
    // 0x25cac0: 0x8c62fd9c
    ctx->pc = 0x25cac0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294966684)));
    // 0x25cac4: 0x24420001
    ctx->pc = 0x25cac4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x25cac8: 0xac62fd9c
    ctx->pc = 0x25cac8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966684), GPR_U32(ctx, 2));
    // 0x25cacc: 0xc089066
    ctx->pc = 0x25CACCu;
    SET_GPR_U32(ctx, 31, 0x25CAD4u);
    ctx->pc = 0x25CAD0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x224198u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_stream_playing_0x224198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CAD4u; }
    }
    if (ctx->pc != 0x25CAD4u) { return; }
    ctx->pc = 0x25CAD4u;
label_25cad4:
    // 0x25cad4: 0xdfbf0050
    ctx->pc = 0x25cad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_25cad8:
    // 0x25cad8: 0xdfb30040
    ctx->pc = 0x25cad8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25cadc: 0xdfb20030
    ctx->pc = 0x25cadcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25cae0: 0xdfb10020
    ctx->pc = 0x25cae0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25cae4: 0xdfb00010
    ctx->pc = 0x25cae4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25cae8: 0x3e00008
    ctx->pc = 0x25CAE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CAECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25C7FCu: goto label_25c7fc;
            case 0x25C828u: goto label_25c828;
            case 0x25C86Cu: goto label_25c86c;
            case 0x25C884u: goto label_25c884;
            case 0x25C898u: goto label_25c898;
            case 0x25C8A4u: goto label_25c8a4;
            case 0x25C8B0u: goto label_25c8b0;
            case 0x25C900u: goto label_25c900;
            case 0x25C93Cu: goto label_25c93c;
            case 0x25C98Cu: goto label_25c98c;
            case 0x25C99Cu: goto label_25c99c;
            case 0x25C9F8u: goto label_25c9f8;
            case 0x25CA2Cu: goto label_25ca2c;
            case 0x25CA98u: goto label_25ca98;
            case 0x25CAC0u: goto label_25cac0;
            case 0x25CAD4u: goto label_25cad4;
            case 0x25CAD8u: goto label_25cad8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25CAF0u;
}
